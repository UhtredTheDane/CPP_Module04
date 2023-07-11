/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:20:04 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/11 14:58:59 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	ideas_position = 0;
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
		ideas_position = toAffect.ideas_position;;
		for (int i = 0; i < 100; ++i)
		{
			ideas[i] = toAffect.ideas[i];
		}			
	}
	return (*this);
}

void	Brain::setIdea(std::string idea)
{
	if (ideas_position < 100)
	{
		ideas[ideas_position] = idea;
		++ideas_position;
	}
	else
		std::cout << "This brain is full !" << std::endl;
}

std::string	Brain::getIdea(int num)
{
	if (ideas_position >= 0 && ideas_position < 100)
		return (ideas[num]);
	else
		return ("none");
}

Brain::~Brain(void)
{
	std::cout << "Brain Destructor called." << std::endl;
}
