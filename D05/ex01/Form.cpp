/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouykou <obouykou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 11:39:13 by obouykou          #+#    #+#             */
/*   Updated: 2021/03/20 18:35:49 by obouykou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() :
_name("default"),
_signGrade(100),
_execGrade(100),
_isSigned(false)
{
}

Form::Form(const std::string name, int signG, int execG):
_name(name),
_signGrade(signG),
_execGrade(execG),
_isSigned(false)
{
	if (_signGrade > 150)
		throw GradeTooLowException();
	else if (_signGrade < 1)
		throw GradeTooHighException();
	if (_execGrade > 150)
		throw GradeTooLowException();
	else if (_execGrade < 1)
		throw GradeTooHighException();
}

Form::Form(const Form & fr):
_name(fr._name),
_signGrade(fr._signGrade),
_execGrade(fr._execGrade),
_isSigned(fr._isSigned)
{
	*this = fr;
}

Form::~Form()
{
	// std::cout << "Burecrat " << this->getName() << " died" << std::endl;
}

Form &Form::operator=(const Form & fr)
{
	if (this != &fr)
		this->_isSigned = fr._isSigned;
	return *this;
}

std::string Form::getName() const
{
	return _name;
}

int			Form::getSignGrade() const
{
	return _signGrade;
}

int			Form::getExecGrade() const
{
	return _execGrade;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}

bool			Form::_isFormSigned() const
{
	return _isSigned;
}

void			Form::beSigned(const Bureaucrat br)
{
	int grade = br.getGrade();
	if (grade <= this->_signGrade)
		this->_isSigned = true;
	else
		throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, const Form &fr)
{
	out << fr.getName() << ", Form sign grade: " << fr.getSignGrade() << ", execution grade : " \
		<< fr.getExecGrade() << "\nState: ";
	if (fr._isFormSigned())
		out << "Signed";
	else
		out << "Unsigned";
	out << std::endl;
	return out;
}