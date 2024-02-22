#include <iostream>
#include <unordered_map>
#include <bits/stdc++.h>
#include <vector>

using std::cin, std::cout, std::endl, std::string, std::unordered_map, std::stringstream, std::vector;

int main() {
    int height, width, numOfThrows;

    cin >> height >> width >> numOfThrows;

    for (int i = 0; i <= numOfThrows; ++i) {
        string input;

        getline(cin, input);

        vector<int> values;

        for (int j = 0; j < input.length(); ++j) {
            if (input[j] == ' ') {
                continue;
            }

            if (isdigit(input[j])) {
                cout << "is a digit" << endl;
            } else {
                cout << "is not a digit" << endl;
            }
        }
    }

    string finalInput;

    cin >> finalInput;

    cout << finalInput << endl;

    return 0;
}