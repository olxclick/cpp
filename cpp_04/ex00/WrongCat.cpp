/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbranco- <jbranco-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:45:42 by jbranco-          #+#    #+#             */
/*   Updated: 2023/10/17 17:52:39 by jbranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"


WrongCat::WrongCat()
{
	this->type = "Dog";
	std::cout << "WrongCat constructor!" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor!" << std::endl;
}