/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 20:32:51 by alalmazr          #+#    #+#             */
/*   Updated: 2022/12/24 20:40:53 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_H
#define CLAP_TRAP_H

#include <iostream>
#include <string>

class Claptrap
{
private:
	std::string name;
	int hp;
	int ep;
	int ad;

public:
	Claptrap();
	~Claptrap();
	Claptrap(const std::string name);
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif