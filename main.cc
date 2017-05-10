#include <iostream>
#include <sstream>
#include "calc.h"
using namespace std;

int main() {
	//Sample input: 
	//x = 10 
	//x + 43
	string input = "";
	vector<string> calcInputs;
	while (true) {
		auto c = cin.peek();
		if (c == EOF) break;
		getline(cin, input);

		istringstream iss(input);

		string word;

		while(iss >> word) {
			calcInputs.push_back(word);
		}

		if( calcInputs.at(0) == "LET") set_value(calcInputs.at(0)[1],stoi(calcInputs.at(3)));

		cout << math(calcInputs);

	}
}
