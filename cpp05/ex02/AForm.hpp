/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 18:28:08 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/12 15:31:52 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
class Bureaucrat;

class AForm
{
private:
	const std::string name;
	bool isSigned;
	const int gradetoSign;
	const int gradetoExec;

	AForm();

public:
	class GradeTooHighException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return "GRADE TOO HIGH";
		}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return "GRADE TOO LOW";
		}
	};

	class CantExecuteForm : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return "UNAUTHORIZED FOR EXECUTION";
		}
	};
	
	AForm(const std::string &name, const int gradetoSign, const int gradetoExec);
	AForm(const AForm &src);
	AForm &operator=(const AForm &other);
	virtual ~AForm();

	std::string getName() const;
	bool getIsSigned() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;

	void beSigned(Bureaucrat &b);
	void checkExec(const Bureaucrat &b) const;
	virtual void execute(Bureaucrat const &b) const = 0;
};

std::ostream &operator<<(std::ostream &os, const AForm &f);
#endif