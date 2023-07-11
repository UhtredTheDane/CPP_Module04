/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:38:03 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/11 16:08:44 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void)
{

}

Cure::~Cure(void)
{

}

AMateria*	Cure::clone(void) const
{

}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << name << "'s wounds *" << std::endl;
}
