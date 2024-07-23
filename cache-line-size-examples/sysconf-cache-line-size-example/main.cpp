/*
 * sysconf is a solution good for Linux versions when you need a solution older
 * then C++ 20.
 */

#include <iostream>
#include <unistd.h>

int main() {
    long cacheLineSize = sysconf(_SC_LEVEL1_DCACHE_LINESIZE);
    if (cacheLineSize == -1) {
        std::cerr << "sysconf failed to get cache line size" << std::endl;
        return 1;
    }
    std::cout << "Cache line size: " << cacheLineSize << " bytes" << std::endl;
    return 0;
}
