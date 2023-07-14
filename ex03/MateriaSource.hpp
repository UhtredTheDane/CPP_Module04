/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:52:31 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/14 14:25:06 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource: public IMateriaSource
{
	public:

		MateriaSource(void);
		MateriaSource(MateriaSource const& toCopy);
		MateriaSource& operator=(MateriaSource const& toAffect);
		virtual	~MateriaSource(void);
		virtual void	learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const& type);
		virtual void	show_inventory(void) const;

	private:

		int	size;
		AMateria *inventory[4];

};

#endif
