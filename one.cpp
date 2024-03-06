#include <iostream>
#include <cstdlib>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Usage: " << argv[0] << " num1 num2 num3 ... numN" << std::endl;
        return 1;
    }

    double max_num = atof(argv[1]);

    for (int i = 2; i < argc; ++i) {
        double num = atof(argv[i]);
        if (num > max_num) {
            max_num = num;
        }
    }

    std::cout << "Maximum number is: " << max_num << std::endl;

    return 0;
}
