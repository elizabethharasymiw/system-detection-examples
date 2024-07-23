/*
 * sysconf is a solution good for Linux versions when you need a solution older
 * then C++ 20.
 */

#include <stdio.h>
#include <unistd.h>

int main() {
    printf("Level 1 Cache:\n");
    printf("Instruction Cache Size: %ld bytes\n", sysconf(_SC_LEVEL1_ICACHE_SIZE));
    printf("Instruction Cache Line Size: %ld bytes\n", sysconf(_SC_LEVEL1_ICACHE_LINESIZE));
    printf("Instruction Cache Associativity: %ld bytes\n", sysconf(_SC_LEVEL1_ICACHE_ASSOC));
    printf("Data Cache Size: %ld bytes\n", sysconf(_SC_LEVEL1_DCACHE_SIZE));
    printf("Data Cache Line Size: %ld bytes\n", sysconf(_SC_LEVEL1_DCACHE_LINESIZE));
    printf("Data Cache Associativity: %ld bytes\n", sysconf(_SC_LEVEL1_DCACHE_ASSOC));
    printf("\n");
    printf("Level 2 Cache:\n");
    printf("Cache Size: %ld bytes\n", sysconf(_SC_LEVEL2_CACHE_SIZE));
    printf("Cache Line Size: %ld bytes\n", sysconf(_SC_LEVEL2_CACHE_LINESIZE));
    printf("Cache Associativity: %ld bytes\n", sysconf(_SC_LEVEL2_CACHE_ASSOC));
    printf("\n");
    printf("Level 3 Cache:\n");
    printf("Cache Size: %ld bytes\n", sysconf(_SC_LEVEL3_CACHE_SIZE));
    printf("Cache Line Size: %ld bytes\n", sysconf(_SC_LEVEL3_CACHE_LINESIZE));
    printf("Cache Associativity: %ld bytes\n", sysconf(_SC_LEVEL3_CACHE_ASSOC));
    printf("\n");
    printf("Level 4 Cache:\n");
    printf("Cache Size: %ld bytes\n", sysconf(_SC_LEVEL4_CACHE_SIZE));
    printf("Cache Line Size: %ld bytes\n", sysconf(_SC_LEVEL4_CACHE_LINESIZE));
    printf("Cache Associativity: %ld bytes\n", sysconf(_SC_LEVEL4_CACHE_ASSOC));
    return 0;
}

