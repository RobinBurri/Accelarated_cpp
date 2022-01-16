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
     // ask for and read the student's name
	string name;
	cout << "What's your name?: ";
	cin >> name;
    cout << name + ", ";
	double midterm_grade, final_grade;
	cout << "what's your midterm and final grades?: ";
	cin >> midterm_grade >> final_grade;
	cout << "Enter all your homework grade(s), "
			"followed by end-of-file: " << endl;
    int count = 0;
    double sum =  0;
    // a variable into which to read
    double x;
    vector<double> homework;

    // // we have read count grades so far, and
    // // sum is the sum of the first count grades
    while (cin >> x) {
        homework.push_back(x);
		count++;
		sum += x;
    }
	// VECTOR SIZE
	vector<double>::size_type size;
	vector<double>::size_type mid;
	size = homework.size();
	mid = size/2;
	double median;
	median = size % 2 == 0 ? (homework[mid] + homework[mid -1]) / 2 : homework[mid];
	 if (size == 0)
	 {
		 cout << "You must enter your grades. "
		 		"Please try again." << endl;
		return 1;
	 }
	 sort(homework.begin(), homework.end());

	//  // write the result
    streamsize prec = cout.precision();
    // cout
    cout 	<< "Your final grade is " << setprecision(3)
			<< 0.2 * midterm_grade + 0.4 * final_grade + 0.4 * sum / count
			<< setprecision(prec) << endl;
    cout 	<< "Your median score is " << setprecision(3)
			<< 0.2 * midterm_grade + 0.4 * final_grade + 0.4 * median
			<< setprecision(prec) << endl;

	cout << median << endl;
}

