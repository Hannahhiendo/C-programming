#include <iostream>
#include <cstdlib>
using namespace std;

std::string getSuit(int card);
std::string getRank(int card);

int main() {
    srand(time(0));
    int card = rand() % 52 + 1;
    std::string suit;
    std::string rank;

    cout << "Your card is the " ;
        suit = getSuit(card);
        rank = getRank(card);

        cout << rank << " of " << '\n';
        cout << suit << endl;
        cout << card << endl;

return 0;
}

string getSuit(int card) {

    if (card >= 1 && card <= 13) {
        return "Clubs" ;
    }
    if (card >= 14 && card <= 26) {
        return  "Hearts" ;
    }
    if (card >= 27 && card <= 39){
        return  "Spades" ;
    }
    if (card >= 40 && card <= 52){
        return  "Diamonds" ;
    }
    return 0;
}

std::string getRank (int card) {
    
    
    int rank = card % 13 + 1;

    switch(rank){
        case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10:  
            rank = rank;
            return std::to_string(rank);
            break;
        case 1:
            return "Ace";
            break;
        case 11:
            return "Jack";
            break;
        case 12:
            return "Queen" ;
            break ;
        case 13:
            return "King" ;
            break;
    }
    return 0;
}


