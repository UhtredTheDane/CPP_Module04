/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:38:00 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/11 17:14:48 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMaterial
{
	public:

		Cure(void);
		Cure(Cure const& toCopy);
		Cure&	operator=(Cure const& toAffect);
		virtual ~Cure(void);

		virtual AMateria* clone(void) const;
		virtual void user(ICharacter& target);
};
#endif
