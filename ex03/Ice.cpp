/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:37:54 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/11 16:07:49 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void)
{

}

Ice::~Ice(void)
{

}

AMateria*	Ice::clone(void) const
{

}

void	use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.name << " *" << std::endl;
}
