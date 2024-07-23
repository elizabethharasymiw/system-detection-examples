/*
 * Using sysctl is a good work around for Mac OS since apple clang supports it.
 */

#include <iostream>
#include <sys/types.h>
#include <sys/sysctl.h>

int main() {
    size_t cacheLineSize = 0;
    size_t sizeOfCacheLineSize = sizeof(cacheLineSize);
    sysctlbyname("hw.cachelinesize", &cacheLineSize, &sizeOfCacheLineSize, 0, 0);
    std::cout << "Cache line size: " << cacheLineSize << " bytes" << std::endl;
    return 0;
}
