#include <iostream>
#include <list>

using std::cin, std::cout, std::endl;

int main() {
    int n, threshold;

    int curr, prev, doublePrev;
    bool wasFault = false;

    cin >> n >> threshold;

    for (int i = 0; i < n; ++i) { 
        cin >> curr;

        if (curr < threshold && prev < threshold && doublePrev < threshold) {
            cout << "Fault Detected" << endl;
            cout << doublePrev << " " << prev << " " << curr;
            wasFault = true;
            break;
        }

        doublePrev = prev;
        prev = curr;
    }

    if (!wasFault) {
        cout << "No Fault";
    }

    return 0;
}