#include <iostream>
#include <cpuid.h>

int main() {
    // Declare four unsigned integer variables to store CPU information
    unsigned int eax, ebx, ecx, edx;

    // The __cpuid intrinsic fetches the CPU information based on the value in the eax register.
    // The first argument (1) specifies the information type (Processor Info and Feature Bits).
    // The results are stored in the variables eax, ebx, ecx, and edx.
    __cpuid(1, eax, ebx, ecx, edx);

    // Extract the cache line size from the ebx register.
    // The cache line size is stored in bits 15:8 of the ebx register.
    // The mask 0xFF00 isolates these bits, and the right shift by 5 aligns the value correctly.
    unsigned int cacheLineSize = (ebx & 0xFF00) >> 5;

    std::cout << "Cache line size: " << cacheLineSize << " bytes" << std::endl;

    return 0;
}

