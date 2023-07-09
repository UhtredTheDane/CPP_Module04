/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:20:04 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/09 18:20:45 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain Default Constructor called." << std::endl;
}

Brain::Brain(Brain const& toCopy)
{
	std::cout << "Brain Copy Constructor called." << std::endl;
	*this = toCopy;
}

Brain& Brain::operator=(Brain const& toAffect)
{
	if (this != &toAffect)
	{

	}
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain Destructor called." << std::endl;
}
