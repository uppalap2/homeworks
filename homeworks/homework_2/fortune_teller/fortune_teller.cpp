#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <array> 

using namespace std;
// Tasks
// 1. Print a Welcome statement; 2. Ask user their name
// 3. Read the name when enter is pressed; 4. Ask when they are born
// 5. Please enter an ajective and read it after the user enters
// 6. Second adjective
// 7. Foryune telling statement

int main() {
  string name;
  const map<string,string> get_noun = {{"spring", "STL guru"},{"summer", "C++ expert"},{"autumn", "coding beast"},{"winter", "software design hero"}};
  const array arr{"eats UB for breakfast","finds errors quicker than the compiler", "is not afraid of C++ error messages"};
  array<string,2> adjective{};
  string time_of_year_born;
  // adjective.reserve(2); // Reserving size for two adjectives
  cout << "Welcome to the fortune teller program! \n" << endl;
  cout << "Please enter your name: " << endl;
  cin >> name;
  cout << "Please enter the time of year when you were born: \n(pick from 'spring', 'summer', 'autumn', 'winter')" << endl;
  cin >> time_of_year_born;
  cout << "Please enter an adjective:" << endl;
  cin >> adjective[0];
  cout << "Please enter another adjective:" << endl;
  cin >> adjective[1];

  // cout << name << endl;
  // cout << time_of_year_born << endl;
  // cout << adjective[1] << endl;
  // cout << adjective[2] << endl;

  // cout << adjective[name.length() % adjective.size() + 1] << endl;
  // cout << get_noun.at(time_of_year_born) << endl;
  // cout << name <<endl;
  // cout << arr[name.length() % arr.size() + 1] << endl;

  // cout << adjective[name.length() % adjective.size()+1] <<endl;

  // cout << get_noun.at(time_of_year_born) <<endl;
  //cout << arr[name.length() % arr.size()] <<endl;

  cout << name << ", the " << adjective[name.length() % adjective.size()] << " " << get_noun.at(time_of_year_born) << " that " << arr[name.length() % arr.size()] << endl;
  return 0;
}