/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 12:07:04 by alalmazr          #+#    #+#             */
/*   Updated: 2022/12/13 12:51:14 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int n, std::string name) {
    Zombie* horde = new Zombie[n];

    for (int i = 0; i < n; i++) {
        horde[i].setName(name);
    }

    return horde;
}
