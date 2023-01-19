/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 17:27:21 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/19 17:33:50 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <cstdlib>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
	Base	*ptr;
	switch(std::rand()%4)
	{
		case 1:
			ptr = new A();
			break;
		case 2:
			ptr = new B();
			break;
		case 3:
			ptr = new C();
			break;
		default:
			ptr = new A();
	}
		return ptr;
}

void identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch (std::exception &e)
	{
		(void)e;
	}
	try
	{
		B &b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "B" << std::endl;
	}
	catch (std::exception &e)
	{
		(void)e;
	}
	try
	{
		C &c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "C" << std::endl;
	}
	catch (std::exception &e)
	{
		(void)e;
	}
}


void identify(Base *p)
{
	A *a;
	if ((a = dynamic_cast<A *>(p)) != NULL)
		std::cout << "A" << std::endl;
	B *b;
	if ((b = dynamic_cast<B *>(p)) != NULL)
		std::cout << "B" << std::endl;
	C *c;
	if ((c = dynamic_cast<C *>(p)) != NULL)
		std::cout << "C" << std::endl;
}

int main()
{
	Base	*base;

	base = generate();
	identify(base);
	delete base;

	base = generate();
	identify(base);
	delete base;

	base = generate();
	identify(base);
	delete base;

	base = generate();
	identify(base);
	delete base;

	std::cout << std::endl <<std::endl;

	base = generate();
	identify(*base);
	delete base;

	base = generate();
	identify(*base);
	delete base;

	base = generate();
	identify(*base);
	delete base;

	base = generate();
	identify(*base);
	delete base;

	return 0;
}
