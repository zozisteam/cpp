/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 09:14:09 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/10 10:45:35 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

 int main() {  

     try {  

         Bureaucrat b("John", 3);  

         Form f("Form", 5, 10);  

         b.signForm(f); // should print that John signed the form  

         b.incrementGrade(); // should throw exception  

     } catch (std::exception &e) {  

         std::cout << e.what() << std::endl;  

     }  

     return 0;  

 }