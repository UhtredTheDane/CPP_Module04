/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:55:18 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/09 17:18:58 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	type = "Dog";
	std::cout << "Dog Default Constructor called." << std::endl;
}

Dog::Dog(Dog const& toCopy)
	: Animal()
{
	std::cout << "Dog Copy Constructor called." << std::endl;
	*this = toCopy;
}

Dog&	Dog::operator=(Dog const& toAffect)
{
	if (this != &toAffect)
		type = toAffect.type;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor called." << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "The Dog barks." << std::endl;
}
