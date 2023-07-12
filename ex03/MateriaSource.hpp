/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:52:31 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/12 16:45:35 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	public:
		
		MateriaSource(void);
		MateriaSource(MateriaSource const& toCopy);
		MateriaSource& operator=(MateriaSource const& toAffect);
		virtual	~MateriaSource(void);
		virtual void	learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const& type);

	private:

		int	size;
		AMateria *inventory[4];

};

#endif
