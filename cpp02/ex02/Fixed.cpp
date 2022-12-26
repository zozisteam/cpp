/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 11:18:35 by alalmazr          #+#    #+#             */
/*   Updated: 2022/12/26 12:10:35 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fp_value = 0;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	fp_value = other.getRawBits();
}

Fixed::Fixed(const int n)
{
    std::cout << "Int constructor called" << std::endl;
    this->setRawBits(n);
    return ;
}

Fixed::Fixed(const float n)
{
    std::cout << "Float constructor called" << std::endl;
    this->setRawBits(n);
    return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fp_value = other.getRawBits();
	return *this;
}

std::ostream& operator<<(std::ostream& out, const Fixed &value)
{
    out << value.toFloat();
    return out;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->fp_value;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits (int) member function called" << std::endl;
	this->fp_value = raw << this->fractionalBits;
}

void Fixed::setRawBits(float const raw)
{
	std::cout << "setRawBits (float) member function called" << std::endl;
	this->fp_value = round(raw * (1 << this->fractionalBits));
}

float Fixed::toFloat(void) const
{
	return((float)this->fp_value / (float)(1 << this->fractionalBits));
}

int Fixed::toInt(void) const
{
	return (this->fp_value >> this->fractionalBits);
}