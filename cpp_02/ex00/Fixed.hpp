/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbranco- <jbranco-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:48:45 by jbranco-          #+#    #+#             */
/*   Updated: 2023/11/24 11:05:32 by jbranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{

private:
	int value;
	static const int bits;

public:
	Fixed();
	~Fixed();
	Fixed(Fixed& obj);
	Fixed& operator=(const Fixed& other);
	int	getRawBits() const;
	void	setRawBits(int const raw);
};

#endif