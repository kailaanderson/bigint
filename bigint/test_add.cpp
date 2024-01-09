// bigint Test Program
//
// Tests:  int constructor, uses ==
// 
// NEED TO IMPLEMENT
//
#include <iostream> 
#include <cassert>
#include "bigint.hpp"


//===========================================================================
int main () {
    {

        // VERY INCOMPLETE set of tests.


        //------------------------------------------------------
        // Setup fixture
        bigint left(0);
        bigint right(0);
        bigint result;

        // Test 
        result = left + right;

        // Verify
        assert(left   == 0);
        assert(right  == 0);
        assert(result == 0);
    }

    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(1);
      bigint right(0);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 0);
      assert(result == 1);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(1);
      bigint right(1);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 1);
      assert(result == 2);
    }
    {
      //-----------------------------------------------------
      // Setup fixture
      bigint left(22);
      bigint right(4);
      bigint result;

      // Test
      result = left +right;

      // Verify
      assert(left   == 22);
      assert(right  == 4);
      assert(result == 26);

      std::cout << left << " + " << right << " = " << result << std::endl;
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left (4);
      bigint right ("41");
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 4);
      assert(right  == "41");
      assert(result == 45);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left (25);
      bigint right (50);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 25);
      assert(right  == 50);
      assert(result == 75);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left (891);
      bigint right (9);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 891);
      assert(right  == 9);
      assert(result == 900);

      std::cout << left << " + " << right << " = " << result << std::endl;

    }
    {
      //-----------------------------------------------------
      // Setup fixture
      bigint left("7145");
      bigint right("1");
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == "7145");
      assert(right  == "1");
      assert(result == "7146");
    }
    {
      //-----------------------------------------------------
      // Setup fixture
      bigint left(81111);
      bigint right(241);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 81111);
      assert(right  == 241);
      assert(result == 81352);
    }
    {
      //----------------------------------------------------
      // Setup fixture
      bigint left(230);
      bigint right(67241);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 230);
      assert(right  == 67241);
      assert(result == 67471);

      std::cout << left << " + " << right << " = " << result << std::endl;

    }
    {
      //----------------------------------------------------
      // Setup fixture
      bigint left("324225175");
      bigint right("651248876");
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == "324225175");
      assert(right  == "651248876");
      assert(result == "975474051");
    }
    {
      //-----------------------------------------------------
      // Setup fixture
      bigint left("55555555555555555555");
      bigint right(33333);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == "55555555555555555555");
      assert(right  == 33333);
      assert(result == "55555555555555588888");

      std::cout << left << " + " << right << " = " << result << std::endl;

    }
    {
      //-----------------------------------------------------
      // Setup fixture
      bigint left(2);
      bigint right("900000000002");
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 2);
      assert(right  == "900000000002");
      assert(result == "900000000004");
    }
    {
      //-----------------------------------------------------
      // Setup fixture
      bigint left("42");
      bigint right("657657657657657");
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == "42");
      assert(right  == "657657657657657");
      assert(result == "657657657657699");
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left("1111111111111111111111111111111111111111");
      bigint right("2222222222222222222222222222222222222222");
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == "1111111111111111111111111111111111111111");
      assert(right  == "2222222222222222222222222222222222222222");
      assert(result == "3333333333333333333333333333333333333333");

      std::cout << left << " + " << right << " = " << result << std::endl;

    }
    //Add test cases as needed.
    
    
    std::cout << "Done with testing addition." << std::endl;
    return 0;
}

