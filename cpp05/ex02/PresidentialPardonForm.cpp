/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:24:07 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/11 14:44:06 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("Presidential Pardon Form", 25, 5), target(target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &other) : AForm(other), target(other.target) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &other)
{
	this->target = other.getTarget();
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

std::string PresidentialPardonForm::getTarget()
{
	return target;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	checkExec(executor);
	std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
