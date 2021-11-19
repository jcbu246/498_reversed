#include <iostream>
#include <string>

#include "vowel_count.h"

using namespace std;

int main(){
  
  string line;
  
  cerr << "Enter a line: " << flush;
  
  while (getline(cin, line)) {
    
    cout << "Vowels in '" << line << "': "
         << count_vowels(line.c_str()) << endl;
    
    cerr << "Enter a line: " << flush;
  }
  
  cerr << endl;
  return 0;
}
