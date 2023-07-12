/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:34:13 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/12 16:26:53 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

int	main(void)
{
/*	IMateriaSource* src = new MateriaSource();
	
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
*/	
	ICharacter* me = new Character("me");
//	AMateria* tmp;
	
//	tmp = src->createMateria("ice");
/*	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);*/
	
/*	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	//delete src;*/
	return (0);

}
