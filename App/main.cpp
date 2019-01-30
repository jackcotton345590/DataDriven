
#include <iostream>
#include <fstream>
#include <string>

#include "Header.h"

using namespace std;

int main() {
	cout << "This is an application that reads tweets and displays your search results" << endl;
	cout << "There is a selection of search options to choose from below" << endl;
	cout << "Happy Searching!" << endl;
	menu(); //displays the menu
	//calculation(); Don't put in the calculation otherwise it'll give thousands of lines in the console
	displayResult(); //displays the result
	system("Pause");

}

