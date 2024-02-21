#include <iostream>

using std::cin, std::cout;

int main() {
    int n;
    int total = 0;

    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        int price;
        int discout;


        cin >> price >> discout;

        if (discout > price) {
            total += 0;
            continue;
        }

        total += price - discout;
    }

    cout << total << '\n';
    
    return 0;
}