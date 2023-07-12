/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:38:03 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/12 13:25:20 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void)
	: AMateria("Cure")
{

}

Cure::Cure(Cure const& toCopy)
	: AMateria(toCopy.type)
{

}

Cure&	Cure::operator=(Cure const& toAffect)
{
	if (this != &toAffect)
		type = toAffect.type;
	return (*this);
}

Cure::~Cure(void)
{

}

AMateria*	Cure::clone(void) const
{
	Cure	*clone = new Cure();
	*clone = *this;
	return (clone);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
