/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:05:04 by alalmazr          #+#    #+#             */
/*   Updated: 2022/12/19 09:52:28 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_H
# define HUMAN_B_H

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB {
private:
    Weapon* weapon;
    std::string name;
public:
    HumanB(std::string name);
    ~HumanB();
    void setWeapon(Weapon &weapon);
    void attack();
};

# endif