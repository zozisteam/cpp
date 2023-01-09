/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 15:47:43 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/06 18:25:34 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << meta->getType() <<":"<< std::endl;
meta->makeSound();
std::cout << j->getType() << ": " << std::endl;
j->makeSound();
std::cout << i->getType() << ": " << std::endl;
i->makeSound(); //will output the cat sound!
delete i;
delete j;
delete meta;
std::cout << std::endl;
WrongCat poo;
std::cout << poo.getType() << " " << std::endl;
poo.makeSound(); //make sure wrongcat gets destructed
return 0;
}