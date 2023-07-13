/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:34:13 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/13 20:06:02 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

void	test_materia(AMateria *materia)
{
	AMateria *cloneMateria;
       
	cloneMateria = materia->clone();
	std::cout << "Original's Adress: " << materia << std::endl;
	std::cout << "Clone's Adress: " << cloneMateria << std::endl;
	delete cloneMateria;
}

void	test_character(ICharacter *character)
{
	ICharacter* bob = new Character("bob");
	
	character->show_inventory();
	character->unequip(1);
	character->unequip(3);
	character->unequip(4);
	character->show_inventory();
	character->use(0, *bob);
	character->use(1, *bob);
	character->use(2, *bob);
	character->use(3, *bob);
	character->use(4, *bob);
	
	Character tom(*character); 
	std::cout << tom.getName() << std::endl;
	tom.show_inventory();
	delete bob;
}

int	main(void)
{
	IMateriaSource* src = new MateriaSource();
	
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	AMateria *ice1, *cure1;

	ice1 = src->createMateria("ice");
	test_materia(ice1);
	std::cout << std::endl;
	me->equip(ice1);
	me->equip(ice1);
	cure1 = src->createMateria("cure");
	test_materia(cure1);
	std::cout << std::endl;
	me->equip(cure1);
	me->equip(cure1);
	me->equip(NULL);
	test_character(me);
		
	delete me;
	delete src;
	return (0);

}
