/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:05:04 by alalmazr          #+#    #+#             */
/*   Updated: 2022/12/16 12:44:55 by alalmazr         ###   ########.fr       */
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
    HumanB(const std::string& name);
    ~HumanB();
    void setWeapon(Weapon weapon);
    void attack() const;
};