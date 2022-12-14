/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:47:15 by alalmazr          #+#    #+#             */
/*   Updated: 2022/12/13 16:13:48 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>





class HumanB {
private:
    Weapon* weapon;
    std::string name;
public:
    HumanB(const std::string& name) : name(name), weapon(nullptr) {}

    void setWeapon(const std::string& weaponType) { 
        if (weapon == nullptr) { 
            weapon = new Weapon(); 
        } 

        weapon->setType(weaponType); 
    }

    void attack() const { 
        if (weapon == nullptr) { 
            std::cout << name << " attacks with their bare hands" << std::endl; 
        } else { 
            std::cout << name << " attacks with their " << weapon->getType() << std::endl; 
        } 
    }

    ~HumanB() { delete weapon; } // destructor to free up memory allocated for the weapon pointer. 
};