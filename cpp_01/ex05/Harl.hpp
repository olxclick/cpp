/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbranco- <jbranco-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:13:23 by jbranco-          #+#    #+#             */
/*   Updated: 2023/11/22 14:58:03 by jbranco-         ###   ########.fr       */
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
	void	complain(std::string level);

};

typedef void(Harl::*functions) (void);

#endif