/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:55:18 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/14 15:46:40 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	type = "Dog";
	brain = new Brain();
	std::cout << "Dog Default Constructor called." << std::endl;
}

Dog::Dog(Dog const& toCopy)
	: AAnimal()
{
	std::cout << "Dog Copy Constructor called." << std::endl;
	brain = NULL;
	*this = toCopy;
}

Dog&	Dog::operator=(Dog const& toAffect)
{
	if (this != &toAffect)
	{
		if (brain)
			delete brain;
		brain = new Brain(*toAffect.brain);
		type = toAffect.type;
	}
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor called." << std::endl;
	delete brain;
}

Brain*	Dog::getBrain(void)
{
	return (brain);
}

void	Dog::makeSound(void) const
{
	std::cout << "The Dog barks." << std::endl;
}
