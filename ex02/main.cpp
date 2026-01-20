/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 15:02:14 by svolkau           #+#    #+#             */
/*   Updated: 2026/01/20 16:49:45 by svolkau          ###   ########.fr       */
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
		animals[i]->getBrain()->setIdea(0, "I want to play!");
	for (int i = 0; i < 4; i++) 
		std::cout << animals[i]->getType() << " idea[0]: " << animals[i]->getBrain()->getIdea(0) << std::endl;
	for (int i = 0; i < 4; i++) 
	{
		animals[i]->makeSound();
		delete animals[i];
	}
	return 0;
}