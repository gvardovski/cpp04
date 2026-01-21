/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 15:02:14 by svolkau           #+#    #+#             */
/*   Updated: 2026/01/21 17:41:17 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Dog.hpp"
#include "inc/Cat.hpp"
#include "inc/WrongAnimal.hpp"
#include "inc/WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* k = new Cat();
const WrongAnimal* i = new WrongCat();


std::cout << j->getType() << " " << std::endl;
std::cout << k->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
std::cout << meta->getType() << " " << std::endl;

i->makeSound();
k->makeSound(); 
j->makeSound();
meta->makeSound();

delete meta;
delete j;
delete k;
delete i;

return 0;
}