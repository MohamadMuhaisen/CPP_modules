/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuhaise <mmuhaise@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 08:48:51 by mmuhaise          #+#    #+#             */
/*   Updated: 2025/03/01 15:47:48 by mmuhaise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Default"), _isSigned(false), _signGrade(150), _executeGrade(150) {}

AForm::AForm(const std::string name, const int signGrade, const int executeGrade) : _name(name), _isSigned(false), _signGrade(signGrade), _executeGrade(executeGrade) {}

AForm::AForm(const AForm &other) : _name(other._name), _isSigned(other._isSigned), _signGrade(other._signGrade), _executeGrade(other._executeGrade) {}

AForm::~AForm() {}

AForm &AForm::operator=(const AForm &other)
{
	if (this != &other)
		_isSigned = other._isSigned;
	return (*this);
}

const std::string AForm::getName() const
{
	return (_name);
}

bool AForm::getIsSigned() const
{
	return (_isSigned);
}

int AForm::getSignGrade() const
{
	return (_signGrade);
}

int AForm::getExecuteGrade() const
{
	return (_executeGrade);
}

void AForm::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() <= _signGrade)
		_isSigned = true;
	else
		throw GradeTooLowException();
}

void	AForm::execute(Bureaucrat const &executer) const
{
	if (!_isSigned)
		throw NotSignedException();
	if (executer.getGrade() > _executeGrade)
		throw GradeTooLowException();
	performAction();
}

const	char *AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const	char *AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}

const	char *AForm::NotSignedException::what() const throw()
{
	return ("Form is not signed!");
}

std::ostream	&operator<<(std::ostream &os, const AForm &other)
{
	os << "Name is: " << other.getName() << ", Signed: " << other.getIsSigned() << ", Sign Grade: " << other.getSignGrade() << ", Execute Grade: " << other.getExecuteGrade() << std::endl;
	return (os);
}
