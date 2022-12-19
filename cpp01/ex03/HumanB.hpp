/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:05:04 by alalmazr          #+#    #+#             */
/*   Updated: 2022/12/19 09:09:09 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    void setWeapon(Weapon weapon);
    void attack();
};