/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbranco- <jbranco-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:48:53 by jbranco-          #+#    #+#             */
/*   Updated: 2023/11/29 14:51:36 by jbranco-         ###   ########.fr       */
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
	this->value = 0;
}

Fixed::~Fixed()
{
	
}

Fixed::Fixed(const Fixed& obj)
{
	*this = obj;
}

Fixed::Fixed(const int num)
{
	this->value = roundf(num * (1 << this->bits));
}

Fixed::Fixed(const float num)
{
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
	this->setRawBits(other.getRawBits());
	return (*this);
}

int	Fixed::getRawBits() const
{
	return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

bool Fixed::operator>(const Fixed &other) const
{
    return this->toFloat() > other.toFloat();
}

bool Fixed::operator<(const Fixed &other) const
{
    return this->toFloat() < other.toFloat();
}

bool Fixed::operator>=(const Fixed &other) const
{
    return this->toFloat() >= other.toFloat();
}

bool Fixed::operator<=(const Fixed &other) const
{
    return this->toFloat() <= other.toFloat();
}

bool Fixed::operator==(const Fixed &other) const
{
    return this->toFloat() == other.toFloat();
}

bool Fixed::operator!=(const Fixed &other) const
{
    return this->toFloat() != other.toFloat();
}

//increment and decrement operators

Fixed &Fixed::operator ++()
{
	this->value += 1;
	return (*this);
}

Fixed Fixed::operator ++(int)
{
	Fixed temp(this->value * this->toFloat());
	this->value += 1;
	return (temp);
}

Fixed &Fixed::operator --()
{
	this->value -= 1;
	return (*this);
}

Fixed Fixed::operator --(int)
{
	Fixed temp(this->value * this->toFloat());
	this->value -= 1;
	return (temp);
}

// Arithmetic operators
Fixed Fixed::operator+(const Fixed &other) const
{
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) const
{
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other) const
{
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed& Fixed::min(Fixed& n1, Fixed& n2)
{
	if (n1.getRawBits() > n2.getRawBits())
		return (n2);
	return (n1);
}

Fixed& Fixed::max(Fixed& n1, Fixed& n2)
{
	if (n1.getRawBits() > n2.getRawBits())
		return (n1);
	return (n2);
}

Fixed Fixed::min (const Fixed &n1, const Fixed &n2)
{
	if (n1.getRawBits() < n2.getRawBits())
		return (n1);
	return (n2);
}

Fixed Fixed::max (const Fixed &n1, const Fixed &n2)
{
	if (n1.getRawBits() < n2.getRawBits())
		return (n2);
	return (n1);
}

Fixed Fixed::operator/(const Fixed &other) const
{
    if (other.toFloat() != 0)
    {
        return Fixed(this->toFloat() / other.toFloat());
    }
    else
	exit(1);
}