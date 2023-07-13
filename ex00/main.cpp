/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:01:41 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/13 12:15:03 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

void	not_masked_makeSound(void)
{
	const Animal*	animal = new Animal();
	std::cout << std::endl;
	const Animal*	dog = new Dog();
	std::cout << std::endl;
	const Animal*	cat = new Cat();
	std::cout << std::endl;

	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << std::endl;
	dog->makeSound();
	cat->makeSound();
	animal->makeSound();
	std::cout << std::endl;
	delete animal;
	delete dog;
	delete cat;
}

void	masked_makeSound(void)
{
	const WrongAnimal*	wrongAnimal = new WrongAnimal();
	std::cout << std::endl;
	const WrongAnimal*	wrongCat = new WrongCat();
	std::cout << std::endl;

	std::cout << wrongCat->getType() << " " << std::endl;
	std::cout << wrongAnimal->getType() << " " << std::endl;
	std::cout << std::endl;
	wrongCat->makeSound();
	wrongAnimal->makeSound();
	std::cout << std::endl;
	delete wrongAnimal;
	delete wrongCat;
}

int main(void)
{
	not_masked_makeSound();
	masked_makeSound();
	return 0;
}

