/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbranco- <jbranco-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:09:23 by jbranco-          #+#    #+#             */
/*   Updated: 2023/10/18 18:14:14 by jbranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
// #include "Brain.hpp"

Cat::Cat()
{
	this->type = "Cat";
	brain = new Brain();
	std::cout << "Cat constructor!" << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destructor!" << std::endl;
}