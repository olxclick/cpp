/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbranco- <jbranco-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:50:26 by jbranco-          #+#    #+#             */
/*   Updated: 2023/11/09 14:28:15 by jbranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

std::string	Contact::getInput(std::string str) const
{
	std::string	line;

	while (true)
	{
		std::cout << str << std::endl;
		getline(std::cin, line);
		if (str == "Phone number: ")
		{
			if (line.find_first_not_of("0123456789") != std::string::npos)
			{
				std::cout << "Invalid phone number, try again!" << std::endl;
				continue ;
			}
		}
		if (std::cin.fail() && line.empty())
		{
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
			std::cin.clear();
			clearerr(stdin);
			std::cout << "Invalid input, try again!" << std::endl;
		}
		else
			break ;

	}
	return (line);
}

void	Contact::printInfo(int index)
{
	
	std::cout << "First Name: " << this->firstName << std::endl;
        std::cout << "Last Name: " << this->lastName << std::endl;
        std::cout << "Nick Name: " << this->nickName << std::endl;
        std::cout << "Phone Number: " << this->phoneNumber << std::endl;
        std::cout << "Darkest Secret: " << this->darkestSecret << std::endl;
}

int	Contact::get_curr_index()
{
	return this->index;
}

Contact::Contact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->nickName = nickName;
	this->phoneNumber = phoneNumber;
	this->darkestSecret = darkestSecret;	
}

std::string	Contact::w_dot(std::string str) const
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}


int	Contact::getIndex()
{
	return this->index;
}

void	Contact::printForm()
{
	static int i = 0;

	this->index = i++;
	this->firstName = this->getInput("First name: ");
	this->lastName = this->getInput("Last name: ");
	this->nickName = this->getInput("Nickname: ");
	this->phoneNumber = this->getInput("Phone number: ");
	this->darkestSecret = this->getInput("Your darkest secret: ");
}

void	Contact::display_contact()
{
	if (this->firstName.empty())
		return ;
	else
	{
		std::cout << "|" << std::setw(10) << this->index + 1 << std::endl;
		std::cout << "|" << std::setw(10) << this->w_dot(this->firstName) << std::endl;
		std::cout << "|" << std::setw(10) << this->w_dot(this->lastName) << std::endl;
		std::cout << "|" << std::setw(10) << this->w_dot(this->nickName) << std::endl;
		std::cout << "|" << std::endl;
	}
}