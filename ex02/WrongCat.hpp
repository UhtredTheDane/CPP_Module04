/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:19:40 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/09 18:19:41 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:

		WrongCat(void);
		WrongCat(WrongCat const& toCopy);
		WrongCat& operator=(WrongCat const& toAffect);
		~WrongCat(void);

		void	makeSound(void) const;
};

#endif
