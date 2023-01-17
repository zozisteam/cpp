/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 19:17:53 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/17 19:21:47 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
void swap(T parameter1, T parameter2)
{
	T tmp;
	tmp = parameter1;
	parameter1 = parameter2;
	parameter2 = tmp;
}

template <typename T>
T min(T parameter1, T parameter2)
{
	if (parameter1 == parameter2)
		return parameter2;
	else if (parameter1 > parameter2)
		return parameter2;
	else
		return parameter1;
}

template <typename T>
T max(T parameter1, T parameter2)
{
	if (parameter1 == parameter2)
		return parameter2;
	else if (parameter1 > parameter2)
		return parameter1;
	else
		return parameter2;
}