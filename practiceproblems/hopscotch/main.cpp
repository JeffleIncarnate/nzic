#include <iostream>
#include <string>

using std::string, std::cin, std::cout, std::endl;

bool isPossible(char currValue, char prevValue);

int main()
{
    int n;
    char previousValue;
    bool possible = true;

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        char currentValue;
        cin >> currentValue;

        if (!isPossible(currentValue, previousValue) && i != 0)
        {
            possible = false;
            break;
        }

        previousValue = currentValue;
    }

    string result = (possible) ? "plausible" : "impossible";

    cout << result << endl;

    return 0;
}

bool isPossible(char currValue, char prevValue) {
    if (prevValue == 'S') {
        if (currValue == 'S' || currValue == 'E') {
            return true;
        }
    }

    if (prevValue == 'E') {
        if (currValue == 'N') {
            return true;
        }
    }

    if (prevValue == 'N') {
        if (currValue == 'S' || currValue == 'E') {
            return true;
        }
    }

    return false;
}

//  PREV         CURRENT
// Sleeping  -> sleeping   || exploring
// Exploring -> nibbling
// Nibbling  -> exploring  || sleeping