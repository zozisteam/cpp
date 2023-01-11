/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 10:11:27 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/11 14:26:53 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_H
# define SHRUBBERY_CREATION_FORM_H
#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm {
private:
	std::string target;

	ShrubberyCreationForm();

public:
	ShrubberyCreationForm(const std::string &target);
	ShrubberyCreationForm(ShrubberyCreationForm &other);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm &other);
	~ShrubberyCreationForm();


	std::string getTarget();

	virtual void execute(Bureaucrat const &executor) const;
};

#endif