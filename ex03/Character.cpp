/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:05:06 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/11 20:04:45 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Character::Character(void)
{
	name = "None";
	first_void = 0;
}

Character::Character(std::string name)
{
	type->name = name;
	first_void = 0;
}

Character::Character(Character const& toCopy)
{
	*this = toCopy;
}

Character&	Character::Character(Character const& toAffect)
{
	if (this != &toAffect)
	{
		name = toAffect.name;
		//recopier inventqire
	}
	return (*this);
}

Character::~Character(void)
{

}

std::string const& Character::getName(void) const
{
	return (name);
}

void	Character::equip(AMateria *m)
{
	
}

void	Character::unequip(int idx)
{

}

void	Character::use(int idxm, ICharacter& target)
{

}
