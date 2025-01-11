#include <iostream>

//import G15;
import G15_OOP;

int main(int argc, char* argv[]) {
    std::cout << "~~~~~~~~~~~" << std::endl;
    std::cout << "C++ Software Design" << std::endl;
    std::cout << "~~~~~~~~~~~" << std::endl;

    for (int i = 0; i < argc; i++) {
        std::cout << "argv[" << i << "]:" << argv[i] << std::endl;
    }


    //G15::main_g15();
    G15_OOP::main_g15_oop();

    return 0;
}
