/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 15:46:16 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/05 17:38:24 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_H
# define WRONG_CAT_H

#include "WrongAnimal.hpp" 

 class WrongCat : public WrongAnimal { 

 public: 

     WrongCat(); 
		WrongCat(const WrongCat& other);
	WrongCat &operator=(const WrongCat &other);
     ~WrongCat(); 

	  void makeSound() const;
 };

#endif