/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:07:23 by mraspors          #+#    #+#             */
/*   Updated: 2023/01/11 14:57:23 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	AForm			*form = NULL;
	Bureaucrat		pig("pig", 1);
	Bureaucrat		dog("dog", 40);
	Bureaucrat		sheep("sheep", 150);


	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "***PRESIDENTIAL TESTS***" << std::endl;
	try
	{
		std::cout << "1st try catch block" << std::endl;
		form = new PresidentialPardonForm("ED-BT-z");
		form->execute(pig);
		delete form;
		form = NULL;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		if (form)
			delete form;
	}

	try
	{
		std::cout << "2nd try catch block" << std::endl;
		form = new PresidentialPardonForm("P0-op");
		form->beSigned(pig);
		form->execute(pig);
		delete form;
		form = NULL;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		if (form)
			delete form;
	}


	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "***ROBOTOMY TEST***" << std::endl;
	try
	{
		form = new RobotomyRequestForm("P33");
		form->beSigned(pig);
		form->execute(dog);
		form->execute(dog);
		form->execute(dog);
		form->execute(dog);
		form->execute(dog);
		form->execute(dog);
		form->execute(dog);
		form->execute(dog);
		form->execute(dog);
		delete form;
		form = NULL;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		if (form)
			delete form;
	}


	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "***SHRUBBERY TEST***" << std::endl;
	try
	{
		form = new ShrubberyCreationForm("trees");
		form->beSigned(pig);
		form->execute(dog);
		form->execute(sheep);
		delete form;
		form = NULL;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		if (form)
			delete form;
	}

	std::cout << std::endl;
	std::cout << std::endl;
	return 0;
}