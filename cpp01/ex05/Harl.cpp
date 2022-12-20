/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 18:13:10 by alalmazr          #+#    #+#             */
/*   Updated: 2022/12/20 20:04:19 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{}

Harl::~Harl()
{}

void debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle -specialketchup burger.I really do !" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn'tput enough bacon in my burger !If you did,I wouldn't be asking for more!" << std::endl;
}
void warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}
void error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{

	switch (level)
	{
	case "DEBUG":
		this->lvl = &debug();
		break;
	case "INFO":
		this->lvl = *info();
		break;
	case "WARNING":
		this->lvl = *warning();
		break;
	case "ERROR":
		this->lvl = *error();
		break;
	default:
		std::cout << "bad input" << std::endl;
	}
}