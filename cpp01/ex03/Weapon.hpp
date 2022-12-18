/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:07:31 by alalmazr          #+#    #+#             */
/*   Updated: 2022/12/18 20:29:27 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon {
private:
    std::string type;
public:
    Weapon();
	Weapon(std::string type);
	~Weapon();
    const std::string &getType() const;
    void setType(std::string type);
};


#endif