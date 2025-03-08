/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuhaise <mmuhaise@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 00:45:35 by mmuhaise          #+#    #+#             */
/*   Updated: 2025/03/02 01:11:31 by mmuhaise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &other)
{
	(void)other;
}

Intern::~Intern() {}

Intern &Intern::operator=(const Intern &other)
{
	(void)other;
	return (*this);
}

AForm *Intern::makeForm(const std::string name, const std::string target) const
{
	int i = 0;
	std::string forms[] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};

	while (name != forms[i] && i < 3)
		i++;
	switch (i)
	{
	case 0:
		std::cout << "Intern creates " << name << std::endl;
		return (new ShrubberyCreationForm(target));
	case 1:
		std::cout << "Intern creates " << name << std::endl;
		return (new RobotomyRequestForm(target));
	case 2:
		std::cout << "Intern creates " << name << std::endl;
		return (new PresidentialPardonForm(target));
	default:
		std::cerr << "Form doesn't exist!" << std::endl;
		return (NULL);
	}
}
