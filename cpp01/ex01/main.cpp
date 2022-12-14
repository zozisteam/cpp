/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:50:04 by alalmazr          #+#    #+#             */
/*   Updated: 2022/12/13 12:51:00 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main() {
    int N = 5;

    Zombie* horde = zombieHorde(N, "dogs");

    for (int i = 0; i < N; i++) {
        horde[i].announce();
    }
	
    delete[] horde;

    return 0;
}