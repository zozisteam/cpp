/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 10:12:18 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/11 14:45:15 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_H
#define PRESIDENTIAL_PARDON_FORM_H
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
	std::string target;

	PresidentialPardonForm();

public:
	PresidentialPardonForm(const std::string &target);
	PresidentialPardonForm(PresidentialPardonForm &other);
	PresidentialPardonForm &operator=(PresidentialPardonForm &other);
	~PresidentialPardonForm();

	std::string getTarget();

	virtual void execute(Bureaucrat const &executor) const;
};

#endif