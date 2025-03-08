/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuhaise <mmuhaise@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 15:49:20 by mmuhaise          #+#    #+#             */
/*   Updated: 2025/03/01 16:36:04 by mmuhaise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("Default target") {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other)
{
	*this = other;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	if (this != &other)
	{
		AForm::operator=(other);
		this->_target = other._target;
	}
	return (*this);
}

void ShrubberyCreationForm::performAction() const
{
	std::ofstream of((_target + "_shrubbery").c_str());
	if (!of)
	{
		std::cerr << "Couldn't open the file: " << _target + "_shrubbery" << std::endl;
		return ;
	}
	of << "       ^" << std::endl;
	of << "      ^^^" << std::endl;
	of << "     ^^^^^" << std::endl;
	of << "    ^^^^^^^" << std::endl;
	of << "   ^^^^^^^^^" << std::endl;
	of << "  ^^^^^^^^^^^" << std::endl;
	of << " ^^^^^^^^^^^^^" << std::endl;
	of << "       ||" << std::endl;
	of << "       ||" << std::endl;
	of << "       ||" << std::endl;
	of.close();
}
