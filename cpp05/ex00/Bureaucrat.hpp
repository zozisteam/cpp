/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 09:03:59 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/11 16:22:28 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <exception>

class Bureaucrat
{
private:
	const std::string name;
	int grade;

	Bureaucrat();

public:
	// custom exception class that inherits from the
	//  std::exception class. It overrides the what()
	// method and returns a string message "Grade too low" when called.
	class GradeTooHighException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return "Grade too high";
		}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return "Grade too low";
		}
	};

	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat &operator=(const Bureaucrat &other);
	~Bureaucrat();

	std::string getName() const;
	int getGrade() const;

	void incrementGrade();
	void decrementGrade();
};
std::ostream &operator<<(std::ostream &os, const Bureaucrat &b);

#endif