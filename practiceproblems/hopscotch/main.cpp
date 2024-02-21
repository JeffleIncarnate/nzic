#include <iostream>
#include <string>

using std::string, std::cin, std::cout;

bool isPossible(char currValue, char prevValue);

int main()
{
    int n;
    char previousValue;
    bool possible = false;

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        char currentValue;

        cin >> currentValue;

        // if (isPossible(currentValue, previousValue))
        // {
            cout << currentValue << " CURRENT " << "\n";
            cout << previousValue << " OLD " << "\n";
            // cout << "THIS OUTCOME IS POSSIBLE" << '\n';
            // possible = true;
        // }

        previousValue = currentValue;
    }

    string result = (possible) ? "plausible" : "impossible.";

    cout << result << '\n';

    return 0;
}

bool isPossible(char currValue, char prevValue)
{
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