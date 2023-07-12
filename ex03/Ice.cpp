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

}

Ice::Ice(Ice const& toCopy)
	: AMateria(toCopy.type)
{

}

Ice&	Ice::operator=(Ice const& toAffect)
{
	if (this != &toAffect)
		type = toAffect.type;
	return (*this);
}

Ice::~Ice(void)
{

}

AMateria*	Ice::clone(void) const
{
	Ice *clone = new Ice();
	*clone = *this;
	return (clone);	
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
