/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:01:41 by agengemb          #+#    #+#             */
/*   Updated: 2023/07/09 18:45:21 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal *zoo[10];

	for (int i = 0; i < 10; ++i)
	{
		if (i < 5)
			zoo[i] = new Dog();
		else
			zoo[i] = new Cat();
	}

	const Animal dog(*zoo[0]);

	std::cout << "Dog1's Brain Adress: "<< dog.brain << std::endl;
	std::cout << "Dog2's Brain Adress: " << zoo[0]->brain << std::endl;

	for (int i = 0; i < 10; ++i)
	{
//		delete zoo[i];
	}
	return (0);
}

