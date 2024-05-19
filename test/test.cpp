#include "infinite.h"
#include <iostream>

using namespace std;

int main() {
    infinite num;

    cout << num << endl << (num > 1000000 ? "true" : "false");
    return 0;
}
