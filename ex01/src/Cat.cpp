/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 15:13:37 by svolkau           #+#    #+#             */
/*   Updated: 2026/01/20 16:39:59 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other) 
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = other;
}

Cat::~Cat() 
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
}

Cat &Cat::operator=(const Cat &other) 
{
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &other)
	{
		this->brain = other.brain;
		this->type = other.type;
	}
	return *this;
}

void Cat::makeSound() const 
{
	std::cout << "Meow Meow!" << std::endl;
}

Brain *Cat::getBrain() const 
{
	return this->brain;
}