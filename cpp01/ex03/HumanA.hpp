/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:13:55 by alalmazr          #+#    #+#             */
/*   Updated: 2022/12/19 09:08:56 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_H
# define HUMAN_A_H

#include <iostream>
#include "Weapon.hpp"

class HumanA {
private:
    Weapon &weapon;
    std::string name;
public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
	void attack();
};

#endif