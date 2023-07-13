/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:55:25 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/13 12:19:13 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal
{
	public:

		Dog(void);
		Dog(Dog const& toCopy);
		Dog& operator=(Dog const& toAffect);
		virtual ~Dog(void);

		virtual void	makeSound(void) const;
};

#endif
