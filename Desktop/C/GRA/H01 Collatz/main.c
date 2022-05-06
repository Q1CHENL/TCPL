#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdbool.h>

uint64_t collatzLoop(uint64_t n);
uint64_t collatzRec(uint64_t n);


int main() {
    printf(" Anzahl Schritte fuer %llu ist %llu.",
           6148914691236517205llu,
           collatzLoop(6148914691236517205llu));
    uint16_t a = 0xffff;
    uint16_t b = a * a;
    printf("%hu", b);
    return 0;
}

uint64_t collatzLoop(uint64_t n) {
    if (n == 0 || n / 2 > 9223372036854775808llu) {
        return 0;
    }
    uint64_t count = 0;
    for (; n != 1; count++) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            if (n > (0xffffffffffffffff - 1) / 3) {
                return 0;
            }
            n = 3 * n + 1;
        }
    }
    return count;
}


uint64_t collatzRec(uint64_t n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 0;
    } else if (n % 2 == 0) {
        return 1 + collatzRec(n / 2);
    } else {
        return 1 + collatzRec(n * 3 + 1);
    }
}

