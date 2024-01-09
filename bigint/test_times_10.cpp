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
        bi = bi.times10(0);

        // Verify
        assert(bi == 3);  //Wrong. Will FAIL, fix and add tests cases
    }
    
    //Add test cases as needed.

    {
      // Setup fixture
      bigint bi(3);

      // Test
      bi = bi.times10(5);

      // Verify
      assert(bi == 300000);
      std::cout << "bigint bi = 3. bi.times10(5) is = " << bi << std::endl;
    }

    {
      // Setup fixture
      bigint bi(786);

      // Test
      bi = bi.times10(10);

      // Verify
      assert(bi == "7860000000000");
      std::cout << "bigint bi = 786. bi.times10(10) is = " << bi << std::endl;

    }

    {
      // Setup fixture
      bigint bi("2398746531");

      // Test
      bi = bi.times10(12);

      //Verify
      assert(bi == "2398746531000000000000");
      std::cout << "bigint bi = 2398746531. bi.times10(12) is = " << bi << std::endl;

    }

    {
      // Setup fixture
      bigint bi(7900);

      // Test
      bi = bi.times10(2);

      //Verify
      assert(bi == "790000");
    }

    {
      // Setup fixture
      bigint bi("9999999999999999999999999999999999999999");

      // Test
      bi = bi.times10(20);
      
      // Verify
      assert(bi == "999999999999999999999999999999999999999900000000000000000000");
      std::cout << "bigint bi = 9999999999999999999999999999999999999999 . bi.times10(20) is = " << bi << std::endl;

    }

    std::cout << "Done testing times_10" << std::endl;
    return 0;
}

