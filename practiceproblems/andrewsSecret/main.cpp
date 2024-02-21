#include <algorithm> 
#include <bits/stdc++.h>
#include <math.h>

using std::string, std::cin, std::cout;

int main() {
    string input;
    int min = 10000;
    int max = -10000;
    int total = 0;
    int length = 0;

    getline(cin, input);

    std::stringstream ss(input);
    int currNum;
    while (ss >> currNum) {
        if (currNum > max) {
            max = currNum;
        }

        if (currNum < min){
            min = currNum;
        }

        total += currNum;
        ++length;
    }

    cout << min << " " << max << " " << std::floor(total / length) << std::endl;


    return 0;
}