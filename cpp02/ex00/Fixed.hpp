/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 11:33:55 by alalmazr          #+#    #+#             */
/*   Updated: 2022/12/23 16:25:38 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <string>
#include <iostream>

class Fixed
{
private:
	int fp_value;
	static const int fractionalBits = 8;

public:
	Fixed();
	Fixed(const Fixed &other);
	~Fixed();

	Fixed& operator=(const Fixed& fp);
	int getRawBits() const;
	void setRawBits(int const raw);
};

#endif