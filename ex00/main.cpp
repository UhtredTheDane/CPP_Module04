/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:01:41 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/09 17:24:17 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{

	const Animal*	animal = new Animal();
	const Animal*	dog = new Dog();
	const Animal*	cat = new Cat();
	
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	
	dog->makeSound();
	cat->makeSound();
	animal->makeSound();
	

	const WrongAnimal*	wrongAnimal = new WrongAnimal();
	const WrongAnimal*	wrongCat = new WrongCat();

	std::cout << wrongCat->getType() << " " << std::endl;
	std::cout << wrongAnimal->getType() << " " << std::endl;
	
	wrongCat->makeSound();
	wrongAnimal->makeSound();

	return 0;
}

