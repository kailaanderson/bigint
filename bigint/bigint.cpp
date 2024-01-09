// function definitions
// Kaila Anderson
// Project 1

#include <iostream>
#include "bigint.hpp"

bigint::bigint(){
  for(int i = 0; i < capacity; ++i){
    numarr[i]=0;
  }
} // initialize bigint to 0

bigint::bigint(int num){
  int digit;
  do {
    for(int i = 0; i<capacity; ++i){
       digit = num % 10;
       numarr[i] = digit;
       num = num / 10;
      }
  } while (num != 0); 
} // initialize to given int

bigint::bigint(const char ch[capacity]){
    int len = 0;  
    while(ch[len]!=0){
      ++len;}// finds the length of the char array

    int digit;
    int index = 0;
    while (index < len){
      for (int i = len-1; i > -1; --i){
	digit = int(ch[i]) - int('0');
	numarr[index] = digit;
	++index;
      }
     } //implements array
      for (int i = len; i < capacity; ++i){
          numarr[i] = 0;}
  // initializes the rest of the array to 0    
} // turn char array into int array

void bigint::debugPrint(std::ostream& out) const {
  int start = capacity -1;
  while(numarr[start]==0) --start;
  for(int i =start; i>-1; --i){
    out << numarr[i] << "|"; 
  }
}

std::ostream& operator<<(std::ostream& out, bigint number){
  int start = capacity -1;
  while (number.numarr[start] == 0) --start;
  for (int i = start; i>-1; --i){
    out <<number.numarr[i];
  }
  return out;
}

bool bigint::operator==(bigint rhs){
  for (int i = 0; i<capacity; ++i){
    if (this->numarr[i] !=  rhs.numarr[i]) return false;
    else continue;
  }
  return true;
}

std::istream& operator>>(std::istream &input, bigint &number) {

    char ch = input.get();
    char chArray[capacity];
    int end;

    while (ch == '\n'|| ch == ' ' && (!input.eof())) {
            ch = input.get();
    }
    if (input.eof()) return input;
    for (int i = 0; ch != ';'; ++i) {
	  if (ch == '\n'|| ch == ' ') {
              ch = input.get();
            }
            chArray[i] = ch;
            ch = input.get();
            end = i;
        }
        if (ch == ';') {
            chArray[end + 1] = 0;
        }

        bigint holder(chArray);
            for (int i = 0; i < capacity; ++i) {
               number.numarr[i] = holder.numarr[i];
	    }
        return input; 
}

bigint bigint::operator+(const bigint& rhs) const {
  bigint result;
  int remainder = 0;
  int digit = 0;

  for (int i = 0; i < capacity - 1; ++i){
    result.numarr[i] = remainder + this->numarr[i] + rhs.numarr[i];
    if(result.numarr[i] > 9) {
      digit = result.numarr[i] % 10;
      remainder = result.numarr[i] / 10;
      result.numarr[i] = digit;
    }
    else
      remainder = 0;
  }
  return result;
}

int bigint::operator[](int index)const {
  return numarr[index];
}

bigint bigint::timesDigit(int multiplier) const{
  bigint result;
  int remainder = 0;
  int digit = 0;
  
  if(multiplier < 10 && multiplier >= 0){
    for(int i = 0; i < capacity - 1; ++i){
      result.numarr[i] = (numarr[i] * multiplier) + remainder;
      if(result.numarr[i] > 9){
	digit = result.numarr[i] % 10;
	remainder = result.numarr[i] / 10;
	result.numarr[i] = digit;
      }
      else
	remainder = 0;
    }
    return result;
  }
  else{
    std::cout << "Number is not between 0 and 9" << std::endl;
    return result;
  }
}

bigint bigint::times10(int exponent) const{
  bigint result;
  
  if (exponent < 0){
    std::cout<< "exponent is negative" << std::endl;
    return result;
  }
  else {
  int start = capacity -1;
  while (numarr[start] == 0) --start;
  for(int i = start; i >= 0; --i){
    result.numarr[i + exponent] = numarr[i];    
   }
  } return result;
}
  
bigint bigint::operator*(bigint rhs) const{
  bigint result;
  bigint temp;
  
  for(int i = 0; i < capacity; ++i){
    temp = timesDigit(rhs.numarr[i]);
    result = result + (temp.times10(i));
  }
  return result;
}
