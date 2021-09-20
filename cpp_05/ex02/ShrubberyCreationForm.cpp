/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmunoz-f <mmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 19:39:39 by mmunoz-f          #+#    #+#             */
/*   Updated: 2021/09/20 23:43:20 by mmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreationForm", 145, 137) {

	this->setTarget("garden");
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("ShrubberyCreationForm", 145, 137) {

	this->setTarget(target);
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : Form(src.getName(), src.getRequiredGrade(), src.getRequiredExecGrade()) {

	this->setTarget(src.getTarget());
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {

	return ;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src) {

	this->setTarget(src.getTarget());
	return (*this);
}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const {

	this->validExec(executor);

	std::ofstream	ofs;

	ofs.open(this->getTarget() + "_shrubbery", std::ios::out);
	ofs << 	"                                              .\n\
								.         ;\n\
	.              .              ;%     ;;\n\
		,           ,                :;%  %;\n\
		:         ;                   :;%;'     .,\n\
,.        %;     %;            ;        %;'    ,;\n\
;       ;%;  %%;        ,     %;    ;%;    ,%'\n\
%;       %;%;      ,  ;       %;  ;%;   ,%;'\n\
	;%;      %;        ;%;        % ;%;  ,%;'\n\
	`%;.     ;%;     %;'         `;%%;.%;'\n\
	`:;%.    ;%%. %@;        %; ;@%;%'\n\
		`:%;.  :;bd%;          %;@%;'\n\
		`@%:.  :;%.         ;@@%;'\n\
			`@%.  `;@%.      ;@@%;\n\
			`@%%. `@%%    ;@@%;\n\
				;@%. :@%%  %@@%;\n\
				%@bd%%%bd%%:;\n\
					#@%%%%%:;;\n\
					%@@%%%::;\n\
					%@@@%(o);  . '\n\
					%@@@o%;:(.,'\n\
				`.. %@@@o%::;\n\
					`)@@@o%::;\n\
					%@@(o)::;\n\
					.%@@@@%::;\n\
					;%@@@@%::;.\n\
				;%@@@@%%:;;;.\n\
			...;%@@@@@%%:;;;;,.." << std::endl;
}
