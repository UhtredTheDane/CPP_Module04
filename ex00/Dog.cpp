/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:55:18 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/06 11:55:20 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Dog::Dog(void)
	: type("Dog");
{
	std::cout << "Dog Default Constructor called." << std::endl;
}

Dog::Dog(Dog const& toCopy)
{
	std::cout << "Dog Copy Constructor called." << std::endl;
	*this = toCopy
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

void	Dog::makeSound(void)
{
	std::cout << "The Dog barks." << std::endl;
}
