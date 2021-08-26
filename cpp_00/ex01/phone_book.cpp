/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 22:53:50 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/08/26 19:26:02 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Phone_book.class.hpp"

int	main(void){

	Phone_book	phone_book(8);

	phone_book.start_phone_book();

	return (0);
}
