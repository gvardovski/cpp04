/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 17:30:42 by svolkau           #+#    #+#             */
/*   Updated: 2026/01/21 18:03:20 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_CLASS_HPP
#define WRONGANIMAL_CLASS_HPP	

#include <iostream>

class Brain;

class WrongAnimal
{

   protected:
	std::string type;

   public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &other);
	virtual ~WrongAnimal();

	WrongAnimal &operator=(const WrongAnimal &other);

	std::string getType() const;
	virtual void makeSound() const;
	virtual Brain *getBrain() const;
};

#endif