#include <iostream>
#include "gtest/gtest.h"
#include <math.h>
#include <cmath>
#include <iomanip>
using namespace std;

bool isInside(int x, int y);

TEST(DistanceTest, PositiveNos) { 
    EXPECT_EQ (true, isInside (3, 4));
  
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();


return 0;
}

bool isInside(int x, int y) {
    double pointDistance = sqrt(pow(x , 2) + pow(y, 2));

    if (pointDistance <= 10) return true;

    return false;
}