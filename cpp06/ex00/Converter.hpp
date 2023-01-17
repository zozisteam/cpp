/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 19:57:35 by mraspors          #+#    #+#             */
/*   Updated: 2023/01/17 18:36:42 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <iostream>
# include <string>
# include <stdexcept>

class Converter {
private:
	std::string input;
	bool		ndefFloat;
	bool		ndefDouble;
	bool		isChar;
	bool		isInt;
	bool		isDouble;
	bool		isFloat;
	int			type;
	char		c;
	int			num;
	float		f;
	double		d;
	int			impossible;
	Converter();
	
public:
//Construcros/destructors assigning overloading
		Converter(char *input);
		Converter(const Converter& src);
		Converter &operator=(const Converter &src);
		~Converter();
//==============================================

//=================SET----GET===================
	std::string		getInput();
//==============================================

//=================MEMBER-FUNCTIONS===============
private:
	void			printChar(int type);
	void			printInt(int type);
	void			printFloat(int type);
	void			printDouble(int type);
	bool			checkSpecial();
	bool			checkValididty();
	void			checkInput();
	void			checkTypeValidity();
	void			pickType();
	void			convertToType(int type);
	void			printIfSpecial(int type);

public:
	void			printResult();
//================================================
};

#endif