// bigint Test Program
//
// Tests:  times_10, uses ==
//
// NEED TO IMPLEMENT
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.timesDigit(1);

        // Verify
        assert(bi == 3);  //Will FAIL, fix and add test cases.
    }


    //Add test cases as needed.

    {
      // Setup fixture
      bigint bi(12);

      // Test
      bi = bi.timesDigit(9);

      // Verify
      assert(bi == 108);
      std::cout << "12 * 9 = " << bi << std::endl;
    }

    {
      // Setup fixture
      bigint bi(0);

      // Test
      bi =  bi.timesDigit(0);

      // Verify
      assert(bi == 0);
      std::cout << "0 * 0 = " << bi <<  std::endl;
    }

    {
      // Setup fixture
      bigint bi(987);

      // Test
      bi = bi.timesDigit(0);

      // Verify
      assert(bi == 0);
      std:: cout << "987 * 0 = " << bi << std::endl;
    }

    {
      // Setup fixture
      bigint bi(500);

      // Test
      bi = bi.timesDigit(2);

      // Verify
      assert(bi == 1000);
      std::cout << "500 * 2 = " << bi << std::endl;
    }

    {
      // Setup fixture
      bigint bi("12345678");

      // Test
      bi = bi.timesDigit(1);

      // Verify
      assert(bi == "12345678");
      std::cout << "12345678 * 1 = " << bi << std::endl;
    }

    {
      // Setup fixture
      bigint bi (432);

      // Test
      bi = bi.timesDigit(5);

      // Verify
      assert(bi == 2160);
      std::cout << "432 * 5 = " << bi << std::endl;
    }
    
    std::cout << "Done testing bigint * digit" << std::endl;
    return 0;
}
