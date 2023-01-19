/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 17:38:52 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/19 17:38:53 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Data.hpp"
#include <iostream>

//uniptr= unsigned integer type large enough to hold a pointer value
//takes data type and converts to uniptr
uintptr_t	serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

//takes uniptr and returns data type by using reinterpret cast again
Data	*deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int main(int argc, char **argv)
{
	Data *data = new Data;
	Data *deserialized;
	uintptr_t serial;

	data->str = "hi it me :)";
	std::cout << "Original:		" << data->str << std::endl;
	serial = serialize(data);
	std::cout << "Serialized:		" << serial << std::endl;
	deserialized = deserialize(serial);
	std::cout << "Deserialized:		" << deserialized->str << std::endl;
	delete data;
	return 0;
}
