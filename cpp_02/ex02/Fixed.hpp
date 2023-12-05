/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbranco- <jbranco-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:48:45 by jbranco-          #+#    #+#             */
/*   Updated: 2023/11/29 14:39:02 by jbranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>
#include <fstream>
#include <ostream>

class Fixed
{

private:
	int value;
	static const int bits = 8;

public:
	Fixed();
	Fixed(const Fixed& obj);
	Fixed(const int num);
	Fixed(const float num);
	float toFloat() const;
	int toInt()const;
	Fixed& operator=(const Fixed& other);
	int	getRawBits() const;
	void	setRawBits(int const raw);
	~Fixed();
	Fixed&operator ++ ();
	Fixed&operator -- ();
	Fixed operator ++ (int);
	Fixed operator -- (int);
	bool operator>(const Fixed &other) const;
	bool operator<(const Fixed &other) const;
	bool operator>=(const Fixed &other) const;
	bool operator<=(const Fixed &other) const;
	bool operator==(const Fixed &other) const;
	bool operator!=(const Fixed &other) const;
	static Fixed& min(Fixed& n1, Fixed& n2);
	static Fixed min(const Fixed& n1, const Fixed& n2);
	static Fixed& max(Fixed& n1, Fixed& n2);
	static Fixed max(const Fixed& n1, const Fixed& n2);
	Fixed operator+(const Fixed &other) const;
	Fixed operator-(const Fixed &other) const;
	Fixed operator*(const Fixed &other) const;
	Fixed operator/(const Fixed &other) const;
};

std::ostream&operator << (std::ostream &stream, const Fixed& other);

#endif