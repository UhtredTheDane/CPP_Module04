/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:20:10 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/09 18:20:54 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	public:

		Brain(void);
		Brain(Brain const& toCopy);
		Brain& operator=(Brain const& toAffect);
		~Brain(void);

		void	setIdea(std::string idea);
		std::string	getIdea(int num);

	private:

		int	ideas_position;
		std::string ideas[100];

};
#endif
