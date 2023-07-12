/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:34:36 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/12 14:04:49 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{

}

AMateria::AMateria(std::string const& type)
{
	this->type = type;
}

AMateria::AMateria(AMateria const& toCopy)
	: type(toCopy.type)
{

}

AMateria&	AMateria::operator=(AMateria const& toAffect)
{
	if (this != &toAffect)
		type = toAffect.type;
	return (*this);
}

AMateria::~AMateria(void)
{

}

std::string const& AMateria::getType(void) const
{
	return (type);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "* non identified materia is use on " << target.getName() << " *" << std::endl;
}
