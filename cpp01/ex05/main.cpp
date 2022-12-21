/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 09:23:56 by alalmazr          #+#    #+#             */
/*   Updated: 2022/12/21 13:13:49 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

// Tests 
int main() { 

    Harl harl; 
	std::string level;


	// std::cout << "input level: " << std::endl;
	// std::cin >> level;
	// harl.complain(level);

	//-----------------
	std::cout << "displaying all levels:" << std::endl;
	//-----------------
    harl.complain("debug");
    harl.complain("info");
    harl.complain("warning"); 
    harl.complain("error"); 
	harl.complain("dogs");
    return 0; 
}