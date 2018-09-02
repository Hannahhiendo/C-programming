#include <iostream>
#include "gtest/gtest.h"
using namespace std;


int getDays(int year, int month);

TEST(DaysTest, PositiveNos) { 
    EXPECT_EQ (30, getDays(2018, 9));
    EXPECT_EQ (31, getDays(2018, 8));
    EXPECT_EQ (29, getDays(2000, 2));
    EXPECT_EQ (30, getDays(2018, 6));
    EXPECT_EQ (28, getDays(2018, 2));
    EXPECT_EQ (31, getDays(1981, 5));

  
}
int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

int getDays(int year, int month){

   if (year % 4 == 0 && month == 2){
       return 29;
   }
 
    switch (month){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
            break;
        case 4: case 6: case 9: case 11:
            return 30;
            break;
        case 2:
            return 28;
            break;
    }
}