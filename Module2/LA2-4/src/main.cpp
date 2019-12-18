#include <iostream>
#include "carton.h"



int main() {
  // create a Carton object using the default constructor
  Carton smallBox = Carton();
  // create a Carton object using the other constructor
  std::cout << "Box height: " << smallBox.height() << std::endl;
  std::cout << "Box width:  " << smallBox.width() << std::endl;
  std::cout << "Box length: " << smallBox.length() << std::endl;

  // create an array of Cartons

  // add some valid elements to the array

  // loop through the array

  // print out the volume of packages

  // print out the girth of packages

  // print out the length plus girth of packages

  // check if package is sized to ship

  // define a package that is too big to ship

  // define a package that is too small to ship

  // print if sized to ship

  // write carton data and information

  // read data from file

  // write data to file

  return 0;
}