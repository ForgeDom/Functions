#include <iostream>
#include <string>
using namespace std;

const char topLeft = 0xC9;   // ┌
const char topRight = 0xBB;  // ┐
const char bottomLeft = 0xC8; // └
const char bottomRight = 0xBC; // ┘
const char horizontal = 0xCD; // ─
const char vertical = 0xBA;   // │

const char spades = 6; // ♠
const char hearts = 3; // ♥
const char diamonds = 4; // ♦
const char clubs = 5; // ♣

void printCard(const string& rank, char suitSymbol) {
    cout << topLeft << string(9, horizontal) << topRight << endl;

    cout << vertical << " " << rank;
    if (rank == "10") {
        cout << string(6, ' ') << vertical << endl; 
    }
    else {
        cout << string(7, ' ') << vertical << endl;
    }

    cout << vertical << string(9, ' ') << vertical << endl;
    cout << vertical << string(9, ' ') << vertical << endl;

    cout << vertical << "    " << suitSymbol << "    " << vertical << endl;

    cout << vertical << string(9, ' ') << vertical << endl;
    cout << vertical << string(9, ' ') << vertical << endl;

    cout << vertical << "      " << rank;
    if (rank == "10") {
        cout << " " << vertical << endl; 
    }
    else {
        cout << "  " << vertical << endl;
    }

    cout << bottomLeft << string(9, horizontal) << bottomRight << endl;
}

int main() {
    printCard("A", spades);   
    printCard("10", hearts);  
    printCard("J", diamonds); 
    printCard("K", clubs);    

    return 0;
}
