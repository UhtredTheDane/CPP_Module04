/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:58:19 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/13 12:19:36 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat: public Animal
{
	public:

		Cat(void);
		Cat(Cat const& toCopy);
		Cat& operator=(Cat const& toAffect);
		virtual ~Cat(void);

		virtual void	makeSound(void) const;
};
#endif
