/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:35:59 by alalmazr          #+#    #+#             */
/*   Updated: 2022/12/13 12:04:15 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie {
private:
    std::string name;
public:
	//default and named constructor
	Zombie();
    Zombie(std::string name);

	//destructor
    ~Zombie();

	//functions
    void announce();
	std::string getName();
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif