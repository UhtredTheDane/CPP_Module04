/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:01:41 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/11 15:13:19 by agengemb         ###   ########.fr       */
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
	for (int i = 0; i < 10; ++i)
	{
		delete zoo[i];
	}
}

void	test_animal_copy(void)
{
	Dog dog1;
	Brain	*brain1 = dog1.getBrain();

	brain1->setIdea("eat");
	brain1->setIdea("sleep");
	brain1->setIdea("play");

	Dog dog2(dog1);
	Brain	*brain2 = dog2.getBrain();

	std::cout << "First idea dog 2: " << brain2->getIdea(0) << std::endl;
	std::cout << "Second idea dog 2: " << brain2->getIdea(1) << std::endl;
	std::cout << "Third idea dog 2: " << brain2->getIdea(2) << std::endl;

	std::cout << "Dog1's Brain Adress: " << brain1 << std::endl;
	std::cout << "Dog2's Brain Adress: " << brain2 << std::endl;
}

int main(void)
{
	AAnimal test;
	test_animal_array();
	std::cout << std::endl;
	test_animal_copy();
	return (0);
}

