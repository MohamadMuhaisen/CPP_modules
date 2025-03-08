/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuhaise <mmuhaise@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 15:14:55 by mmuhaise          #+#    #+#             */
/*   Updated: 2025/03/01 23:18:30 by mmuhaise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{

	Bureaucrat b1("b1", 20);
	ShrubberyCreationForm sForm("Hello");
	b1.executeForm(sForm);
	b1.signForm(sForm);
	b1.executeForm(sForm);
	std::cout << "__________________" << std::endl;
	Bureaucrat b2("b2", 15);
	RobotomyRequestForm rForm("lol");
	b2.signForm(rForm);
	b2.executeForm(rForm);
	std::cout << "__________________" << std::endl;
	Bureaucrat b3("b3", 45);
	Bureaucrat b4("b4", 1);
	PresidentialPardonForm pForm("test");
	b3.signForm(pForm);
	b4.signForm(pForm);
	b4.executeForm(pForm);
	std::cout << "__________________" << std::endl;
}