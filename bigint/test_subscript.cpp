// bigint Test Program
//
// Tests:  subscript, uses ==
//
// NEED TO IMPLEMENT
// 
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    
    {
        // Setup
        bigint bi(4);

        // Test 
        int digit = bi[0];

        // Verify
        assert(bi    == 4);
        assert(digit == 4);
    }
    
    //Add test cases!!

    {
      // Setup
      bigint bi(635);

      // Test
      int digit1 = bi[0];
      int digit2 = bi[1];
      int digit3 = bi[2];

      // Verify
      assert(bi     == 635);
      assert(digit1 ==   5);
      assert(digit2 ==   3);
      assert(digit3 ==   6);
    }
    //------------------------------------------------

    {
      // Setup
      bigint bi(75);
      bigint bi2 (57);

      // Test
      int digit1 = bi[1];
      int digit2 = bi2[1];

      // Verify
      assert(bi     == 75);
      assert(bi2    == 57);
      assert(digit1 == 7);
      assert(digit2 == 5);
      
    }
    //---------------------------------------------------

    // Setup
    bigint bi("555555555555558");

    // Test
    int digit1 = bi[0];
    int digit2 = bi[4];

    // Verify
    assert(bi     == "555555555555558");
    assert(digit1 == 8);
    assert(digit2 == 5);

    //-----------------------------------------------------

    std::cout << "Done testing subscript." << std::endl;
    return 0;
}

