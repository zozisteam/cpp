/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 11:33:55 by alalmazr          #+#    #+#             */
/*   Updated: 2022/12/26 14:23:46 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>

class Fixed
{
private:
	int fp_value;
	static const int fractionalBits = 8;

public:
	Fixed();
	Fixed(const Fixed &other);
	Fixed(const int n);
	Fixed(const float n);
	~Fixed();

	//OVERLOADING OPERATORS
	Fixed& operator=(const Fixed& fp);
	
	int getRawBits() const;
	void setRawBits(int const raw);
	void setRawBits(float const raw);

	float toFloat() const;
	int toInt() const;
};
//overloading << operator
//An overload of the insertion («) operator that inserts a floating-point representation
// of the fixed-point number into the output stream object passed as parameter.
std::ostream &operator<<(std::ostream &out, Fixed const &value);

#endif