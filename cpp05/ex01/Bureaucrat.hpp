/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 09:03:59 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/10 10:39:41 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include <exception>
#include "Form.hpp"
class Form;

class Bureaucrat {
    private:
        const std::string name;
        int grade;

    public:
        class GradeTooHighException : public std::exception {
            public:
                const char* what() const throw()
				{
					return "Grade too high";
				}
        };

        class GradeTooLowException : public std::exception {
            public:
                const char* what() const throw()
				{
					return "Grade too low";
				}
        };

		Bureaucrat();
        Bureaucrat(std::string name, int grade);
		Bureaucrat &operator=(const Bureaucrat &other);
        ~Bureaucrat();

        std::string getName() const;
        int getGrade() const;

        void incrementGrade();
        void decrementGrade();
		void signForm(Form& f);

};
	std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);

#endif