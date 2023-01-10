/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 09:04:32 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/10 09:39:28 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(){}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name) {
    if (grade < 1) {
        throw GradeTooHighException();
    } else if (grade > 150) {
        throw GradeTooLowException();
    } else {
        this->grade = grade;
    }
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	this->grade = other.getGrade();
	// this->name = other.getName(); //cant be copied cz const
	return *this;
}

std::string Bureaucrat::getName() const {
    return this->name;
}

int Bureaucrat::getGrade() const {
    return this->grade;
}

void Bureaucrat::incrementGrade() {
    if (this->grade - 1 < 1) {
        throw GradeTooHighException();
    } else {
        this->grade--;
    }
}

void Bureaucrat::decrementGrade() {
    if (this->grade + 1 > 150) {
        throw GradeTooLowException();
    } else {
        this->grade++;
    } 
} 


//  const char* Bureaucrat::GradeTooHighException::what() const throw() { 
//      return "Grade is too high"; 
//  } 

//  const char* Bureaucrat::GradeTooLowException::what() const throw() { 
//      return "Grade is too low"; 
//  } 

 std::ostream& operator<<(std::ostream& os, const Bureaucrat& b) { 
     os << b.getName() << ", bureaucrat grade " << b.getGrade(); 

     return os; 
 }