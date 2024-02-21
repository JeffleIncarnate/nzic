#include <iostream>
#include <string>

using std::string, std::cin, std::cout;

int main() {
    int bottomLeft[2];
    int topRight[2];

    cin >> bottomLeft[0] >> bottomLeft[1];
    cin >> topRight[0] >> topRight[1];

    cout << ((topRight[0] - bottomLeft[0]) * 2) + ((topRight[1] - bottomLeft[1]) * 2);

    return 0;
}