#include <iostream>
#include "gtest/gtest.h"
using namespace std;


string get10thDigit(int d1, int d2, int d3, int d4, int d5 ,int d6, int d7, int d8, int d9);

TEST(DigitTest, PositiveNos) { 
    EXPECT_EQ ( "0", get10thDigit (0,0,0,0,0,0,0,0,0));
    EXPECT_EQ ( "9", get10thDigit (0,0,0,0,0,0,0,0,1));
    EXPECT_EQ ( "6", get10thDigit (0,0,0,0,0,0,0,1,1));
    EXPECT_EQ ( "X", get10thDigit (1,0,0,0,0,0,0,0,1));


}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();


return 0;
}

string get10thDigit(int d1, int d2, int d3, int d4, int d5 ,int d6, int d7, int d8, int d9){

    int d10 = (d1 * 1 + d2 * 2 + d3 * 3 + d4 * 4 + d5 * 5 + d6 * 6 + d7 * 7 + d8 * 8 + d9 * 9 ) % 11;

    if( d10 == 10){
        return "X";
    }

    return std::to_string(d10);
    
}