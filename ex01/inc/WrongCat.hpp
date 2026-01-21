/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 17:33:16 by svolkau           #+#    #+#             */
/*   Updated: 2026/01/21 18:15:28 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_CLASS_HPP
#define WRONGCAT_CLASS_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal 
{
	private:
		Brain *brain;
		
   	public:
		WrongCat();
		WrongCat(const WrongCat &other);
		~WrongCat();

		WrongCat &operator=(const WrongCat &other);

		void makeSound() const;
		Brain *getBrain() const;
};

#endif