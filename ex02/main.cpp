/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:01:41 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/13 14:45:54 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

void	test_animal_array(void)
{
	const AAnimal *zoo[10];

	for (int i = 0; i < 10; ++i)
	{
		if (i < 5)
			zoo[i] = new Dog();
		else
			zoo[i] = new Cat();
	}
	std::cout << std::endl;
	for (int i = 0; i < 10; ++i)
		delete zoo[i];
}

void	test_animal_copy(void)
{
	Dog dog1;
	Brain	*brain1 = dog1.getBrain();

	brain1->setIdea("eat");
	brain1->setIdea("sleep");
	brain1->setIdea("play");

	std::cout << std::endl;

	Dog dog2(dog1);

	std::cout << std::endl;

	Brain	*brain2 = dog2.getBrain();

	std::cout << "First idea dog 1: " << brain1->getIdea(0) << std::endl;
	std::cout << "First idea dog 2: " << brain2->getIdea(0) << std::endl;
	std::cout << "Second idea dog 1: " << brain1->getIdea(1) << std::endl;
	std::cout << "Second idea dog 2: " << brain2->getIdea(1) << std::endl;
	std::cout << "Third idea dog 1: " << brain1->getIdea(2) << std::endl;
	std::cout << "Third idea dog 2: " << brain2->getIdea(2) << std::endl << std::endl;

	std::cout << "Dog1's Brain Adress: " << brain1 << std::endl;
	std::cout << "Dog2's Brain Adress: " << brain2 << std::endl << std::endl;
}

int main(void)
{
	//	AAnimal not_instantiable;

	test_animal_array();
	std::cout << std::endl;
	test_animal_copy();
	return (0);
}

