/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:05:33 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/09 17:19:26 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
	: type("None")
{
	std::cout << "Animal Default Constructor called." << std::endl;
}

Animal::Animal(Animal const& toCopy)
{
	std::cout << "Animal Copy Constructor called." << std::endl;
	*this = toCopy;
}

Animal&	Animal::operator=(Animal const& toAffect)
{
	if (this != &toAffect)
		type = toAffect.type;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal Destructor called." << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << "All Sounds." << std::endl;
}
