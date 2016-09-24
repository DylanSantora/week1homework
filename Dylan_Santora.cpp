#include <iostream>
using namespace std;

void pyramid(string* loc, int levels) {		 	 std::string str = *loc
	std::string s = *loc;
  for (levels = 1){
		s = "* "
	}
	for (levels = 2){
		s = "*\n** "
	}
	for (levels = 3){
		s = "*\n**\n*** "
	}
	for (levels = 4){
		s = "*\n**\n***\n**** "
	}
	
	*loc = s;
}
int main() {
	string str = "";
	string* strLoc = &str;
	pyramid(strLoc, 3);
	std::cout << str << endl;
}
