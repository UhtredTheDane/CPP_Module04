/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:05:12 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/12 14:22:19 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character: public ICharacter
{
	public:

		Character(std::string const& name);
		Character(Character const& toCopy);
		Character&	operator=(Character const& toAffect);
		virtual ~Character(void);
		virtual std::string const& getName(void) const;
		virtual void equip(AMateria *m);
		virtual void unequip(int idx);
		virtual void use(int idxm, ICharacter& target);

	private:

		std::string	name;
		AMateria *inventory[4];
		int	first_void;

		Character(void);
};

#endif
