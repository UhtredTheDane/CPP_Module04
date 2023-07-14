/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:20:04 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/14 14:29:00 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	size = 0;
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
		size = toAffect.size;
		for (int i = 0; i < 100; ++i)
			ideas[i] = toAffect.ideas[i];
	}
	return (*this);
}

void	Brain::setIdea(std::string idea)
{
	if (size < 100)
	{
		std::cout << "This brain has a new idea !" << std::endl;
		ideas[size] = idea;
		++size;
	}
	else
		std::cout << "This brain is full !" << std::endl;
}

std::string	Brain::getIdea(int num)
{
	if (size >= 0 && size < 100)
		return (ideas[num]);
	else
		return ("none");
}

Brain::~Brain(void)
{
	std::cout << "Brain Destructor called." << std::endl;
}
