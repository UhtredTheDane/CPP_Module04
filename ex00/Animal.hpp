/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:05:41 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/06 11:13:57 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	public:
		
		Animal(void);
		Animal(Animal const& toCopy);
		Animal&	operator=(Animal const& toAffect);
		~Animal(void);

		virtual void	makeSound(void);

	protected:

		std::string type;

};

#endif
