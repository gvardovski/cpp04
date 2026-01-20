/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 15:13:41 by svolkau           #+#    #+#             */
/*   Updated: 2026/01/20 15:13:56 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HPP
#define CAT_CLASS_HPP

#include "Animal.hpp"

class Cat : public Animal 
{
   public:
	Cat();
	Cat(const Cat &other);
	~Cat();

	Cat &operator=(const Cat &other);

	void makeSound() const;
};

#endif