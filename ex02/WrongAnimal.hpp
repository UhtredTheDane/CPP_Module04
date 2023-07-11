/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:19:22 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/09 18:19:23 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	public:

		WrongAnimal(void);
		WrongAnimal(WrongAnimal const& toCopy);
		WrongAnimal& operator=(WrongAnimal const& toAffect);
		~WrongAnimal(void);

		std::string getType(void) const;
		void	makeSound(void) const;

	protected:

		std::string type;
};

#endif
