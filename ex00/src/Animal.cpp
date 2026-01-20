/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 14:59:34 by svolkau           #+#    #+#             */
/*   Updated: 2026/01/20 15:01:18 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

Animal::Animal() : type("Animal") 
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &other)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = other;
}

Animal::~Animal() 
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &other) 
{
	std::cout << "Animal assignment operator called" << std::endl;
	if (this != &other) 
		this->type = other.type;
	return *this;
}

std::string Animal::getType() const 
{
	return this->type;
}

void Animal::makeSound() const 
{
	std::cout << "Animal makes a sound" << std::endl;
}