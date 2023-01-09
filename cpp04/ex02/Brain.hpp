/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:41:27 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/05 16:59:28 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>
#include <string>

class Brain {
private:
	std::string ideas[100];
public:
	Brain();
	Brain  &operator=(const Brain &other);
	Brain(const Brain &other);
	~Brain();

	void setIdea(int i, std::string idea);
	std::string getIdea(int i);

};

#endif