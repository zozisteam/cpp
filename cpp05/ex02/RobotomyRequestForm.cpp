/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:31:18 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/11 14:41:05 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <thread>
#include <chrono>

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("Robotomy Request Form", 72, 45), target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &other) : AForm(other), target(other.target) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &other) {
this->target = other.getTarget();
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

std::string RobotomyRequestForm::getTarget() {
    return target;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
    this->checkExec(executor);

    std::cout << "Drilling noises... ";
	std::this_thread::sleep_for(std::chrono::seconds(1));  // wait for 1 second
    srand(time(0));
    int success = rand() % 2;
    if (success == 1) {
        std::cout << target << " has been robotomized successfully" << std::endl;
    }
    else {
        std::cout << "Robotomy failed" << std::endl;
    }
}