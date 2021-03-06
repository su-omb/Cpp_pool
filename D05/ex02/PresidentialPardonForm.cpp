/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouykou <obouykou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 14:45:30 by obouykou          #+#    #+#             */
/*   Updated: 2021/03/23 13:41:44 by obouykou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential Pardon", 25, 5, target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & fr) : Form(fr)
{
	*this = fr;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm & fr)
{
	this->Form::operator=(fr);
	return *this;
}

void	PresidentialPardonForm::action() const 
{
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}