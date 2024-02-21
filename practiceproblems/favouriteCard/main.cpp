#include <iostream>

using std::string, std::cin, std::cout;

int main() {
    int numOfCards;
    int favCard;

    cin >> numOfCards >> favCard;

    for (int i = 0; i < numOfCards; ++i) {
        int input;

        cin >> input;
        
        if (favCard == input) {
            cout << i << '\n';
            break;
        }
    }


    return 0;
}