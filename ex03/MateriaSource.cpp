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
	std::cout << "MateriaSource Default Constructor called." << std::endl;
	size = 0;
	for (int i = 0; i < 4; ++i)
		inventory[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const& toCopy)
{
	std::cout << "MateriaSource Copy Constructor called." << std::endl;
	for (int i = 0; i < 4; ++i)
		inventory[i] = NULL;
	*this = toCopy;
}

MateriaSource&	MateriaSource::operator=(MateriaSource const& toAffect)
{
	if (this != &toAffect)
	{
		size = toAffect.size;
		for (int i = 0; i < 4; ++i)
		{
			if (toAffect.inventory[i])
			{
				if (inventory[i])
				{
					std::cout << "coucou" << std::endl;
					delete inventory[i];
					std::cout << "tata" << std::endl;
				}
				inventory[i] = toAffect.inventory[i]->clone();
			}
			else
				inventory[i] = NULL;
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource Destructor called." << std::endl;
	for (int i = 0; i < 4; ++i)
	{
		if (inventory[i])
			delete inventory[i];
	}
}

void	MateriaSource::learnMateria(AMateria* materia)
{
	if (materia && size < 4)
	{
		std::cout << "MateriaSource learns a new " << materia->getType() << " materia." << std::endl;
		inventory[size] = materia->clone();
		++size;
		delete materia;
	}
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < 4; ++i)
	{
		if (inventory[i])
		{
			if (type == inventory[i]->getType())
			{
				std::cout << "MateriaSource creates a new materia." << std::endl;
				return (inventory[i]->clone());
			}
		}
	}
	return (NULL);
}

void	MateriaSource::show_inventory(void) const
{
	std::cout << "MateriaSource Inventory:" << std::endl;
	for (int i = 0; i < 4; ++i)
	{
		std::cout << i + 1;
		if (this->inventory[i])
			std::cout << "- " << inventory[i]->getType() << std::endl;
		else
			std::cout << "- empty" << std::endl;
	}
}
