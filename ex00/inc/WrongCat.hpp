/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 17:33:16 by svolkau           #+#    #+#             */
/*   Updated: 2026/01/21 17:35:29 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_CLASS_HPP
#define WRONGCAT_CLASS_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal 
{

   public:
	WrongCat();
	WrongCat(const WrongCat &other);
	~WrongCat();

	WrongCat &operator=(const WrongCat &other);

	void makeSound() const;
};

#endif