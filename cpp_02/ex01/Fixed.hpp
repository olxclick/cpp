/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbranco- <jbranco-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:48:45 by jbranco-          #+#    #+#             */
/*   Updated: 2023/11/24 14:00:42 by jbranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{

private:
	int value;
	static const int bits;

public:
	Fixed();
	Fixed(Fixed& obj);
	Fixed(const int num);
	Fixed(const float num);
	float toFloat() const;
	int toInt()const;
	Fixed& operator=(const Fixed& other);
	int	getRawBits() const;
	void	setRawBits(int const raw);
	~Fixed();
};

#endif