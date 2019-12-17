#include <array>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/**
 * @brief Shows how to define and use an ifstream object to read from a file.
 *
 * We will define ifstream objects and then see some operators
 * and methods that work with these objects.
 *
 * @return int 0 means function exited with success
 */

const int kMaxSize = 24;

int main() {

  // create an ojbect of type ifstream
  std::ifstream in;
  std::ifstream nameIn;
  std::ifstream nameAgeIn;
  // open the file age.txt
  in.open("../age.txt");
  nameIn.open("../name.txt");
  nameAgeIn.open("../name_age.txt");

  if (in.fail() && nameIn.fail() && nameAgeIn.fail()){
    std::cout << "Unable to open file age.txt or name.txt.\nShutting down\n";
    return 1;
  }

  // read from the age file and store values in an array
  std::array<int, kMaxSize> ages;
  std::array<string, kMaxSize> names;

  ages.fill(-1);
  names.fill("");

  int ageSize = -1;
  int nameIndex = -1;
  int nameAgeIndex = -1;


  // in >> ages[ageSize];
  // in >> ages[++ageSize];
  // in >> ages[++ageSize];
  // in >> ages[++ageSize];



  //while(ageSize < kMaxSize && in >> ages[++ageSize]);
  //while(nameIndex < kMaxSize && std::getline(nameIn, names[++nameIndex]));
  while(nameAgeIndex < kMaxSize && nameAgeIn >> ages[++nameAgeIndex])
  {    
    nameAgeIn.ignore();
    std::getline(nameAgeIn, names[nameAgeIndex]);
  }

  for(auto index = 0; index < nameAgeIndex; ++index){
    std::cout << names[index] << " is " << ages[index] << " years of age." << std::endl;
  }

  // for(auto name : names){
  //   std::cout << name << std::endl;
  // }

  // print out the values in the array


  // read to the end of the file


  // print out the valid values in the array


  // print out the all the values in the array


  // Define an ifstream object and open the file name.txt

  // read one name, store it in the array, and print it


  // read the rest of the names in the file


  // print valid elements in the names array


  // print all the elements in the names array


  // Use a file with mixed values
  // Define an ifstream object and open the file name_age.txt


  // reset age and name arrays


  // read all the values from the name_age.txt file


  // print valid elements in the names and ages array


  // print all elements in the names and ages array

  in.close();
  return 0;
}
