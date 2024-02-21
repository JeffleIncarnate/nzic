#include <iostream>
#include <vector>
#include <unordered_map>
#include <bits/stdc++.h> 


using std::string, std::cin, std::cout, std::vector, std::unordered_map, std::endl;

int main() {
    int n;

    unordered_map<int, int> items;
    vector<int> foundKeys;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        int input;
        cin >> input;

        if (items.find(input) == items.end()) {
            items.insert({input, 1});
        } else {
            foundKeys.push_back(input);
        }
    }

    std::sort(foundKeys.begin(), foundKeys.end());

    for (int x : foundKeys) {
        cout << x << endl;
    }

    return 0;
}
