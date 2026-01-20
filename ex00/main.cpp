/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 15:02:14 by svolkau           #+#    #+#             */
/*   Updated: 2026/01/20 15:16:20 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Dog.hpp"
#include "inc/Cat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();

std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;

i->makeSound(); 
j->makeSound();
meta->makeSound();

return 0;
}