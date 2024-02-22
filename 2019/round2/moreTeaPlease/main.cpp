#include <iostream>

using std::cout, std::cin, std::endl;

int main() {
    int cartonsGinger, cartonChamomile, cartonsEarlGray, cartonsPeppermint, cartonsLemon, cartonsStrawberry;
    
    cin >> cartonsGinger; 
    cin >> cartonChamomile; 
    cin >> cartonsEarlGray; 
    cin >> cartonsPeppermint; 
    cin >> cartonsLemon; 
    cin >> cartonsStrawberry; 

    cout << "Ginger " << cartonsGinger * 24 * 10 << endl;
    cout << "Chamomile " << cartonChamomile * 24 * 10 << endl;
    cout << "Earl Gray " << cartonsEarlGray * 24 * 10 << endl;
    cout << "Peppermint " << cartonsPeppermint * 24 * 10 << endl;
    cout << "Lemon " << cartonsLemon * 24 * 10 << endl;
    cout << "Strawberry " << cartonsStrawberry * 24 * 10 << endl;

    return 0;
}