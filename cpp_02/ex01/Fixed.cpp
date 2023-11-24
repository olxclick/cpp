/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbranco- <jbranco-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:48:53 by jbranco-          #+#    #+#             */
/*   Updated: 2023/11/24 14:54:00 by jbranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed& obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat() const 
{
	
}

int Fixed::toInt()const
{
	int	res = 0;

	res = roundf(this->bits);
	return (res);
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->value = other.value;
	return (*this);
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits function called" << std::endl;
	return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
}
