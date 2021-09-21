/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 13:27:40 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/21 15:27:35 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __INTERN_H__
# define __INTERN_H__

# include <string>
# include "Form.hpp"

# define M_CONCRETE_FORMS 3

class Intern {

	public:

		Intern(void);
		Intern(const Intern &intern);
		~Intern(void);

		Intern	&operator=(const Intern &intern);

		Form	*makeForm(const std::string &formName, const std::string &formTarget) const;
};

#endif
