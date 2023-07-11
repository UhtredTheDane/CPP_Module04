/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:05:41 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/11 15:14:09 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
#include "Brain.hpp"

class AAnimal
{
	public:

		AAnimal(void);
		AAnimal(AAnimal const& toCopy);
		AAnimal&	operator=(AAnimal const& toAffect);
		virtual	~AAnimal(void);

		std::string getType(void) const;
		virtual void	makeSound(void) const = 0;

	protected:

		std::string type;

};

#endif
