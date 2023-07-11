/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:34:36 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/11 19:39:20 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Amateria.hpp"

AMateria::AMateria(void)
{

}

AMateria::AMateria(std::string const& type)
{
	this->type = type;
}

AMateria::AMateria(AMateria const& toCopy)
{
	*this = toCopy;
}

AMateria&	AMateria::operator=(AMateria const& toAffect)
{
	if (this != &toAffect)
		type = toAffect.type
	return (*this);
}

std::string const& AMateria::getType(void) const
{
	return (type);
}

AMateria* AMateria::clone() const
{

}

void	AMateria::use(ICharacter& target)
{
	std::cout << name << " uses a material on " << target.name << std::endl;
}
