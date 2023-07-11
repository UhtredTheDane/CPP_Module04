/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:55:25 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/11 15:13:00 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog: public AAnimal
{
	public:

		Dog(void);
		Dog(Dog const& toCopy);
		Dog& operator=(Dog const& toAffect);
		virtual	~Dog(void);

		Brain*	getBrain(void);
		virtual void	makeSound(void) const;

	private:

		Brain *brain;

};

#endif
