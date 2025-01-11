ifeq ($(shell uname -p), arm) 
    export CPATH := /usr/local/include:$(CPATH)
    export LIBRARY_PATH := /usr/local/lib:$(LIBRARY_PATH)
endif


TARGET		= software_design
TEST_TARGET	= test
SRCDIR		= ./src
OUTDIR		= ./out
SRCS		= $(shell find $(SRCDIR) -name "*.cpp" -type f | xargs)
OBJS		= $(SRCS:.cpp=.o)
TEST_SRCS	= $(shell find $(SRCDIR) -name "*.cpp" -type f -not -name '*main.cpp' | xargs)
TEST_OBJS	= $(TEST_SRCS:.cpp=.o)
DEPENDS		= $(OBJS:.o=.d)
INCDIR		= -I./src/
CXX		= g++
CXXFLAGS	= -std=c++20 -Wall -Wextra -Werror -Wpedantic -MMD -MP -lgtest -lgtest_main $(INCDIR)

.PHONY: all
all: $(TARGET)

-include $(DEPENDS)


$(TARGET): $(OBJS)
	$(CXX) -o $(OUTDIR)/$(TARGET) $(OBJS) $(CXXFLAGS)

$(TEST_TARGET): $(TEST_OBJS)
	$(CXX) -o $(OUTDIR)/$(TEST_TARGET) $(TEST_OBJS) $(CXXFLAGS)

.PHONY: clean
clean:
	$(RM) $(OBJS) $(TEST_OBJS) $(DEPENDS)

.PHONY: fclean
fclean: clean
	$(RM) $(OUTDIR)/$(TARGET) $(OUTDIR)/$(TEST_TARGET)

.PHONY: re
re: fclean all

.PHONY: debug
debug: CXXFLAGS += -g -O0 
debug: re
