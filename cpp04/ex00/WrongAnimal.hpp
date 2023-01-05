/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 15:45:06 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/05 17:10:11 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_H
# define WRONG_ANIMAL_H

#include <string>
#include <iostream>

class WrongAnimal {
protected:
    std::string type;
public:
    WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal  &operator=(const WrongAnimal &other);
    ~WrongAnimal();
    void makeSound() const;

	std::string getType() const;
	void setType(std::string type);
};

#endif