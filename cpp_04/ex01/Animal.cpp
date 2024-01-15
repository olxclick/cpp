/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbranco- <jbranco-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:55:05 by jbranco-          #+#    #+#             */
/*   Updated: 2023/10/17 15:59:33 by jbranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor!" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor!" << std::endl;
}

void	Animal::makeSound() const
{
	if (this->type.compare("Dog") == 0)
		std::cout << "Woof woof" << std::endl;
	else if (this->type.compare("Cat") == 0)
		std::cout << "Miau miau snicker bars" << std::endl;
	else
		std::cout << "I dunno what animal I am" << std::endl;
}
std::string	Animal::getType() const
{
	return (this->type);
}