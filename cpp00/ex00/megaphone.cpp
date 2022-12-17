/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 19:57:57 by alalmazr          #+#    #+#             */
/*   Updated: 2022/12/17 16:54:53 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	megaphone(int size, char **str)
{
	for (int i = 1; i < size; i++)
	{
		std::string s(str[i]);

		for (int j = 0; j < s.length(); j++)
			std::cout << (char)toupper(s[j]);
		std::cout << " ";
	}
	std::cout << std::endl;
}

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	megaphone(argc, argv);
	return 0;
}	