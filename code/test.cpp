#include "gtest/gtest.h"
#include <cstdlib>
#include<math.h>
using namespace std;
int squareroot(double input);
string getSuit(int card) ;
string getRank (int card) ;


TEST(SquareRootTest, PositiveNos) { 
    EXPECT_EQ (4, squareroot (16));
    EXPECT_EQ (5, squareroot (25));

}
 
TEST(SuitTest, PositiveNos) { 
    EXPECT_EQ ("Clubs", getSuit (1));
    EXPECT_EQ ("Diamonds", getSuit (52));
}
TEST(RankTest, PositiveNos) { 
    EXPECT_EQ ("King", getRank (13));
    EXPECT_EQ ("5", getRank (5));
    EXPECT_EQ ("Ace", getRank (27));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

int squareroot(double input) {
    return sqrt(input);

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

string getRank (int card) {
    
    int rank = card % 13;

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
        case 0:
            return "King" ;
            break;
    }
    return 0;
}

