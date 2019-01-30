#include <iostream>
#include <fstream>
#include <string>
#include "Header.h"


using namespace std;

string Menu[] = { "To display:", "0 - Number of tweets in the set || ", " 1 - Tweets that mention money || ", "2 - Tweets that mention Politics|| ", " 3 - Print to the screen tweets with Paris in ||", "4 - Print to screen tweets that include Dreamworks || ",
" 5 - Print to screen tweets that mention Uber ||" , "6 - Print to screen tweets that mention Fitness || ", " 7 - Count how many tweets that were posted on christmas day ||", "8 - count and display how many tweets that mention wrestling || ",  " 9 - Count and display tweets that mention Pizza ||" }; //array that contains all the menu options


void menu() {
	for (int i = 0; i < 10; i++) {

		cout << Menu[i] << endl;    //displays all the options in the array by using an a array and a for loop to put them all down in the console

	}

	cout << "Selection: " << endl;
	

}




void displayResult() { //this takes the result of each option within the case

	int number = 0;
	number = calculation(0);

	cout << endl;
	cout << "Search complete" << endl;
	cout << "Tweets found: ";
	cout << number << endl;
	

}

int calculation(char count) {

	string input;
	
	int tweetNum = 0;
	string text;
	ifstream inFile;
	int offset;
	string line;
	inFile.open("sampleTweets.csv");

	

		cin >> input;
		count = input[0];

		if (count == '0' || count == '1' || count == '2' || count == '3' || count == '4' || count == '5' || count == '6' || count == '7' || count == '8' || count == '9') { //if these get inputted then it'll run the option selected cout
			cout << "Option " << count << " selected. Searching Tweets." << endl;
		}



		if (inFile.good()) {
			switch (count) {
			case '0':
				cout << "Reading..." << endl;
				while (!inFile.eof()) {
					getline(inFile, line); //counts each line within the sample tweets
					tweetNum++;
				}
				break;
				
				while (!inFile.eof()) { //while loops keeps these going to the end of the file from case 1-9.

			case'1':
				cout << "Reading..." << endl;
				while (getline(inFile, line)) {
					if ((offset = line.find("money", 0)) != string::npos || (offset = line.find("Money", 0)) != string::npos) { //finds the word money within each line, while loop keeps it going until the end of the file
						tweetNum++;
					}
				}
				break;

			case '2':
				cout << "Reading..." << endl;
				while (getline(inFile, line)) { //multiple words being searched for in this case
					if ((offset = line.find("Trump", 0)) != string::npos || (offset = line.find("Theresa May", 0)) != string::npos || (offset = line.find("Brexit", 0)) != string::npos ||
						(offset = line.find("Politics", 0)) != string::npos || (offset = line.find("government", 0)) != string::npos || (offset = line.find("President", 0)) != string::npos ||
						(offset = line.find("President", 0)) != string::npos || (offset = line.find("parliament", 0)) != string::npos ||  
						(offset = line.find("Prime Minister", 0)) != string::npos || (offset = line.find("Healthcare", 0)) != string::npos ||
						(offset = line.find("impeach", 0)) != string::npos || (offset = line.find("JFK", 0)) != string::npos) {



						tweetNum++;
					}
				}
				break;
			case'3':
				cout << "reading..." << endl;
				while (getline(inFile, line)) {
					if ((offset = line.find("paris", 0)) != string::npos || (offset = line.find("Paris", 0)) != string::npos) {
						tweetNum++;
						cout << line << endl; //outputs each line as they are found
					}
				}
				break;

			case '4':
				cout << "reading..." << endl;
				while (getline(inFile, line)) {
					if ((offset = line.find("Dreamworks", 0)) != string::npos || (offset = line.find("dreamworks", 0)) != string::npos) {
						tweetNum++;
						cout << line << endl;
					}
				}
				break;

			case '5':
				cout << "reading..." << endl;
				while (getline(inFile, line)) {
					if ((offset = line.find("Uber", 0)) != string::npos || (offset = line.find("uber", 0)) != string::npos) {
						tweetNum++;
						cout << line << endl;
					}
				}
				break;

			case'6':
				cout << "reading..." << endl;
				while (getline(inFile, line)) {
					if ((offset = line.find("fitness", 0)) != string::npos || (offset = line.find("Fitness", 0)) != string::npos || (offset = line.find("Cardio", 0)) != string::npos) {
						tweetNum++;
						cout << line << endl;
					}
				}
				break;

			case'7':
				cout << "reading..." << endl;
				while (getline(inFile, line)) {
					if ((offset = line.find("25/12", 0)) != string::npos) { //searched for the date of each tweet to be christmas day
						tweetNum++;
						cout << line << endl;
					}
				}
				break;

			case'8':
				cout << "reading..." << endl;
				while (getline(inFile, line)) {
					if ((offset = line.find("wrestling", 0)) != string::npos) {
						tweetNum++;
						cout << line << endl;
					}
				}
				break;

			case'9':
				cout << "reading..." << endl;
				while (getline(inFile, line)) {
					if ((offset = line.find("Pizza", 0)) != string::npos) {
						tweetNum++;
						cout << line << endl;
					}
				}
				break;

			default:
				cout << "INPUT INVALID" << endl;
				cout << "Please enter a valid input (0-9): ";
				break;
				}
			}
		}
	
	return tweetNum;
}










	



