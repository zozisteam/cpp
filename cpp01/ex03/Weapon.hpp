/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:07:31 by alalmazr          #+#    #+#             */
/*   Updated: 2022/12/16 09:48:29 by alalmazr         ###   ########.fr       */
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
	Weapon(const std::string type);
	~Weapon();
    const std::string &getType() const;
    void setType(const std::string& type);
};


#endif