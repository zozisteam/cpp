/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 15:47:43 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/06 18:20:35 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <vector>

int main()
{
	std::vector<Animal *> animals;
	// Animal animal;
	for (int i = 0; i < 3; i++)
	{
		std::cout << i << ": ";
		animals.push_back(new Dog());
		std::cout << std::endl;
	}
	std::cout << std::endl;
	for (int i = 0; i < 3; i++)
	{
				std::cout << i<< ": ";
		animals.push_back(new Cat());
		std::cout << std::endl;
	}
	std::cout << std::endl;

	for (int i = 0; i < 3; i++)
	{
				std::cout << i<< ": ";
		delete animals[i]; // deletes the animal object, calls the destructor of the derived class first, then the base class destructor.
		std::cout << std::endl;
	}
	std::cout << std::endl <<std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	std::cout << std::endl <<std::endl;
	Dog woof;
	woof.getBrain()->setIdea(0, "i like female dog");
	woof.getBrain()->setIdea(1, "im male dog");
	woof.getBrain()->setIdea(2, "where is human i love");
	std::cout << std::endl;
	std::cout <<"DOG STATS:" <<std::endl;
	std::cout << "TYPE: " << woof.getType() <<std::endl;
	std::cout << "IDEAS" <<std::endl;
	std::cout << "1: " << woof.getBrain()->getIdea(0) <<std::endl;
	std::cout << "2: " << woof.getBrain()->getIdea(1) <<std::endl;
	std::cout << "3: " << woof.getBrain()->getIdea(2) <<std::endl;
	std::cout << "4: " << woof.getBrain()->getIdea(3) <<std::endl;
	std::cout << std::endl;
	
	Cat meow;
	meow.getBrain()->setIdea(0, "i like female Cat");
	meow.getBrain()->setIdea(1, "im male Cat");
	meow.getBrain()->setIdea(2, "where is human i hate");
	std::cout << std::endl;
	std::cout <<"CAT STATS:" <<std::endl;
	std::cout << "TYPE: " << meow.getType() <<std::endl;
	std::cout << "IDEAS" <<std::endl;
	std::cout << "1: " << meow.getBrain()->getIdea(0) <<std::endl;
	std::cout << "2: " << meow.getBrain()->getIdea(1) <<std::endl;
	std::cout << "3: " << meow.getBrain()->getIdea(2) <<std::endl;
	std::cout << "4: " << meow.getBrain()->getIdea(3) <<std::endl;
		std::cout << std::endl <<std::endl << std::endl;
	Dog basic;
		basic.getBrain()->setIdea(0, "poop");
	{
		Dog tmp = basic;
		tmp.getBrain()->setIdea(0, "poopupdate");
		 std::cout << tmp.getBrain()->getIdea(0)<<std::endl;
	}
		basic.getBrain()->getIdea(0);
		std::cout << basic.getBrain()->getIdea(0)<<std::endl;
	std::cout << std::endl <<std::endl << std::endl;
}
