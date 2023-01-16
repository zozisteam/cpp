/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:51:45 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/16 12:55:28 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

Converter::Converter(){}

Converter::Converter(char *input)
{
	std::string temp(input);
	this->input = temp;
	this->ndefFloat = false;
	this->ndefDouble = false;
	this->isChar = false;
	this->isInt = false;
	this->isDouble = false;
	this->isFloat = false;
	this->type = 0;
	this->num = 0;
	this->c = '0';
	this->d = 0;
	this->f = 0;
	this->impossible = 0;
	return;
}

Converter::Converter(const Converter& src)
{
	std::cout << "Copy constructor called" << std::endl;
	this->input = src.input;
	this->ndefFloat = src.ndefFloat;
	this->ndefDouble = src.ndefDouble;
	this->isChar = src.isChar;
	this->isInt = src.isInt;
	this->isDouble = src.isDouble;
	this->isFloat = src.isFloat;
	this->type = src.type;
	this->num = src.num;
	this->c = src.c;
	this->d = src.d;
	this->f = src.f;
	this->impossible = src.impossible;
	return;
}

Converter &Converter::operator=(const Converter &src)
{
	this->input = src.input;
	this->ndefFloat = src.ndefFloat;
	this->ndefDouble = src.ndefDouble;
	this->isChar = src.isChar;
	this->isInt = src.isInt;
	this->isDouble = src.isDouble;
	this->isFloat = src.isFloat;
	this->type = src.type;
	this->num = src.num;
	this->c = src.c;
	this->d = src.d;
	this->f = src.f;
	this->impossible = src.impossible;
	return (*this);
}

Converter::~Converter(){}

std::string		Converter::getInput()
{
	return (this->input);
}

void			Converter::printResult()
{
	this->checkInput();
	this->printIfSpecial(this->type);
	this->printChar(this->type);
	this->printInt(this->type);
	this->printFloat(this->type);
	this->printDouble(this->type);
}

bool			Converter::checkSpecial()
{
	std::string floatSpecila[] = {"-inff", "+inff", "nanf"};
	std::string doubleSpecial[] = {"-inf", "+inf", "nan"};

	for (int i = 0; i < 3; i++)
	{
		if (this->input == floatSpecila[i])
		{
			this->ndefFloat = true;
			return true;
		}
		if (this->input == doubleSpecial[i])
		{
			this-> ndefDouble = true;
			return true;
		}
	}
	return false;
}

void			Converter::checkTypeValidity()
{
	int count = 0;
	bool ar[6] = {this->ndefFloat, this->ndefDouble, this->isChar, this->isInt, this->isDouble, this->isFloat};
	for (int i = 0; i < 6; i++)
	{
		if (ar[i] == true)
			count++;
	}
	if (count != 1)
	{
		std::cout << "invalid input" << std::endl;
		exit(0);
	}
}

void			Converter::checkInput()
{
	if (this->checkSpecial() == true)
	{
		this->pickType();
		return ;
	}	
	if (this->checkValididty() == false)
	{
		std::cout << "invalid input" << std::endl;
		exit(0);
	}
	this->checkTypeValidity();
	this->pickType();
}

void			Converter::pickType()
{
	if (this->ndefFloat == true)
		this->type = 1;
	else if (this->ndefDouble == true)
		this->type = 2;
	else if (this->isChar == true)
		this->type = 3;
	else if (this->isInt == true)
		this->type = 4;
	else if (this->isFloat == true)
		this->type = 5;
	else if (this->isDouble == true)
		this->type = 6;
	this->convertToType(this->type);
}

void			Converter::convertToType(int type)
{
	if (type == 1 || type == 2)
		return;
	if (type == 3)
		this->c = this->input[0];
	else if (type == 4)
	{
		try
		{
			this->num = std::stoi(this->input);
		}
		catch (const std::exception& e)
		{
			this->type = 5;
			this->impossible = 1;
			this->convertToType(5);
		}
	}
	else if (type == 5)
	{
		try
		{	
			this->f = std::stof(this->input);
		}
		catch (const std::exception& e)
		{
			this->type = 6;
			this->impossible = 2;
			this->convertToType(6);
		}
	}
	else if (type == 6)
	{
		try
		{
			this->d = std::stod(this->input);
		}
		catch(const std::exception& e)
		{
			this->type = 7;
		}
	}
}

void			Converter::printIfSpecial(int type)
{
	if (type == 7)
	{
		std::cout << "char  : impossible" << std::endl
				  << "int   : impossible" << std::endl
				  << "float : impossible" << std::endl
				  << "double: impossible" << std::endl;
		exit(0);
	}
	if (type > 2)
		return ;
	if (type == 1)
	{
		std::cout << "char  : impossible" << std::endl
				  << "int   : impossible" << std::endl
				  << "float : " << this->input << std::endl
				  << "double: " << this->input.erase(this->input.length() - 1) << std::endl;
	}
	else if (type == 2)
	{
		std::cout << "char  : impossible" << std::endl
				  << "int   : impossible" << std::endl
				  << "float : " << this->input << "f" << std::endl
				  << "double: " << this->input << std::endl;
	}
	exit(0);
} 

