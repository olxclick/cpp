/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbranco- <jbranco-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:36:00 by jbranco-          #+#    #+#             */
/*   Updated: 2023/10/17 17:54:51 by jbranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Wrong Animal default constructor!" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Wrong Animal destructor!" << std::endl;
}

void	WrongAnimal::makeSound() const
{
	if (this->type.compare("Dog") == 0)
		std::cout << "Miau miau" << std::endl;
	else if (this->type.compare("Cat") == 0)
		std::cout << "WOof woof" << std::endl;
	else
		std::cout << "Definitely not an animal" << std::endl;
}
std::string	WrongAnimal::getType() const
{
	return (this->type);
}