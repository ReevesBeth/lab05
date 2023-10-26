// Lab05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std; 

void cypher()
{
	vector<char> cypher({ 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' });
	string text; 
	int current; 
	char upper;
	cout << "input text to cypher: " ;
	getline(cin, text); 
	
	for (int i = 0; i <= text.length(); i++) {
		if (text[i] >= 65 && text[i] <= 90) {
			current = text[i] - 65;
			cout << cypher[current];
		}
		else if (text[i] >= 97 && text[i] <= 122) {
			text[i] = text[i] - 32;
			upper = cypher [text[i] - 65] +32;
			cout << upper; 
		}
		else {
			cout << text[i];
		}
	}
}

int main()
{
	cypher();
}
