/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 15:45:06 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/05 16:36:33 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include <string>
#include <iostream>

class Animal {
protected:
    std::string type;
public:
    Animal();
	Animal(std::string type);
	Animal  &operator=(const Animal &other);
    virtual ~Animal();
    virtual void makeSound() const;

	std::string getType() const;
	void setType(std::string type);
};

#endif