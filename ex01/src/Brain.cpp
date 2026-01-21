/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 15:35:27 by svolkau           #+#    #+#             */
/*   Updated: 2026/01/21 19:43:06 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = other;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain &other)
{
	std::cout << "Brain assignment operator called" << std::endl;
	if (this != &other)
	{
		for (std::size_t i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}
	return *this;
}

std::string Brain::getIdea(int index) const
{
	if (index < 0 || index >= 100)
	{
		std::cerr << "Index out of bounds" << std::endl;
		return "";
	}
	return this->ideas[index];
}

void Brain::setIdea(int index, const std::string &idea)
{
	if (index < 0 || index >= 100)
	{
		std::cerr << "Index out of bounds" << std::endl;
		return;
	}
	this->ideas[index] = idea;
}
