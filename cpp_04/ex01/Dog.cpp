/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbranco- <jbranco-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:26:44 by jbranco-          #+#    #+#             */
/*   Updated: 2023/10/18 18:14:22 by jbranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
// #include "Brain.hpp"

Dog::Dog()
{
	this->type = "Dog";
	brain = new Brain();
	std::cout << "Dog constructor!" << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destructor!" << std::endl;
}