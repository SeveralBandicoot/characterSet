/*

Character Set 

@AJ Enrique Arguello

12/4/2024

Objectives: Create an STL Character Set of random letters

Using an Iterator, Display all the characters in the Set

Did the program automatically sort the letters? Explain

*/

#include <iostream>
#include <set>

using namespace std;

int main() {
  set<char> charSet; // initalization of character set

  charSet.insert('Z');
  charSet.insert('D');
  charSet.insert('F');
  charSet.insert('W');
  charSet.insert('G');


  cout << "Elements of set: ";
  for (set<char>::iterator it = charSet.begin(); it != charSet.end(); ++it) { // using iterator it to print contents of set 
    cout << *it << " ";
  }
  cout << endl;

  return 0;
}
