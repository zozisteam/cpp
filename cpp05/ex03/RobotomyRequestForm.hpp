/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 10:12:07 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/11 14:32:04 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_H
#define ROBOTOMY_REQUEST_FORM_H
#include "AForm.hpp"
#include <ctime>

class RobotomyRequestForm : public AForm
{
private:
	std::string target;

	RobotomyRequestForm();

public:
	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm(RobotomyRequestForm &other);
	RobotomyRequestForm &operator=(RobotomyRequestForm &other);
	~RobotomyRequestForm();

	std::string getTarget();

	virtual void execute(Bureaucrat const &executor) const;
};

#endif