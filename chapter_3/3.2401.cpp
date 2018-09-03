#include <iostream>
#include <string>
#include "gtest/gtest.h"
#include <iomanip>
using namespace std;


int getNumber(string letter);



TEST(Test, keyTwo) { 
    EXPECT_EQ (2, getNumber("A"));
    EXPECT_EQ (2, getNumber("B"));
}

TEST(Test, keyThree) { 
    EXPECT_EQ (3, getNumber("D"));
    EXPECT_EQ (3, getNumber("F"));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();


return 0;
}


int getNumber(string letter){

switch (letter[0]) {

    case 'A': case 'B': case 'C':
        return 2;
        break;

    case 'D': case 'E': case 'F':
        return 3;
        break;
    case 'G': case 'H': case 'I':
        return 4;
        break;
    case 'J': case 'K': case 'L':
        return 5;
        break;
    case 'M': case 'N': case 'O':
        return 6;
        break;
    case 'P': case 'Q': case 'R': case 'S':
        return 7;
        break;
    case 'T': case 'U': case 'V':
        return 8;
        break;
    case 'W': case 'X': case 'Y':case 'Z':
        return 9;
        break;
}
}





