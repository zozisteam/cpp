/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 10:41:51 by alalmazr          #+#    #+#             */
/*   Updated: 2022/12/19 16:32:52 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string ft_replace(std::string line, int len, std::string s1, std::string s2)
{
	std::string result;
	size_t pos = 0;
	while ((pos = line.find(s1, pos)) != std::string::npos)
	{
		std::cout << "line: " << line << "  pos: " << pos << std::endl;
		result += line.substr(0, pos);
		result += s2;
		std::cout << "result: " << result << std::endl;
		pos += s1.length();
		line = line.substr(pos);
		pos = 0;
	}
	result += line;
	return (result);
}

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << "Error: wrong number of arguments" << std::endl;
		return 1;
	}

	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	std::ifstream inFile(filename);
	if (!inFile.is_open())
	{
		std::cerr << "Error: could not open file" << std::endl;
		return 1;
	}

	std::ofstream outFile("out.txt");
	std::string line;

	while (std::getline(inFile, line))
	{
		outFile << ft_replace(line, line.length(), s1, s2) << std::endl;
	}

	inFile.close();
	outFile.close();

	return 0;
}