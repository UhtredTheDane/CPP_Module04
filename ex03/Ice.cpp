/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:37:54 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/12 14:05:31 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void)
	: AMateria("ice")
{
	std::cout << "Ice Default Constructor called." << std::endl;
}

Ice::Ice(Ice const& toCopy)
	: AMateria(toCopy.type)
{
	std::cout << "Ice Copy Constructor called." << std::endl;
}

Ice&	Ice::operator=(Ice const& toAffect)
{
	if (this != &toAffect)
		type = toAffect.type;
	return (*this);
}

Ice::~Ice(void)
{
	std::cout << "Ice Destructor called." << std::endl;
}

AMateria*	Ice::clone(void) const
{
	Ice *clone = new Ice();

	std::cout << "Clone of ice materia." << std::endl;
	*clone = *this;
	return (clone);	
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
