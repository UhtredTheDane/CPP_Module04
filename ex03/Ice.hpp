/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:37:50 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/14 14:24:25 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice: public AMateria
{
	public:

		Ice(void);
		Ice(Ice const& toCopy);
		Ice&	operator=(Ice const& toAffect);
		virtual ~Ice(void);

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);	
};

#endif
