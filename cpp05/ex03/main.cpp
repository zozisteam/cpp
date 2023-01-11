/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:07:23 by mraspors          #+#    #+#             */
/*   Updated: 2023/01/11 16:25:19 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#include "Intern.hpp"

int main()
{
	Intern someRandomIntern;
	Bureaucrat pig("pig", 1);
	Bureaucrat dog("dog", 20);
	Bureaucrat sheep("sheep", 100);
	AForm *form;
	std::cout << std::endl
			  << std::endl;
	{
		form = someRandomIntern.makeForm("robotomy request", "home");
		if (form)
		{
			try
			{
				form->beSigned(pig);
				form->execute(pig);
			}
			catch (std::exception &e)
			{
				std::cout << e.what() << std::endl;
				if (form)
					delete form;
			}
		}
	}
	std::cout << std::endl
			  << std::endl;
	{
		// Test "shrubbery request" form
		form = someRandomIntern.makeForm("shrubbery request", "Bender");
		if (form)
		{
			try
			{
				form->beSigned(pig);
				form->execute(pig);
			}
			catch (std::exception &e)
			{
				std::cout << e.what() << std::endl;
				if (form)
					delete form;
			}
		}
	}
	std::cout << std::endl
			  << std::endl;
	{
		// Test "presidential pardon" form
		form = someRandomIntern.makeForm("presidential pardon", "Bender");
		if (form)
		{
			try
			{
				form->beSigned(pig);
				form->execute(pig);
			}
			catch (std::exception &e)
			{
				std::cout << e.what() << std::endl;
				if (form)
					delete form;
			}
		}
	}
	std::cout << std::endl
			  << std::endl;
	{
		// Test a random form that doesn't exist
		form = someRandomIntern.makeForm("invalid form name", "Bender");
		if (form)
		{
			try
			{
				form->beSigned(pig);
			}
			catch (std::exception &e)
			{
				std::cout << e.what() << std::endl;
				if (form)
					delete form;
			}
		}
	}
	std::cout << std::endl
			  << std::endl;
		std::cout << std::endl
			  << std::endl;
	{
		form = someRandomIntern.makeForm("robotomy request", "Bender");
		if (form)
		{
			try
			{
				form->beSigned(dog);
				form->execute(dog);
			}
			catch (std::exception &e)
			{
				std::cout << e.what() << std::endl;
				if (form)
					delete form;
			}
		}
	}
	std::cout << std::endl
			  << std::endl;
	{
		// Test "shrubbery request" form
		form = someRandomIntern.makeForm("shrubbery request", "Bender");
		if (form)
		{
			try
			{
				form->beSigned(dog);
				form->execute(dog);
			}
			catch (std::exception &e)
			{
				std::cout << e.what() << std::endl;
				if (form)
					delete form;
			}
		}
	}
	std::cout << std::endl
			  << std::endl;
	{
		// Test "presidential pardon" form
		form = someRandomIntern.makeForm("presidential pardon", "Bender");
		if (form)
		{
			try
			{
				form->beSigned(dog);
				form->execute(dog);
			}
			catch (std::exception &e)
			{
				std::cout << e.what() << std::endl;
				if (form)
					delete form;
			}
		}
	}
	std::cout << std::endl
			  << std::endl;
	{
		// Test a random form that doesn't exist
		form = someRandomIntern.makeForm("invalid form name", "Bender");
		if (form)
		{
			try
			{
				form->beSigned(dog);
			}
			catch (std::exception &e)
			{
				std::cout << e.what() << std::endl;
				if (form)
					delete form;
			}
		}
	}
	std::cout << std::endl
			  << std::endl;
	return 0;
}