void			Converter::printChar(int type)
{
	if (this->impossible >= 1)
	{
		std::cout << "char  : impossible" << std::endl;
		return ;
	}
	int	n = 0;
	if (type == 3)
		n = int (this->c);
	else if (type == 4)
		n = this->num;
	else if (type == 5)
		n = int (this->f);
	else if (type == 6)
		n = int (this->d);
	if (n >= 32 && n <= 126) 
		std::cout  << "char  : " << static_cast<char>(n) << std::endl;
	else
		std::cout <<  "char  : Non displayable"  << std::endl;
	return ;
}

void			Converter::printInt(int type)
{
	if (this->impossible >= 1)
	{
		std::cout << "int   : impossible" << std::endl;
		return ;
	}
	if (type == 3)
		std::cout << "int   : " << int(this->c) << std::endl;
	else if (type == 4)
		std::cout << "int   : " << this->num << std::endl;
	else if (type == 5)
	{
		std::cout << "int   : " << static_cast<int>(this->f) << std::endl;
	}
	else if (type == 6)
	{
		std::cout << "int   : " << static_cast<int>(this->d) << std::endl;
	}
}

void			Converter::printFloat(int type)
{
	if (this->impossible == 2)
	{
		std::cout << "float : impossible" << std::endl;
		return ;
	}
	int pos = -1;
	pos = this->input.find('.');
	if (pos != -1)
	{
		for (unsigned long i = pos + 1; i < this->input.length(); i++)
		{
				if (this->input[i] != '0' && this->input[i] != 'f')
					break;
				if (i == this->input.length() - 1)
					pos = -1;
		}
	}
	if (type == 3)
	{
		int n = 0;
		n = int (this->c);
		std::cout << "float : " << static_cast<float>(n);
	}
	else if (type == 4)
	{
		std::cout << "float : " << static_cast<float>(this->num);
	}
	else if (type == 5)
	{
		std::cout << "float : " << this->f;
	}
	else if (type == 6)
	{
		std::cout << "float : " << static_cast<float>(this->d);
	}
	if (pos == -1)
		std::cout << ".0f" << std::endl;
	else
		std::cout << "f" << std::endl;
}

void			Converter::printDouble(int type)
{
	int pos = -1;
	pos = this->input.find('.');
	if (pos != -1)
	{
		for (unsigned long i = pos + 1; i < this->input.length(); i++)
		{
				if (this->input[i] != '0' && this->input[i] != 'f')
					break;
				if (i == this->input.length() - 1)
					pos = -1;
		}
	}
	if (type == 3)
	{
		int n = 0;
		n = int (this->c);
		std::cout << "double: " << static_cast<double>(n);
	}
	else if (type == 4)
	{
		std::cout << "double: " << static_cast<double>(this->num);
	}
	else if (type == 5)
	{
		std::cout << "double: " << static_cast<double>(this->f);
	}
	else if (type == 6)
	{
		std::cout << "double: " << (this->d);
	}
	if (pos == -1)
		std::cout << ".0" << std::endl;
	else
		std::cout << std::endl;
}

bool			Converter::checkValididty()
{
	int error_alpha_c = 0;
	int	error_dots_c = 0;
	int	minus_c = 0;
	int plus_c = 0;
	if (this->input.length() == 1 && std::isdigit(this->input[0]) == 0)
	{
		this->isChar = true;
		return true;
	}
	for (unsigned long i = 0; i < this->input.length(); i++)
	{
		if (this->input[i] == '-')
			minus_c++;
		else if (this->input[i] == '+')
			plus_c++;
		else if (std::isdigit(this->input[i]) == 0 && this->input[i] != '.')
		{
			if (this->input[i] != 'f')
				return false;
			if (this->input[i] == 'f' && this->input[i + 1] != '\0')
				return false;
			error_alpha_c++;
		}
		else if (this->input[i] == '.')
			error_dots_c++;
	}
	if (minus_c > 0 && plus_c > 0)
		return false;
	if (minus_c > 1 || plus_c > 1)
		return false;
	if (error_alpha_c > 1 || error_dots_c > 1)
		return false;
	if (error_alpha_c == 0 && error_dots_c == 0)
	{
		this->isInt = true;
		return true;
	}
	if (error_alpha_c == 1)
	{
		this->isFloat = true;
		return true;
	}
	if (error_alpha_c == 0 && error_dots_c == 1)
	{
		this->isDouble = true;
		return true;
	}
	return false;
}
		
//================================================
