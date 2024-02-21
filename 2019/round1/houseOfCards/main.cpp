#include <iostream>
#include <math.h>

using std::cin, std::cout, std::endl;

int main()  {
    int n;
    int total = 0;

    cin >> n;

    for (int i = 1; i <= n; ++i) {
        total += i * 2;
        total += (i == n) ? 0 : i;
    }

    cout << total << endl;

    return 0;
}
