/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 14:14:57 by alalmazr          #+#    #+#             */
/*   Updated: 2022/12/28 14:09:01 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
Fixed const c(Fixed(2));
std::cout << "a: " << a << std::endl;
std::cout << "++a: " << ++a << std::endl;
std::cout << "a: " <<a << std::endl;
std::cout << "a++: " << a++ << std::endl;
std::cout << "a: " <<a << std::endl;
std::cout <<"b: " << b << std::endl;
std::cout << "max(a,b): " <<Fixed::max( a, b ) << std::endl;
std::cout << "min(a,b): " <<Fixed::min( a, b ) << std::endl;
std::cout << "a<b: " << (a<b) << std::endl;
std::cout << "b<a: " << (b<a) << std::endl;
std::cout << "b==a: " << (b==a) << std::endl;
std::cout << "b!=a :" << (b!=a) << std::endl;
std::cout << "Fixed( 5.05f ) * Fixed( 10 ): " << ( Fixed( 5.05f ) * Fixed( 10 ) ) << std::endl;
std::cout << "a/b: " << (a/b) << std::endl;
return 0;
}