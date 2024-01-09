#include<iostream>
#include<fstream>
#include "bigint.hpp"

int main(){
  std::ifstream file("data1-2.txt");

  if(!file.is_open()){
    std::cout << "File is not open" << std::endl;
    return 0;
}
  bigint one;
  bigint two;

  do {
    file >> one;
    file >> two;
    bigint result = one * two;

    std::cout << "The first bigint is: " << one << std::endl << std::endl;
    std::cout << "The second bigint is: " << two << std::endl << std:: endl;
    std::cout << "The bigints multiplied are: " << result << std::endl << std::endl;
  }while (!file.eof());
  std::cout << "Done with make multiply" << std::endl;
}
