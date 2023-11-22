/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbranco- <jbranco-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:35:30 by jbranco-          #+#    #+#             */
/*   Updated: 2023/11/22 16:06:16 by jbranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H

#include <iostream>

class Harl
{

private:
	void	debug();
	void	info();
	void	warning();
	void	error();

public:
	Harl();
	~Harl();
	void	filter(std::string level);
};

#endif