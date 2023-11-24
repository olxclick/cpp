/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbranco- <jbranco-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:48:45 by jbranco-          #+#    #+#             */
/*   Updated: 2023/11/24 15:56:51 by jbranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{

private:
	int value;
	static const int bits = 8;

public:
	Fixed();
	~Fixed();
	Fixed(Fixed& obj);
	Fixed& operator=(const Fixed& other);
	int	getRawBits() const;
	void	setRawBits(int const raw);
};

#endif