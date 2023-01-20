/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 19:57:35 by mraspors          #+#    #+#             */
/*   Updated: 2023/01/20 11:17:19 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>

//  std::find() function returns an iterator pointing
//  to the first element in the container that is equal to
//  the given value. If the given value is not found in
//  the container, the std::find() function returns an 
//  iterator that is equal to the end iterator of the container.
template <typename T>
typename T::iterator easyfind(T &container, int n)
{
	typename T::iterator iter = std::find(container.begin(), container.end(), n);
	if (iter == container.end())
		throw std::invalid_argument("no match");
	else
		return iter;
}
#endif
