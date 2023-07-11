/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:19:15 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/09 18:19:16 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
	: type("None")
{
	std::cout << "WrongAnimal Default Constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& toCopy)
{
	std::cout << "WrongAnimal Copy Constructor called." << std::endl;
	*this = toCopy;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const& toAffect)
{
	if (this != &toAffect)
		type = toAffect.type;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal Destructor called." << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "All WrongSounds." << std::endl;
}
