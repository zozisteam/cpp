/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 09:14:09 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/11 16:06:35 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{

	std::cout << std::endl;
	std::cout << "#TEST1#" << std::endl;
	{
		Bureaucrat bureaucrat("cat", 44);
		Form form("Form_1", 43, 12);
		bureaucrat.signForm(form);
		std::cout << bureaucrat << std::endl;
		std::cout << form << std::endl
				  << std::endl;
	}

	std::cout << std::endl;
	std::cout << "#TEST2#" << std::endl;
	{
		Bureaucrat bureaucrat("dog", 44);
		Form form("Form_2", 46, 12);
		bureaucrat.signForm(form);
		std::cout << bureaucrat << std::endl;
		std::cout << form << std::endl
				  << std::endl;
	}

	std::cout << std::endl;
	std::cout << "#TEST3#" << std::endl;
	{
		Bureaucrat bureaucrat("human", 33);
		Form form("Form_3", 32, 12);
		std::cout << bureaucrat << std::endl;
		try
		{
			form.beSigned(bureaucrat);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << form << std::endl;
	}

	std::cout << std::endl;
	std::cout << "#TEST4#" << std::endl;
	{
		Bureaucrat bureaucrat("alyazia", 33);
		std::cout << bureaucrat << std::endl;
		Form form("Form_4", 35, 12);
		try
		{
			form.beSigned(bureaucrat);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << form << std::endl
				  << std::endl;
	}

	return 0;
}