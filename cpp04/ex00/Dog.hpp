/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 15:45:55 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/05 16:31:20 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_H
# define DOG_H

#include "Animal.hpp" 
class Dog : public Animal { 
public: 
    Dog(); 
	Dog(const Dog &other);
	Dog &operator=(const Dog &other);
    ~Dog(); 
    void makeSound() const; 
}; 

 #endif