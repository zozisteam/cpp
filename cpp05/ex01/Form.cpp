/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 09:31:33 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/11 16:07:54 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Form::Form(): name(""), signGrade(0), execGrade(0){
// 	isSigned = false;
// }

Form::Form(std::string name, int gradetoSign, int gradetoExec) : name(name), isSigned(false), gradetoSign(gradetoSign), gradetoExec(gradetoExec)
{
	if (gradetoSign < 1 || gradetoExec < 1)
	{
		throw GradeTooHighException();
	}
	else if (gradetoSign > 150 || gradetoExec > 150)
	{
		throw GradeTooLowException();
	}
}

//  Form::Form(const Form& other)
//  {

//  }

Form::~Form() {}

std::string Form::getName() const
{
	return this->name;
}

bool Form::getIsSigned() const
{
	return this->isSigned;
}

int Form::getGradeToSign() const
{
	return this->gradetoSign;
}

int Form::getGradeToExecute() const
{
	return this->gradetoExec;
}

void Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() > this->gradetoSign)
	{
		throw GradeTooLowException();
	}
	else
	{
		if (this->isSigned == true)
		{
			std::cout << "Form already signed" << std::endl;
			return;
		}
		if (b.getGrade() <= this->gradetoSign)
		{
			this->isSigned = true;
			std::cout << "Form was signed" << std::endl;
		}
	}
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

std::ostream &operator<<(std::ostream &os, const Form &f)
{
	os << "[" << f.getName() << "] || form status: " << (f.getIsSigned() ? "signed" : "unsigned") << " || required sign grade: " << f.getGradeToSign()
	   << " || required execute grade: " << f.getGradeToExecute();

	return os;
}
