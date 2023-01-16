/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:41:48 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/16 11:55:36 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include <iostream>
#include <string>
#include <stdexcept>

class Converter
{
private:
	std::string input;
	bool ndefFloat;
	bool ndefDouble;
	bool isChar;
	bool isInt;
	bool isDouble;
	bool isFloat;
	int type;
	char c;
	int num;
	float f;
	double d;
	int impossible;
	Converter();
	void printChar(int type);
	void printInt(int type);
	void printFloat(int type);
	void printDouble(int type);
	bool checkSpecial();
	bool checkValididty();
	void checkInput();
	void checkTypeValidity();
	void pickType();
	void convertToType(int type);
	void printIfSpecial(int type);

public:
	// orthodox canonnical form
	Converter(char *input);
	Converter(const Converter &src);
	Converter &operator=(const Converter &src);
	~Converter();

	std::string getInput();
	void printResult();
};

#endif