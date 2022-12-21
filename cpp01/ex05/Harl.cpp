/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 18:13:10 by alalmazr          #+#    #+#             */
/*   Updated: 2022/12/21 13:17:16 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{}

Harl::~Harl()
{}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle -specialketchup burger.I really do !" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn'tput enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}
void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	int i;
	void (Harl::*f[]) (void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	
	std::string	levels[] = { "debug", "info", "warning", "error" };
	
	for(i = 0; i < 4; i++)
	{
		if (level == levels[i])
			break ;
	}

	switch (i)
	{
	case 0:
		this->lvl = &Harl::debug;
		(this->*lvl)();
		break;
	case 1:
		this->lvl = &Harl::info;
		(this->*lvl)();
		break;
	case 2:
		this->lvl = &Harl::warning;
		(this->*lvl)();
		break;
	case 3:
		this->lvl = &Harl::error;
		(this->*lvl)();
		break;
	default:
		std::cout << "ALL LIVES MATTER!" << std::endl;
	}
}