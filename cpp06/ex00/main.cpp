/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:41:13 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/19 16:41:20 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <cctype>
#include <cstring>
#include <cmath>
#include <limits>
#include <iostream>
#include <iomanip>

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

// print char values
void charPrint(double value)
{
	std::cout << "char	:" << std::right;
	// Check if value is in range for char
	if (isinf(value) || isnan(value) || value > std::numeric_limits<char>::max() || value < std::numeric_limits<char>::min())
		std::cout << "impossible";
	// Check if value is printable
	else if (!isprint(static_cast<char>(value)))
		std::cout << "Non displayble";
	else
		std::cout << "'" << static_cast<char>(value) << "'";
	std::cout << std::endl;
}

// print int values
void intPrint(double value)
{
	std::cout << "int	:" << std::right;
	// Check if value is in range for int
	if (isinf(value) || isnan(value) || value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max())
		std::cout << "impossible";
	else
		std::cout << static_cast<int>(value);
	std::cout << std::endl;
}

// Function to print float values
void floatPrint(double value, int precision)
{
	std::cout << "float	:" << std::right;
	// checks if the value is not infinite, not a NaN, and is within the range of the float data type.
	if (!isinf(value) && !isnan(value) && value
			&& (value < -std::numeric_limits<float>::max()|| (value > -std::numeric_limits<float>::min()
			&& value < std::numeric_limits<float>::min()) || value > std::numeric_limits<float>::max()))
		std::cout << "impossible";
	else
		std::cout << std::setprecision(precision) << std::fixed << static_cast<float>(value) << 'f';
	std::cout << std::endl;
}

// Function to print double values
void doublePrint(double value, int precision)
{
	std::cout << "double	:" << std::right;
	std::cout << std::setprecision(precision) << value << std::endl;
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
		exit(1);

	// strtod: if fail=store address of first character that could not be converted
	double value = std::strtod(argv[1], &idx);
	// store the precision of the double value
	int precision = 1;

	// checks if idx is equal to the address of the last character (means success)
	if ((void *)idx == (void *)(argv[1] + str.length()) ||
		((void *)idx == (void *)(argv[1] + str.length() - 1) 
		&& (str[str.length() - 1]) == 'f'))
	{
		std::size_t decPointIdx = str.find_first_of('.');
		if (decPointIdx != std::string::npos)
		{
			//if there is a decimal point, find the last non zero char so we can calc the precision
			std::size_t lastDecIdx = str.find_last_not_of('0');
			if (lastDecIdx != std::string::npos && decPointIdx < lastDecIdx)
				precision = lastDecIdx - decPointIdx;
		}
	}
	else if (str.length() == 1)
		value = argv[1][0];
	else if ( str == "nan" || str == "+inff" || str == "inff" || str == "-inff" || str == "+inf" || str == "inf" || str == "-inf")
		nanZ(str);
	else
		exit(1);
	charPrint(value);
	intPrint(value);
	floatPrint(value, precision);
	doublePrint(value, precision);
	return (0);
}
