#include <iostream>
#include <math.h>

using std::cin;

int main() {
    int andewAge;
    int minAge;

    cin >> andewAge;
    cin >> minAge;

    if (floor(andewAge / 2) < minAge) {
        printf("No");
    } else {
        printf("Yes");
    }

    return 0;
}