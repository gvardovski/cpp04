/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 15:02:14 by svolkau           #+#    #+#             */
/*   Updated: 2026/01/21 20:41:31 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Dog.hpp"
#include "inc/Cat.hpp"

int main() 
{
	Animal *animals[4];
	for (int i = 0; i < 4; i++) 
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	for (int i = 0; i < 4; i++) 
	{
		animals[i]->makeSound();
		delete animals[i];
	}

	std::cout << "---------------------------------" << std::endl;

	Cat *cat = new Cat();
	Dog *dog = new Dog();

	cat->getBrain()->setIdea(0, "I want to play with mouse!");
	dog->getBrain()->setIdea(0, "I want to play with ball!");
	Cat *catCopy = new Cat(*cat);

	std::cout << cat->getType() << " idea[0]: " << cat->getBrain()->getIdea(0) << std::endl;
	std::cout << dog->getType() << " idea[0]: " << dog->getBrain()->getIdea(0) << std::endl;
	std::cout << catCopy->getType() << " idea[0]: " << catCopy->getBrain()->getIdea(0) << std::endl;
	
	delete cat;
	delete dog;
	delete catCopy;

	return 0;
}