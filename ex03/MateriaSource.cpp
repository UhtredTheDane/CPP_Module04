/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:52:24 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/12 17:17:08 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{

}

MateriaSource::MateriaSource(MateriaSource const& toCopy)
{

}

MateriaSource&	MateriaSource::operator=(MateriaSource const& toAffect)
{
	if (this != &toAffect)
	{

	}
	return (*this);
}

MateriaSource::~MateriaSource(void)
{

}

void	MateriaSource::learnMateria(AMateria* materia)
{
	if (materia != NULL)
	{
		

	}
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{

}
