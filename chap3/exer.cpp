#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cin;     using std::setprecision;
using std::cout;     using std::string;
using std::endl;     using std::streamsize;
using std::vector;

int main()
{
     // ex 3-3, 3-4
	string input;
	cout << "Write some words: ";
	vector<string> string_collection;

	while (cin >> input)
		string_collection.push_back(input);
	int size = string_collection.size();
	for (int i = 0; i < size; i++)
	{
		cout << string_collection[i] + ' ';
	}
		cout << endl;

	

}