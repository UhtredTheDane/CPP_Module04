/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:58:13 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/09 17:19:12 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	type = "Cat";
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
		type = toAffect.type;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat Destructor called." << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "The Cat meows." << std::endl;
}
