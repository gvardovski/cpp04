/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 15:08:10 by svolkau           #+#    #+#             */
/*   Updated: 2026/01/20 15:10:56 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog() 
{
	this->type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) 
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = other;
}

Dog::~Dog() 
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other) 
{
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &other) 
		this->type = other.type;
	return *this;
}

void Dog::makeSound() const 
{
	std::cout << "Woof Woof!" << std::endl;
}

