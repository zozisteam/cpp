/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 09:23:56 by alalmazr          #+#    #+#             */
/*   Updated: 2022/12/20 19:55:13 by alalmazr         ###   ########.fr       */
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
    harl.complain("debug");  // Outputs: Debugging... 
    harl.complain("info");   // Outputs: Informing... 
    harl.complain("warning");// Outputs: Warning... 
    harl.complain("error");  // Outputs: Erroring... 

    return 0; 
}