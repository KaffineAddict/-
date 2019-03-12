#include <iostream>
#include <exception>
#include <string>

using std::cout;
using std::exception;
using std::string;

int main()
{
	try
	{
		string 💩 = "You can throw any data type in C++. To demonstrate lets throw poo";
		throw 💩;
	}
	catch (string 💩)
	{
		cout << "Caught poo" << std::endl;
		cout << "Message: " << 💩 << std::endl;
	}

	try
	{
		string 💩 = "Its better to throw an exceptional poo though";
		throw new exception(💩.c_str());
	}
	catch (exception& 💩)
	{
		cout << "Caught an exceptional poo!" << std::endl;
		cout << "Message: " << 💩.what() << std::endl;
	}

	try
	{
		string 💩 = "C++ also has a catch all that will catch all exceptions. Using just this is usually bad practice though as it contains no information on the exception!";
		throw new exception(💩.c_str());
	}
	catch (...)
	{
		cout << "SOMEONE IS THROWING POO!";
	}

	return 0;
}
