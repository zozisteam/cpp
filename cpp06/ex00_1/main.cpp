#include <cstdlib>
#include <cctype>
#include <cstring>
#include <cmath>
#include <limits>
#include <iostream>
#include <iomanip>

//print char values
void charPrint(double value) {
	std::cout << "char	:" << std::right;
    // Check if value is in range for char
    if (isinf(value) || isnan(value) || value > std::numeric_limits<char>::max()
            || value < std::numeric_limits<char>::min())
        std::cout << "impossible";
    // Check if value is printable
    else if (!isprint(static_cast<char>(value)))
        std::cout << "Non displayble";
    else
        std::cout << "'" << static_cast<char>(value) << "'";
    std::cout << std::endl;
}

//print int values
void intPrint(double value) {
	std::cout << "int	:" << std::right;
    // Check if value is in range for int
    if (isinf(value) || isnan(value) || value > std::numeric_limits<int>::max()
            || value < std::numeric_limits<int>::min())
        std::cout << "impossible";
    else
        std::cout << static_cast<int>(value);
    std::cout << std::endl;
}

// Function to print float values
void floatPrint(double value, int prec) {
    std::cout << "float	:" << std::right;
    //checks if the value is not infinite, not a NaN, and is within the range of the float data type.
    if (!isinf(value) && !isnan(value) && value && 
		(value < -std::numeric_limits<float>::max()|| (value > -std::numeric_limits<float>::min() && 
		value < std::numeric_limits<float>::min()) || value > std::numeric_limits<float>::max()))
        std::cout << "impossible";
    else
        std::cout << std::setprecision(prec) << std::fixed << static_cast<float>(value) << 'f';
    std::cout << std::endl;
}

// Function to print double values
void doublePrint(double value, int prec) {
    std::cout << "double	:" << std::right;
    std::cout << std::setprecision(prec) << std::fixed << value << std::endl;
}

// Function to handle invalid input
void end(int rc) {
    std::cerr << "Invalid value" << std::endl;
    exit(rc);
}

void nanPrint(std::string const &arg)
{
	std::cout << "char	:" << std::right;
	std::cout << "impossible" << std::endl;
	std::cout << "int	:" << std::right;
	std::cout << "impossible" << std::endl;
	std::cout << "float	:" << std::right;
	std::cout << arg << std::endl;
	std::cout << "double	:" << std::right;
	std::cout << arg.substr(0, arg.length() - 1) << std::endl;
	exit(0);
}

void nanZ(std::string const &str)
{
	if (str == "nanf" || str == "+nanf" || str == "-nanf")
		nanPrint("nanf");
	if (str == "+inff" || str == "inff")
		nanPrint("inff");
	if (str == "-inff")
		nanPrint("-inff");
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cerr << "bad input" << std::endl;
		return (1);
	}
	char *idx;
	std::string str(argv[1]);

	if (str.length() <= 0)
		end(1);
	for (std::size_t i = 0; i < str.length(); i++)
		str[i] = tolower(str[i]);

	double value = std::strtod(argv[1], &idx);
	int prec = 1;

	if ((void *)idx == (void *)(argv[1] + str.length()) || ((void *)idx == (void *)(argv[1] + str.length() - 1) && tolower(str[str.length() - 1]) == 'f'))
	{
		if (isspace(argv[1][0]))
			end(1);
		std::size_t pointPos = str.find_first_of('.');
		if (pointPos != std::string::npos)
		{
			std::size_t lastDecPos = str.find_last_not_of('0');
			if (lastDecPos != std::string::npos && pointPos < lastDecPos)
				prec = lastDecPos - pointPos;
		}
	}
	else if (str.length() == 1)
		value = argv[1][0];
	else if (str == "nanf" || str == "+nanf" || str == "-nanf" || str == "+inff" || str == "inff" || str == "-inff")
		nanZ(str);
	else
		end(1);
	charPrint(value);
	intPrint(value);
	floatPrint(value, prec);
	doublePrint(value, prec);
	return (0);
}

// The main function of the program starts by checking if the number of command line arguments passed is equal to 2. If not, it prints an error message "bad input" and exits the program with a return code of 1.

// Next, it declares a variable idx of type char* and a string variable str which is initialized with the first command line argument.

// It then checks if the input string is equal to "nanf", "+nanf", "-nanf" and if it's true it calls the function nanPrint() and passes the input string as an argument, the function nanPrint() then prints "impossible" for the char and int, and the passed string as the value for float and double, and exits the program with a return code of 0.

// It then checks if the input string is equal to "+inff", "inff" and if it's true it calls the function nanPrint() and passes the input string as an argument, the function nanPrint() then prints "impossible" for the char and int, and the passed string as the value for float and double, and exits the program with a return code of 0.

// It then checks if the input string is equal to "-inff" and if it's true it calls the function nanPrint() and passes the input string as an argument, the function nanPrint() then prints "impossible" for the char and int, and the passed string as the value for float and double, and exits the program with a return code of 0.

// After that, it converts the input string to a double using the strtod() function, which converts a string to a double value and assigns the result to the value variable.

// Then it calls the function charPrint(value) to print the char value, the function intPrint(value) to print the int value, the function floatPrint(value,6) to print the float value, and the function doublePrint(value,6) to print the double value.

// And that's the main part of the program.




