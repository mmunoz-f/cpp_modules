/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 05:24:31 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/28 16:32:25 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY_H__
# define __ARRAY_H__

# include <stdexcept>

template<typename T>
class Array {

	unsigned int	_size;
	T				*_array;

	public:

		Array(void) : _size(0), _array() {};
		Array(unsigned int n) : _size(n) {
			this->_array = new T[n];
		}
		Array(const Array &src) : _array() {
			*this = src;
		}
		~Array(void) {
			if (this->_array)
				delete [] this->_array;
		}

		Array	&operator=(const Array &src) {
			if (this->_array)
				delete [] this->_array;
			this->_array = new T[src.size()];
			this->_size = src.size();
			for(unsigned int i = 0; i < this->_size; i++) {
				this->_array[i] = src[i];
			}
			return (*this);
		}

		T	&operator[](const unsigned int n) {
			if (n >= this->_size)
				throw std::out_of_range("out of limits");
			return (this->_array[n]);
		}

		const T	&operator[](const unsigned int n) const {
			if (n >= this->_size)
				throw std::out_of_range("out of limits");
			return (this->_array[n]);
		}

		unsigned int	size(void) const {
			return (this->_size);
		}
};

#endif
