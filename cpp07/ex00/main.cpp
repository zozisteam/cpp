/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 19:04:31 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/17 19:22:59 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

int main()
{
	// int result1;
    
	int a = 5, b = 10;
	std::cout << "a: " << a << "  b: " << b << std::endl;
	swap<int>(a, b);
	std::cout << "swap function called on a and b" << std::endl;
	std::cout << "a: " << a << "  b: " << b << std::endl;
	std::cout << min<int>(a, b) << std::endl;
	std::cout << max<int>(a, b) << std::endl;
}