/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:05:06 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/13 01:48:50 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	name = "None";
	first_void = 0;
}

Character::Character(std::string const& name)
	: name(name)
{
	first_void = 0;
}

Character::Character(Character const& toCopy)
{
	*this = toCopy;
}

Character&	Character::operator=(Character const& toAffect)
{
	std::string	type;

	if (this != &toAffect)
	{
		name = toAffect.name;
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

Character::~Character(void)
{
	for (int i = 0; i < 4; ++i)
	{
		if (inventory[i] != NULL)
			delete inventory[i];
	}
}

std::string const& Character::getName(void) const
{
	return (name);
}

void	Character::equip(AMateria *materia)
{
	if (materia != NULL && first_void < 4)
	{
		inventory[first_void] = materia;
		for (first_void = first_void + 1; first_void < 4; ++first_void)
			if (inventory[first_void] == NULL)
				break;
	}
}

void	Character::unequip(int idx)
{
	if (inventory[idx] != NULL)
	{
		inventory[idx] = NULL;
		if (idx < first_void)
			first_void = idx;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (inventory[idx] != NULL)
		inventory[idx]->use(target);
}
