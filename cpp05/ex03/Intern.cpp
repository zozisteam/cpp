/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:06:04 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/11 15:47:50 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}
Intern::~Intern() {}

AForm *Intern::makeForm(const std::string &form, const std::string &target) {
    std::cout << "Intern creates " << form << std::endl;
    AForm * ptr=nullptr;
    std::string forms[3] = {"presidential pardon", "shrubbery request", "robotomy request"};
    int formIndex = -1;
    for (int i = 0; i < 3; i++) {
        if (form == forms[i]) {
            formIndex = i;
            break;
        }
    }
    if (formIndex >= 0) {
        switch (formIndex) {
            case 0:
                ptr = new PresidentialPardonForm(target);
                break;
            case 1:
                ptr = new ShrubberyCreationForm(target);
                break;
            case 2:
                ptr = new RobotomyRequestForm(target);
                break;
            default:
                break;
        }
    } else {
        std::cout << "Error: Form name " << form << " does not exist" << std::endl;
    }
    return ptr;
}