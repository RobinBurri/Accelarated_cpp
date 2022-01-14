#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    // ask fot the person's name
    cout << "Please enter your first name: ";

    // read the name
    string name;
    cin >> name;

    const string greeting = "Hello, " + name + "! ";

    // const string spaces(greeting.size(), ' ');
    // const string second = "* " + spaces + " *";
    // const string first(second.size(), '*');

    // the number of blanks surrounding the greeting
    const int pad = 1;

    // total number of rows to write
    const int rows = pad * 2 + 3;

    const string::size_type cols = greeting.size() + pad * 2 + 2;

    // separate the output from the input
    cout << endl;
    // write rows rows of output
    for (int r = 0; r < rows; r++)
    {
        string::size_type c = 0;
        while (c < cols)
        {
            if (r == pad + 1)
            {
                cout << greeting;
                c += greeting.size();
            }
            else
            {

                if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1)
                    cout << '*';
                else
                    cout << ' ';
            }
            c++;
        }
        cout << endl;
    }
    return (0);
}