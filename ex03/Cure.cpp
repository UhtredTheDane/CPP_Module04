/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:38:03 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/14 14:24:12 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void)
	: AMateria("cure")
{
	std::cout << "Cure Default Constructor called." << std::endl;
}

Cure::Cure(Cure const& toCopy)
	: AMateria(toCopy.type)
{
	std::cout << "Cure CopyConstructor called." << std::endl;
}

Cure&	Cure::operator=(Cure const& toAffect)
{
	if (this != &toAffect)
		type = toAffect.type;
	return (*this);
}

Cure::~Cure(void)
{
	std::cout << "Cure Destructor called." << std::endl;
}

AMateria*	Cure::clone(void) const
{
	Cure	*clone = new Cure();

	std::cout << "Clone of cure materia." << std::endl;
	*clone = *this;
	return (clone);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
