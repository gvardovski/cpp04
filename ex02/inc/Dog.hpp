/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 15:05:44 by svolkau           #+#    #+#             */
/*   Updated: 2026/01/20 16:37:56 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HPP
#define DOG_CLASS_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *brain;

   	public:
		Dog();
		Dog(const Dog &other);
		~Dog();

		Dog &operator=(const Dog &other);

		void makeSound() const;
		Brain *getBrain() const;
};

#endif

