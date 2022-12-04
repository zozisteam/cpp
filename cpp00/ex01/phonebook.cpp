/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:27:46 by alalmazr          #+#    #+#             */
/*   Updated: 2022/12/04 18:05:43 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Contact {
	public:
	char *f_name;
	char *l_name;
	char *nickname;
	char *phone_number;
	char *secret;
};

class PhoneBook {
	public:
	Contact contacts[8];

};