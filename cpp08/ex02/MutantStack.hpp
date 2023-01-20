/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:33:28 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/20 15:33:58 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <deque>
# include <stack>
# include <iterator>
# include <algorithm>

template<typename T>
class MutantStack : public std::stack<T>
{
public:

    typedef typename std::deque<T>::iterator iterator;

	iterator    begin() { return (this->c.begin()); }
    iterator    end()   { return (this->c.end()); }
};

#endif



// #ifndef MUTANTSTACK_HPP
// # define MUTANTSTACK_HPP

// # include <iostream>
// # include <deque>
// # include <stack>
// # include <iterator>
// # include <algorithm>

// template <typename T>
// class MutantStack: public std::stack<T> {
//     public:
//         MutantStack();
//         ~MutantStack();
//         MutantStack(MutantStack const &src);
//         MutantStack &operator=(MutantStack const &src);

//         typedef typename std::deque<T>::iterator iterator;
//         iterator    begin() {
//             return (this->c.begin());
//         }
//         iterator    end() {
//             return (this->c.end());
//         }
// };

// template <typename T>
// MutantStack<T>::MutantStack() {
//     std::cout  << "Default constructor called" << std::endl;
// }

// template <typename T>
// MutantStack<T>::~MutantStack() {
//     std::cout << "Destructor called" << std::endl;
// }

// template <typename T>
// MutantStack<T>::MutantStack(MutantStack const &src) {
//     std::cout << "Copy constructor called"<< std::endl;
//     this->c = src.c;
// }

// template <typename T>
// MutantStack<T>& MutantStack<T>::operator=(MutantStack const &src) {
//     std::cout << "Assignment operator called" << std::endl;
//     this->c = src.c;
//     return (*this);
// }

// #endif