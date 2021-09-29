/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 16:38:56 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/29 16:34:01 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MUTANTSTACK_H__
# define __MUTANTSTACK_H__

# include <stack>

template <typename T>
class	MutantStack : public std::stack<T> {

	public:

		MutantStack(void) : std::stack<T>() {}
		MutantStack(const MutantStack &src) {
			*this = src;
		}
		virtual	~MutantStack(void) {}

		MutantStack	&operator=(const MutantStack &src) {
			*this = src;
			return (*this);
		}

		typedef typename	std::stack<T>::container_type::iterator	iterator;
		typedef typename	std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename	std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename	std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		iterator	begin(void) {
			return (this->c.begin());
		}

		iterator	end(void) {
			return (this->c.end());
		}

		const_iterator	cbegin(void) const {
			return (this->c.cbegin());
		}

		const_iterator	cend(void) const {
			return (this->c.cend());
		}

		reverse_iterator	rbegin(void) {
			return (this->c.rbegin());
		}

		reverse_iterator	rend(void) {
			return (this->c.rend());
		}

		const_reverse_iterator	crbegin(void) {
			return (this->c.crbegin());
		}

		const_reverse_iterator	crend(void) {
			return (this->c.crend());
		}
};

#endif
