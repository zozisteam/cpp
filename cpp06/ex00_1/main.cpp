#include <cstdlib>
#include <cctype>
#include <cstring>
#include <cmath>
#include <limits>
#include <iostream>
#include <iomanip>

// Function to set up the output for the type being printed
void coutSetup(const char* type) {
    std::cout << std::setw(13) << type << ": " << std::right;
}

// Function to print char values
void charPrint(double value) {
    coutSetup("char");
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

// Function to print int values
void intPrint(double value) {
    coutSetup("int");
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
    coutSetup("float");
    // Check if value is in range for float
    if (!isinf(value) && !isnan(value) && value
            && (value < -std::numeric_limits<float>::max()|| (value > -std::numeric_limits<float>::min()
            && value < std::numeric_limits<float>::min()) || value > std::numeric_limits<float>::max()))
        std::cout << "impossible";
    else
        std::cout << std::setprecision(prec) << std::fixed << static_cast<float>(value) << 'f';
    std::cout << std::endl;
}

// Function to print double values
void doublePrint(double value, int prec) {
    coutSetup("double");
    std::cout << std::setprecision(prec) << std::fixed << value << std::endl;
}

// Function to handle invalid input
void end(int rc) {
    std::cerr << "Invalid value" << std::endl;
    exit(rc);
}

void _forScience(std::string const &arg)
{
	coutSetup("char");
	std::cout << "impossible" << std::endl;
	coutSetup("int");
	std::cout << "impossible" << std::endl;
	coutSetup("float");
	std::cout << arg << std::endl;
	coutSetup("double");
	std::cout << arg.substr(0, arg.length() - 1) << std::endl;
	exit(0);
}

void forScience(std::string const &str)
{
	if (str == "nanf" || str == "+nanf" || str == "-nanf")
		_forScience("nanf");
	if (str == "+inff" || str == "inff")
		_forScience("inff");
	if (str == "-inff")
		_forScience("-inff");
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
		forScience(str);
	else
		end(1);
	charPrint(value);
	intPrint(value);
	floatPrint(value, prec);
	doublePrint(value, prec);
	return (0);
}