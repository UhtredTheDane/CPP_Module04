/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:55:25 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/06 11:58:04 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

class Dog: public Animal
{
	public:

		Dog(void);
		Dog(Dog const& toCopy);
		operator=(Dog const& toAffect);
		~Dog(void);

		void	makeSound(void);
}

#endif
