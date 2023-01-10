/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 09:29:13 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/10 10:44:37 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_H
# define FORM_H

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
class Bureaucrat;

class Form {
    private:
        const std::string name;
        bool isSigned;
        const int gradetoSign;
        const int gradetoExec;

    public:
        class GradeTooHighException : public std::exception {
            public:
                const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
            public:
                const char* what() const throw();
        };

		// Form();
        Form(std::string name, int gradetoSign, int gradetoExec);
		Form &operator=(const Form &other);
        ~Form();

        std::string getName() const;
        bool getIsSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;

        void beSigned(Bureaucrat& b);

};
    std::ostream& operator<<(std::ostream& os, const Form& f);

#endif