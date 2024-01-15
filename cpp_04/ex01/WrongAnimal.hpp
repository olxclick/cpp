/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbranco- <jbranco-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:32:29 by jbranco-          #+#    #+#             */
/*   Updated: 2023/10/17 17:51:55 by jbranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class WrongAnimal{
protected:
	std::string type;
public:
	WrongAnimal();
	virtual ~WrongAnimal();
	void makeSound() const;
	std::string getType() const;
};