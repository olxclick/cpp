/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbranco- <jbranco-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:48:53 by jbranco-          #+#    #+#             */
/*   Updated: 2023/11/28 13:49:57 by jbranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Fixed point representation
Unsures that the number passed is as accurate as possible through fixed point format

toFloat
The fixed-point representation of a number is stored as a 32-bit integer where the first 24 bits represent the integer part and the last 8 bits represent the fractional part.
So to get the fixed point number you need to divide the value with 2^8 (256), and this is same thing if we try to shift 8 bits to the right

toInt
As I said the fixed-point representation of a number is stored as a 32-bit integer, so since the first 24 represent the integer part I just need to 'ignore' the last 8
to represent the number as an integer, so that's why we bitshift to the left by this->fractional_bits(8)
*/

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
	this->value = roundf(num * (1 << this->bits));
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(num * (1 << this->bits));
}

float Fixed::toFloat() const 
{
	return ((float)this->value / (float)(1 << this->bits));
}

std::ostream &operator << (std::ostream &stream, const Fixed &other)
{
	stream << other.toFloat();
	return (stream);
}

int Fixed::toInt()const
{
	return (this->value >> this->bits);
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(other.getRawBits());
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
