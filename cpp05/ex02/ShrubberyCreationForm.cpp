/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:28:34 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/11 14:44:11 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("Shrubbery Creation Form", 145, 137), target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &other) : AForm(other), target(other.target) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &other)
{
	this->target = other.getTarget();
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

std::string ShrubberyCreationForm::getTarget()
{
	return target;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	checkExec(executor);

	std::ofstream file;
	file.open(target + "_shrubbery");

	if (!file)
		throw std::runtime_error("Could not create file");

	file << "          ,@@@@@@@,\n"
		 << "       ,,,.   /@@@\\  .,,\n"
		 << "     , (@@@@@@@^@@@^@@@@@@@),\n"
		 << "   ,,  ,@@@@@B     B@@@@@,  ,,\n"
		 << "  ,@@@  @@@@/         \\@@@  @@@,\n"
		 << "  @@@@@@@@/           \\@@@@@@@\n"
		 << "  @@@@@@@/             \\@@@@@@\n"
		 << "  @@@@@@/               \\@@@@@\n"
		 << "  @@@@@/                 \\@@@@\n"
		 << "  @@@@/                   \\@@@\n"
		 << "  @@@/                     \\@@\n"
		 << "  @@/                       \\@\n"
		 << "  @/                         \\\n";
	file.close();
	std::cout << "File " << target << "_shrubbery created with ascii art inside it" << std::endl;
}