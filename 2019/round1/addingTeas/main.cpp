#include <iostream>
#include <map> 

using std::cin, std::cout, std::endl, std::map;

int main()  {
    map<char, int> items {
        {'G', 0},
        {'C', 0},
        {'E', 0},
        {'P', 0},
        {'L', 0},
        {'S', 0}
    };

    while (true) {
        
        char teaType;
        int teaAmount;

        if (teaType == 'D') {
            break;
        }

        cin >> teaType >> teaAmount;

        items[teaType] += teaAmount;
    }

    cout << items['G'] << " " << items['C'] << " " << items['E'] << " " << items['P'] << " " << items['L'] << " " << items['S'] << endl;

    return 0;
}
