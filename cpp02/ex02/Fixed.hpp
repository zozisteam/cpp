/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 11:33:55 by alalmazr          #+#    #+#             */
/*   Updated: 2022/12/27 15:28:42 by alalmazr         ###   ########.fr       */
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

	//orthodox canonical form
	//default constructor
	Fixed();
	//copy constructor
	Fixed(const Fixed &other);
	Fixed(const int n);
	Fixed(const float n);
	//destructor
	~Fixed();
	//copy assignment operator
	Fixed &operator=(const Fixed &fp);
	
	//OVERLOADING OPERATORS
	Fixed operator+(const Fixed &fp);
	Fixed operator-(const Fixed &fp);
	Fixed operator*(const Fixed &fp);
	Fixed operator/(const Fixed &fp);
	// preincrement
	Fixed operator++();
	Fixed operator--();
	// postincrement
	Fixed operator++(int);
	Fixed operator--(int);
	// bool operators
	bool operator>(const Fixed &fp) const;
	bool operator<(const Fixed &fp) const;
	bool operator>=(const Fixed &fp) const;
	bool operator<=(const Fixed &fp) const;
	bool operator==(const Fixed &fp) const;
	bool operator!=(const Fixed &fp) const;
	// OVERLOADING min/max FUNCTIONS
	static Fixed min(Fixed &fp1, Fixed &fp2);
	static Fixed min(const Fixed &fp1, const Fixed &fp2);
	static Fixed max(Fixed &fp1, Fixed &fp2);
	static Fixed max(const Fixed &fp1, const Fixed &fp2);


	int getRawBits() const;
	void setRawBits(int const raw);
	void setRawBits(float const raw);

	float toFloat() const;
	int toInt() const;
};
// overloading << operator
// An overload of the insertion («) operator that inserts a floating-point representation
//  of the fixed-point number into the output stream object passed as parameter.
std::ostream &operator<<(std::ostream &out, Fixed const &value);

#endif