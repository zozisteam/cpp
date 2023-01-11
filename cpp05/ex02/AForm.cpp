/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 09:31:33 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/11 09:38:11 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

// AForm::AForm(){}

AForm::AForm(const std::string &name, const int gradetoSign, const int gradetoExec) : name(name), isSigned(false), gradetoSign(gradetoSign), gradetoExec(gradetoExec) { 
     if (gradetoSign < 1 || gradetoExec < 1) { 
         throw GradeTooHighException(); 
     } else if (gradetoSign > 150 || gradetoExec > 150) { 
         throw GradeTooLowException(); 
     } 
 } 

AForm::AForm(const AForm& other): name(other.getName()), gradetoSign(other.getGradeToSign()), 
                             gradetoExec(other.getGradeToExecute())
{
	std::cout << "[AForm] Copy constructor called" << std::endl;
	this->isSigned = false;
	return ;
}

 AForm::~AForm() {} 

 std::string AForm::getName() const { 
     return this->name; 
 } 

 bool AForm::getIsSigned() const { 
     return this->isSigned; 
 } 

 int AForm::getGradeToSign() const { 
     return this->gradetoSign; 
 } 

 int AForm::getGradeToExecute() const { 
     return this->gradetoExec; 
 } 

 void AForm::beSigned(Bureaucrat& b) { 
     if (b.getGrade() > this->gradetoSign) { 
         throw GradeTooLowException(); 
     } else { 
    if (this->isSigned == true)
	{
		std::cout << "AForm already signed" << std::endl;
		return ;	
	}
    if (b.getGrade() <= this->gradetoSign)
	{
		this->isSigned = true;
		std::cout << "AForm was signed" << std::endl;
	}
 } 
 }

void	AForm::checkExec( const Bureaucrat &executor ) const
{
	if (!this->isSigned || executor.getGrade() > this->gradetoExec)
		throw AForm::CantExecuteForm();
}

//  const char* AForm::GradeTooHighException::what() const throw() { 
//      return "Grade is too high"; 
//  } 

//  const char* AForm::GradeTooLowException::what() const throw() { 
//      return "Grade is too low"; 
//  }  

 std::ostream& operator<<(std::ostream& os, const AForm& f) { 
	os << "[" << f.getName() << "] || form status: " << (f.getIsSigned() ? "signed" : "unsigned") << " || required sign grade: " << f.getGradeToSign()
	   << " || required execute grade: " << f.getGradeToExecute();

	return os;
 }  

