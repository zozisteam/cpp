/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:23:10 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/18 20:02:24 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void iter(T *arr, int size, void (*f)(T &) )
{
	for (int i = 0; i < size; i++)
		f(arr[i]);
}

#endif