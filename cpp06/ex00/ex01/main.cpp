/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 20:35:59 by mraspors          #+#    #+#             */
/*   Updated: 2023/01/16 17:34:51 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>

uintptr_t	serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data	*deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int main(void)
{
	Data *data = new Data;
	Data *deSerData;
	uintptr_t ser;

	data->str = "lol";
	std::cout << "Original data     : " << data->str << std::endl;
	ser = serialize(data);
	std::cout << "Serialized data   : " << ser << std::endl;
	deSerData = deserialize(ser);
	std::cout << "Deserialized data: " << deSerData->str << std::endl;
	delete data;
	return 0;
}
