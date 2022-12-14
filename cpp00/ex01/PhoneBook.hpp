/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:27:46 by alalmazr          #+#    #+#             */
/*   Updated: 2022/12/07 15:57:34 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
#include <iostream>
#include <string>
#include "Contact.hpp"


class PhoneBook {
private:
	Contact contacts[8];
	int index;

public:
	PhoneBook();
	~PhoneBook();
	void phoneBookAdd();
	void phoneBookSearch();
	void phoneBookExit();
};

#endif