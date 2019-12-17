#include <iostream>
#include <string>


/**
 * @brief Shows how to define and use a string object
 *
 * We will define string variables and then see what operators and
 * functions work with these variables.
 *
 * @return int 0 means function exited with success
 */
int main() {
  // create a variable of type string
  std::string name = "Big Red";

  // print it out
  // std::cout << name << std::endl;
  // // get a string from a user
  // std::cout << "Enter your full name? ";
  // std::getline(std::cin, name);
  // std::cout << "Hi " << name << "." << std::endl;
  // // add two strings together

  std::string title = "Mr Cool";
  std::string formal;

  formal = name + " is " + title;

  std::cout << formal << std::endl;
 

  // how long is the string
  std::cout << formal << " The length of name is " << name.length() << std::endl;
  std::cout << formal << " The length of title is " << title.length() << std::endl;
  std::cout << formal << " The length of formal is " << formal.length() << std::endl;

  // use [] to get an individual character
  std::cout << "First char of name is " << name[0] << "." << std::endl;
  // get name and commute information from a user
  int minutes, miles;

  std::cout << "Enter your full name? ";
  std::getline(std::cin, name);
  std::cout << "how long is your commute in miles? ";
  std::cin >> miles;
  std::cout << "how much time do you spend commuting? ";
  std::cin >> minutes;

  std::cout << name << " has a " << minutes << " minutes, " << miles << " miles comute." << std::endl;

 
  // the string function find
  std::string story = 
  "Something long. And even longer as I am board and I dont like this because I suck at wright "
  "but what the hell I got nothing better to do other then stay awake.";

  std::cout << "wright is found at " << story.find("wright") << std::endl;

  // the string function replace
  std::string wright = "wright";
  story.replace(story.find("wright"), static_cast<std::string>("wright").length(), "----------");
  std::cout << story << std::endl;
  return 0;
}

/*
      "The dragons are flying over the mountains. They are hunting for a "
      "place to settle for the waldo night. What they see is endless horizon."
*/
