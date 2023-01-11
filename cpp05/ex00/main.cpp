/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 09:14:09 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/11 09:26:34 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat b("John", 3);
        std::cout << b << std::endl;

        for(int i = 0; i < 3; i++)
		{
			b.incrementGrade();
        	std::cout << b << std::endl;
		}

    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        Bureaucrat beer("Marx", 148);
        std::cout << beer << std::endl;

        for(int i = 0; i < 3; i++)
		{
			beer.decrementGrade();
        	std::cout << beer << std::endl;
		}

    } catch (std::exception &e) {
        std::cout << e.what() << std::endl<<std::endl;
    }

	try {    
	Bureaucrat b1("po", 190);
	} catch (std::exception &e)
	{std::cout << e.what() <<std::endl<<std::endl;}
	try {    
	Bureaucrat b2("pa", -100);
	} catch (std::exception &e)
	{std::cout << e.what() <<std::endl<<std::endl;}

    return 0;
}