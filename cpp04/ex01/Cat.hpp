/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 15:46:16 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/05 18:59:36 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include "Animal.hpp" 
#include "Brain.hpp"

 class Cat : public Animal { 
private:
	Brain* brain;
 public: 

    Cat(); 
	Cat(const Cat& other);
	Cat &operator=(const Cat &other);
    ~Cat(); 

     void makeSound() const; 
		Brain *getBrain();
 };

#endif