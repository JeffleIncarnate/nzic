#include <algorithm> 
#include <iostream>
#include <string>

using std::string, std::cin, std::cout, std::reverse;

int main() {
    string word;

    cin >> word;

    reverse(word.begin(), word.end());

    cout << word;
    
    return 0;
}