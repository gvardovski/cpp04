/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 14:52:55 by svolkau           #+#    #+#             */
/*   Updated: 2026/01/20 14:54:54 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HPP
#define ANIMAL_CLASS_HPP

#include <iostream>

class Animal {

   protected:
	std::string type;

   public:
	Animal();
	Animal(const Animal &other);
	virtual ~Animal();

	Animal &operator=(const Animal &other);

	std::string getType() const;
	virtual void makeSound() const;
};

#endif