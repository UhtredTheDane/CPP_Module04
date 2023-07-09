/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:58:19 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/06 12:01:06 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

class Cat: public Animal
{
	public:
		
		Cat(void);
		Cat(Cat const& toCopy);
		Cat& operator=(Cat const& toAffect);
		~Cat(void);

		virtual void	makeSound(void);
}
#endif
