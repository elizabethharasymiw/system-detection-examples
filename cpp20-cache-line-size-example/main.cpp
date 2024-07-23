/*
 * NOTE: This solution is not always available, ran into issues with the
 * apple clang compiler on Mac OS. 
 */

#include <iostream>
#include <new>

int main() {
    std::cout << "Cache line size: "
              << std::hardware_destructive_interference_size
              << " bytes"
              << std::endl;
    return 0;
}
