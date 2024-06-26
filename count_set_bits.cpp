// There is a bug in the provided code. The `countSetBits` function calculates the number of set bits in a number correctly, but the result is not displayed. To fix this issue, you need to modify the `main` function to output the result of the `countSetBits` function. Here's the corrected code:

// ```cpp
#include <iostream>
using namespace std;

int countSetBits(int n) {
    int count = 0;
    while (n > 0) {
        n = n & (n - 1);
        count++;
    }
    return count;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int numSetBits = countSetBits(n);
    cout << "Number of set bits: " << numSetBits << endl;

    return 0;
}
