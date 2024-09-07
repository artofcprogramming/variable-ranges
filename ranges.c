#include <stdio.h>
#include <limits.h>

int main()
{
    printf("char with limits.h\n");
    printf("  char: %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("  unsigned char: 0 to %d\n\n", UCHAR_MAX);
    printf("char with direct calculation\n");
    printf("  char: %d to %d\n", -(1 << (8-1)), (1 << (8-1)) - 1);
    printf("  unsigned char: 0 to %d\n\n", (1 << 8) - 1);

    printf("short with limits.h\n");
    printf("  short: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("  unsigned short: 0 to %d\n\n", USHRT_MAX);
    printf("short with direct calculation\n");
    printf("  short: %d to %d\n", -(1 << (16-1)), (1 << (16-1)) - 1);
    printf("  unsigned short: 0 to %d\n\n", (1 << 16) - 1);

    printf("int with limits.h\n");
    printf("  int: %d to %d\n", INT_MIN, INT_MAX);
    printf("  unsigned int: 0 to %u\n\n", UINT_MAX);
    printf("int with direct calculation\n");
    printf("  int: %ld to %ld\n", -(1L << (32-1)), (1L << (32-1)) - 1);
    printf("  unsigned int: 0 to %ld\n\n", (1L << 32) - 1);

    printf("long with limits.h\n");
    printf("  long: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("  unsigned long: 0 to %lu\n\n", ULONG_MAX);
    printf("long with direct calculation\n");
    printf("  long: %ld to %ld\n", -(1UL << (64-1)), (1UL << (64-1)) - 1);
    printf("  unsigned long: 0 to %llu\n\n", ~0ULL);
}
