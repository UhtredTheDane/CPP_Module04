/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:05:33 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/13 14:41:35 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void)
	: type("None")
{
	std::cout << "Animal Default Constructor called." << std::endl;
}

AAnimal::AAnimal(AAnimal const& toCopy)
{
	std::cout << "Animal Copy Constructor called." << std::endl;
	*this = toCopy;
}

AAnimal&	AAnimal::operator=(AAnimal const& toAffect)
{
	if (this != &toAffect)
		type = toAffect.type;
	return (*this);
}

AAnimal::~AAnimal(void)
{
	std::cout << "Animal Destructor called." << std::endl;
}

std::string	AAnimal::getType(void) const
{
	return (this->type);
}
