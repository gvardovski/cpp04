/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 17:30:42 by svolkau           #+#    #+#             */
/*   Updated: 2026/01/21 17:38:11 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_CLASS_HPP
#define WRONGANIMAL_CLASS_HPP	

#include <iostream>

class WrongAnimal {

   protected:
	std::string type;

   public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &other);
	virtual ~WrongAnimal();

	WrongAnimal &operator=(const WrongAnimal &other);

	std::string getType() const;
	virtual void makeSound() const;
};

#endif