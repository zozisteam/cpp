/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 20:32:51 by alalmazr          #+#    #+#             */
/*   Updated: 2022/12/28 15:21:08 by alalmazr         ###   ########.fr       */
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
	int hitPoints;
	int energyPoints;
	int attackDamage;

public:
	Claptrap();
	~Claptrap();
	Claptrap(const std::string name);
	Claptrap  operator=(const Claptrap &other);

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	//SETTERS
	void setName(std::string name);
	void setAttackDamage(int damage);
	//GETTERS
	int getAttackDamage() const;
	int getHitPoints() const;
	int getEnergyPoints() const;
};

#endif