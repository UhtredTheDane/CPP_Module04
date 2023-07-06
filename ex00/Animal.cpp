/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:05:33 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/06 11:55:03 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Animal::Animal(void)
	: type("None");
{
	std::cout << "Animal Default Constructor called." << std::endl;
}

Animal::Animal(Animal const& toCopy)
{
	std::cout << "Animal Copy Constructor called." << std::endl;
	*this = toCopy
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

void	Animal::makeSound(void)
{
	std::cout << "All Sounds." << std::endl;
}
