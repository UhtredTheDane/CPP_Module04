/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:38:00 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/11 15:58:13 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMaterial.hpp"

class Cure: public AMaterial
{
	public:

		Cure(void);
		~Cure(void);

		virtual AMateria* clone(void) const;
		virtual void user(ICharacter& target);
};
#endif
