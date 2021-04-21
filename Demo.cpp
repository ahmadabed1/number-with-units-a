#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;

#include "NumberWithUnits.hpp"
using namespace ariel;

int main() {
  ifstream units_file{"units.txt"};
  NumberWithUnits::read_units(units_file);

  NumberWithUnits a{5, "km"};  
  cout << (-a) << endl;    
  cout << (3*a) << endl;   

  NumberWithUnits b{160, "m"};  
  cout << (a+b) << endl;   
  cout << (b-a) << endl;  

  cout << boolalpha; 
  cout << (a>b) << endl;  
  cout << (a<=b) << endl;  
  cout << (a==NumberWithUnits{2000, "m"}) << endl;  

  istringstream sample_input{"900  kg "};
  sample_input >> a;
  cout << a << endl;   
  cout << (a += NumberWithUnits{1, "ton"}) << endl;  
  cout << a << endl;   

  try {
    cout << (a+b) << endl;  
  } catch (const std::exception& ex) {
    cout << ex.what() << endl; 
  }
  cout << "End of demo!" << endl;
  return 0;
}
