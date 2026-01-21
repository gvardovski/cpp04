/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 15:02:14 by svolkau           #+#    #+#             */
/*   Updated: 2026/01/21 19:00:57 by svolkau          ###   ########.fr       */
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
const Cat* l = new Cat();
const Dog* m = new Dog();

std::cout << j->getType() << " " << std::endl;
std::cout << k->getType() << " " << std::endl;
std::cout << meta->getType() << " " << std::endl;
std::cout << l->getType() << " " << std::endl;
std::cout << m->getType() << " " << std::endl;

k->makeSound(); 
j->makeSound();
meta->makeSound();
l->makeSound();
m->makeSound();

delete j;
delete k;
delete meta;
delete l;
delete m;

std::cout << "_________ WRONG ANIMALS _________ " << std::endl;

const WrongAnimal* wrongmeta = new WrongAnimal();
const WrongAnimal* wrongj = new WrongCat();
const WrongCat* wrongk = new WrongCat();

std::cout << wrongj->getType() << " " << std::endl;
std::cout << wrongmeta->getType() << " " << std::endl;
std::cout << wrongk->getType() << " " << std::endl;

wrongj->makeSound();
wrongmeta->makeSound();
wrongk->makeSound();

delete wrongmeta;
delete wrongj;
delete wrongk;
return 0;
}