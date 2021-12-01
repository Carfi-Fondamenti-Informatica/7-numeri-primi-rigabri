#include <iostream>
#include "lib.h"

using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    if (isPrimo(n))
        cout << "numero primo";
    else
        cout << "numero non primo";
    return 0;
}
