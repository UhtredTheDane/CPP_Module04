/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:37:50 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/11 15:58:36 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMaterial.hpp"

class Ice: public AMaterial
{
	public;

		Ice(void);
		~Ice(void);
		virtual AMateria* clone() const;
		virtual void user(ICharacter& target);	
};

#endif
