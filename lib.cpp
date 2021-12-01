
#include "lib.h"

bool isPrimo(int n) {
    for (int i = n-1; i >1; i--)
        if (n % i == 0)
            return false;
    return true;
}
