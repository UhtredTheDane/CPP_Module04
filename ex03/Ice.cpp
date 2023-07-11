/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:37:54 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/11 17:16:04 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void)
	: AMateria("ice");
{

}

Ice::Ice(Ice const& toCopy)
{
	*this = toCopy;
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
	clone->type = type;
	return (clone);	
}

void	use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.name << " *" << std::endl;
}
