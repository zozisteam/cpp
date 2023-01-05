/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:55:04 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/05 17:01:45 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain constructor called" << std::endl;
}
Brain  &Brain::operator=(const Brain &other){
	std::cout << "Brain assignment operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
	return *this;
}
	Brain::Brain(const Brain &other){
		std::cout << "Brain copy constructor called" << std::endl;
		if (this != &other) {
		for (int i = 0; i < 100; i++) 
			ideas[i] = other.ideas[i];
		
	}
	}
	Brain::~Brain()
	{
		std::cout << "Brain destructor called" << std::endl;
	}

void Brain::setIdea(int i, std::string idea) { 
	ideas[i] = idea; 
} 


std::string Brain::getIdea(int i) { 
	return ideas[i]; 
}