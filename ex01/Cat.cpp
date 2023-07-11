/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:58:13 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/09 18:17:36 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	type = "Cat";
	brain = new Brain();
	std::cout << "Cat Default Constructor called." << std::endl;
}

Cat::Cat(Cat const& toCopy)
	: Animal()
{
	std::cout << "Cat Copy Constructor called." << std::endl;
	*this = toCopy;
}

Cat&	Cat::operator=(Cat const& toAffect)
{
	if (this != &toAffect)
	{
		brain = new Brain(*toAffect.brain);
		type = toAffect.type;
	}
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat Destructor called." << std::endl;
	delete brain;
}

Brain*	Cat::getBrain(void)
{
	return (brain);
}

void	Cat::makeSound(void) const
{
	std::cout << "The Cat meows." << std::endl;
}
