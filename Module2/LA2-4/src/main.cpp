#include <iostream>
#include <array>
#include "carton.h"

const int kMaxSize = 10;

int main() {
  // create a Carton object using the default constructor
  Carton smallBox = Carton();
  Carton bigBox;
  std::array<Carton, kMaxSize> boxes;
  boxes.fill(Carton(12,53,30));

  int index = 0;

  for(auto box : boxes) {
    std::cout << "Box " << ++index << ": \n";
    box.displayDimensions(); 
  }

  try
  {
    bigBox = Carton(55.8,64.2,15);
  }catch(const std::exception& e)
  {
    std::cerr << e.what() << '\n';
  }
  
  // create a Carton object using the other constructor

  smallBox.setWidth(11.3);
  smallBox.setLength(12.3);
  smallBox.setHeight(10.0);
  
  smallBox.displayDimensions();
  smallBox.displayVolume();
  bigBox.displayDimensionsWithVolume();


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