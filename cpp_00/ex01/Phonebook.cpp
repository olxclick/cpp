/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbranco- <jbranco-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:12:07 by jbranco-          #+#    #+#             */
/*   Updated: 2023/11/09 14:30:23 by jbranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

Phonebook::Phonebook()
{
}

void	Phonebook::requirements(void) const
{
	std::cout << "Welcome to the 80's PhoneBook!" << std::endl;
	std::cout << "Here's are the following instructions:" << std::endl;
	std::cout << "'ADD' -> to add a new contact." << std::endl;
	std::cout << "'SEARCH' -> displays a specific contact." << std::endl;
	std::cout << "'EXIT' -> exits the program." << std::endl;
}

void	Phonebook::view_contacts(void)
{
	for (int i = 0; i < 8; i++)
		this->contacts[i].display_contact();
}

int		Phonebook::read_index(void)
{
	int	index = -1;

	while (true)
	{
		std::cout << "Which contact would you like to see? ";
		std::cin >> index;
		if (std::cin.good() && (index > 0 && index <= 8))
		{
			index--;
			break ;
		}
		else
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
			clearerr(stdin);
			std::cout << "Invalid contact, try again." << std::endl;
		}
	}
	return (index);
}

void	Phonebook::search()
{
	int i = this->read_index();
	if (i == -2)
	{
		std::cout << "Contact not available!" << std::endl;
		return ;
	}
	i = 0;
	this->contacts[i].printInfo(i);
}

void	Phonebook::add_contact()
{
	static int i = 0;

	if (i == 8)
		i = 0;
	this->contacts[i].printForm();
	i++;
}