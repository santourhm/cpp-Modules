#include <iostream>
#include <sstream>
#include <string>
#include "Fixed.hpp"
#include "Eval.hpp"

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: ./eval_expr \"expression\"" << std::endl;
        return 1;
    }

    std::string expr(argv[1]);  
    Eval e(expr);
    std::cout << e.eval() << std::endl;

    return 0;
}
