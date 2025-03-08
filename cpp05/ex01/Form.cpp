/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuhaise <mmuhaise@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 08:48:51 by mmuhaise          #+#    #+#             */
/*   Updated: 2025/02/27 22:48:01 by mmuhaise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Default"), _isSigned(false), _signGrade(150), _executeGrade(150) {}

Form::Form(const std::string name, const int signGrade, const int executeGrade) : _name(name), _isSigned(false), _signGrade(signGrade), _executeGrade(executeGrade) {}

Form::Form(const Form &other) : _name(other._name), _isSigned(other._isSigned), _signGrade(other._signGrade), _executeGrade(other._executeGrade) {}

Form::~Form() {}

Form &Form::operator=(const Form &other)
{
	if (this != &other)
		_isSigned = other._isSigned;
	return (*this);
}

const std::string Form::getName() const
{
	return (_name);
}

bool Form::getIsSigned() const
{
	return (_isSigned);
}

int Form::getSignGrade() const
{
	return (_signGrade);
}

int Form::getExecuteGrade() const
{
	return (_executeGrade);
}

void Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() <= _signGrade)
		_isSigned = true;
	else
		throw GradeTooLowException();
}


const	char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const	char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}

std::ostream	&operator<<(std::ostream &os, const Form &other)
{
	os << "Name is: " << other.getName() << ", Signed: " << other.getIsSigned() << ", Sign Grade: " << other.getSignGrade() << ", Execute Grade: " << other.getExecuteGrade() << std::endl;
	return (os);
}
