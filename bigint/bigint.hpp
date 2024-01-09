// Project 1 header file
// Kaila Anderson
// January 26, 2022

#include <iostream>

#ifndef BIGINT_HPP
#define BIGINT_HPP

const int capacity = 500; 

class bigint {
public:
  bigint();
  bigint(int num);
  bigint(const char[capacity]);
  void debugPrint(std::ostream&) const;
  friend std::ostream& operator<<(std::ostream&, bigint);
  bool operator==(bigint);
  friend std::istream& operator>>(std::istream&, bigint&);
  bigint operator+(const bigint&) const;
  int operator[](int) const;
  bigint timesDigit(int) const;
  bigint times10(int) const;
  bigint operator*(bigint) const; //const?
  // to comute A*B
  /*B[0] is 1's place, B[1] is 10's place, B[2] is 100's place, etc.
   product =0;
for i =0 to maxDigits-1 do
  - product = product + ( (A * B[i]) * 10^i)
  - temp = A.timesDigit(B[i]);
  - product = product + temp.times10(i);
end for
   */
  
  
  
private:  
  int numarr[capacity];
};

#endif



