/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:34:36 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/13 18:58:16 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	std::cout << "AMateria Default Constructor called." << std::endl;
}

AMateria::AMateria(std::string const& type)
{
	std::cout << "AMateria Constructor called." << std::endl;
	this->type = type;
}

AMateria::AMateria(AMateria const& toCopy)
	: type(toCopy.type)
{
	std::cout << "AMateria Copy Constructor called." << std::endl;
}

AMateria&	AMateria::operator=(AMateria const& toAffect)
{
	if (this != &toAffect)
		type = toAffect.type;
	return (*this);
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria Destructor called." << std::endl;
}

std::string const& AMateria::getType(void) const
{
	return (type);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "* non identified materia is use on " << target.getName() << " *" << std::endl;
}
