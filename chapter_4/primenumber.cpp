#include <iostream>
#include "gtest/gtest.h"
using namespace std;


bool isPrime (int n);

TEST(Test, keyTwo) { 
    EXPECT_EQ (true, isPrime(5));
    EXPECT_EQ (false, isPrime(25));
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();


return 0;
} 

bool isPrime (int n){ 
    for ( int divisor = 2; divisor <= n/2 ; divisor ++){
        if (n % divisor == 0){
            cout << divisor << '\n';
            return false;
        }
    }
    return true;
}

