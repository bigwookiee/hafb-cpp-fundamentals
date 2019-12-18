#include <array>
#include <iostream>
#include <string>
#include <fstream>
/**
 * @brief Shows how to define and use an ofstream object to write to a file.
 *
 * We will define ofstream objects and then see some of the operators
 * and functions that work with these objects.
 *
 * @return int 0 means function exited with success
 */
int main() {
  // arrays that contain data
  const int kMaxSize = 20;
  std::array<int, kMaxSize> commute_minutes = {22, 51, 63, 12, 17, 93, 45,
                                          18, 66, 45, 43, 77, 38, 43,
                                          52, 21, 8,  19, 7,  14};

  std::array<int, kMaxSize> commute_miles = {8,  22, 28, 2,  4,  62, 15, 6, 42, 28,
                                        16, 43, 27, 18, 41, 8,  3,  5, 2,  4};

  std::array<std::string, kMaxSize> towns = {
      "Bountiful",    "Centerville",        "Clinton",       "South Weber",
      "West Point",   "Cottonwood Heights", "Murray",        "Salt Lake City",
      "South Jordan", "West Jordan",        "American Fork", "Lindon",
      "Payson",       "Pleasant Grove",     "Spanish Fork",  "Harrisville",
      "Ogden",        "Pleasant View",      "Riverdale",     "South Ogden"};

  std::array<std::string, kMaxSize> names = {
      "Walter", "Chris", "Stan",   "Mary",  "Shelly", "Kim",  "Kelly",
      "George", "Sam",   "Walter", "Ann",   "Laura",  "Paul", "Phillip",
      "Susan",  "Hal",   "Olivia", "Polly", "Roy",    "Scott"};

  // create a variable of type ofstream
  std::ofstream cummute;
  std::ofstream townsName;
  std::ofstream report;

  // open the file commute.txt
cummute.open("../cummute.cvs");
townsName.open("../townNames.cvs");
report.open("../report.cvs");

  if (cummute.fail() || townsName.fail() || report.fail()){
    std::cout << "Cant open a file to wright" << std::endl;
    return 1;
  }
  // write commute_minutes and commute_miles to the file commute.txt
  report << "Version,Min,Miles,Min/Mile,Name,Town" << std::endl;
  
  for(auto index = 0; index < kMaxSize; ++index){
    cummute << "V1," << commute_minutes[index] << "," << commute_miles[index] << std::endl;
    townsName << towns[index] << "," << names[index] << std::endl;
    report << commute_minutes[index] << "," << commute_miles[index] << "," 
    << static_cast<float>(commute_miles[index]) / static_cast<float>(commute_minutes[index]) << ","
    << names[index] << "," << towns[index] << std::endl;
  }

  cummute.close();
  townsName.close();
  report.close();
  // create a variable of type ofstream and open the file town.txt

  // write the towns to the file town.txt

  // create a variable of type ofstream and open the file commute_data.txt

  // write commute_minutes, commute_miles, and towns to the file commute.txt

  // do computations and add labeling to data before writing to file

  // write a report to the commute_report.txt file. Include name, town,
  // commute_minutes, commute_miles, and average minutes per mile to the file
  // commute.txt
  
  return 0;
}
