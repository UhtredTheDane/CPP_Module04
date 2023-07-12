/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:34:42 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/12 14:00:49 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;
class AMateria
{
	protected:

		std::string type;		

	public:

		AMateria(std::string const& type);
		AMateria(AMateria const& toCopy);
		AMateria& operator=(AMateria const& toAffect);
		virtual ~AMateria(void);

		std::string const& getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter &target);

	private:

		AMateria(void);
};

#endif
