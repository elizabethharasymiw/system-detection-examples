/*
 * sysconf is a solution good for Linux versions when you need a solution older
 * then C++ 20.
 */

#include <iostream>
#include <unistd.h>

int main() {
    std::cout << "Level 1 Cache:" << std::endl;
    std::cout << "Instruction Cache Size: " << sysconf(_SC_LEVEL1_ICACHE_SIZE) << " bytes" << std::endl;
    std::cout << "Instruction Cache Line Size: " << sysconf(_SC_LEVEL1_ICACHE_LINESIZE) << " bytes" << std::endl;
    std::cout << "Instruction Cache Associativity: " << sysconf(_SC_LEVEL1_ICACHE_ASSOC) << " bytes" << std::endl;
    std::cout << "Data Cache Size: " << sysconf(_SC_LEVEL1_DCACHE_SIZE) << " bytes" << std::endl;
    std::cout << "Data Cache Line Size: " << sysconf(_SC_LEVEL1_DCACHE_LINESIZE) << " bytes" << std::endl;
    std::cout << "Data Cache Associativity: " << sysconf(_SC_LEVEL1_DCACHE_ASSOC) << " bytes" << std::endl;
    std::cout << std::endl;
    std::cout << "Level 2 Cache:" << std::endl;
    std::cout << "Cache Size: " << sysconf(_SC_LEVEL2_CACHE_SIZE) << " bytes" << std::endl;
    std::cout << "Cache Line Size: " << sysconf(_SC_LEVEL2_CACHE_LINESIZE) << " bytes" << std::endl;
    std::cout << "Cache Associativity: " << sysconf(_SC_LEVEL2_CACHE_ASSOC) << " bytes" << std::endl;
    std::cout << std::endl;
    std::cout << "Level 3 Cache:" << std::endl;
    std::cout << "Cache Size: " << sysconf(_SC_LEVEL3_CACHE_SIZE) << " bytes" << std::endl;
    std::cout << "Cache Line Size: " << sysconf(_SC_LEVEL3_CACHE_LINESIZE) << " bytes" << std::endl;
    std::cout << "Cache Associativity: " << sysconf(_SC_LEVEL3_CACHE_ASSOC) << " bytes" << std::endl;
    std::cout << std::endl;
    std::cout << "Level 4 Cache:" << std::endl;
    std::cout << "Cache Size: " << sysconf(_SC_LEVEL4_CACHE_SIZE) << " bytes" << std::endl;
    std::cout << "Cache Line Size: " << sysconf(_SC_LEVEL4_CACHE_LINESIZE) << " bytes" << std::endl;
    std::cout << "Cache Associativity: " << sysconf(_SC_LEVEL4_CACHE_ASSOC) << " bytes" << std::endl;
    return 0;
}
