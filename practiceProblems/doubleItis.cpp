#include <iostream>

using std::cout, std::cin;

int main() {
    int n, m;

    cin >> n >> m;

    if (n / 2 < m) {
        cout << "No";
    } else {
        cout << "Yes";
    }
    
    return 0;
}