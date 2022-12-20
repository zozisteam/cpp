/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 09:25:03 by alalmazr          #+#    #+#             */
/*   Updated: 2022/12/20 11:13:41 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

#include <iostream>
#include <string>

class Harl {
private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
public:
	Harl();
	~Harl();
    void complain( std::string level );
};

#endif