#include <iostream>
#include <string>

using std::string, std::cin, std::cout;

int main() {
    int n;

    cin >> n;

    for (int i = 1; i <= n; ++i) {
        if (i % 5 == 0 && i % 3 == 0) {
            cout << "FizzBuzz\n";
        } else if (i % 5 == 0) {
            cout << "Buzz\n";
        } else if (i % 3 == 0) {
            cout << "Fizz \n";
        } else {
            cout << i << "\n";
        }
    }
    
    return 0;
}