/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:52:24 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/13 01:48:06 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	size = 0;
}

MateriaSource::MateriaSource(MateriaSource const& toCopy)
{
	*this = toCopy;
}

MateriaSource&	MateriaSource::operator=(MateriaSource const& toAffect)
{
	if (this != &toAffect)
	{
		size = toAffect.size;
		for (int i = 0; i < 4; ++i)
		{
			if (toAffect.inventory[i] != NULL)
				inventory[i] = toAffect.inventory[i]->clone();
			else
				inventory[i] = NULL;
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; ++i)
	{
		if (inventory[i] != NULL)
			delete inventory[i];
	}
}

void	MateriaSource::learnMateria(AMateria* materia)
{
	if (materia != NULL && size < 4)
	{
		inventory[size] = materia->clone();
		++size;
	delete materia;
	}
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < 4; ++i)
	{
		if (inventory[i] != NULL)
		{
			if (type == inventory[i]->getType())
				return (inventory[i]->clone());
		}
	}
	return (NULL);
}
