// Ask for a person's name, and greet the person
// ask for a person's name, and generate a framed greeting
#include <iostream>
#include <string>

int main()
{
	//ask fot the person's name
	std::cout << "Please enter your first name: ";

	// read the name
	std::string name;
	std::cin >> name;
	
	const std::string greeting = "Hello, " + name + "!";
	const std::string spaces(greeting.size(), ' ');
	const std::string second = "* " + spaces + " *";
	const std::string first(second.size(), '*');

	std::cout << std::endl;
	std::cout << first << std::endl;
	std::cout << second << std::endl;
	std::cout << "* " << greeting << " *" << std::endl;
	std::cout << second << std::endl;
	std::cout << first <<std::endl;
	return (0);
}

