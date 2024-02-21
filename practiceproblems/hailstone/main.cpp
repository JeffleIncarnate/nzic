#include <iostream>

using std::string, std::cin, std::cout;

int main() {
    int input;

    while (true) {
        cin >> input;
        int count = 0;

        if (input == 0) 
            break;

        while (true) {
            if (input == 1) 
                break;

            if (input % 2 == 0) {
                input /= 2;
            } else {
                input = (3 * input) + 1;
            }

            ++count;
        }

        cout << count << '\n';
    }
    

    return 0;
}