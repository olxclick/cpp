/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbranco- <jbranco-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:46:55 by jbranco-          #+#    #+#             */
/*   Updated: 2023/11/09 13:03:00 by jbranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

int main()
{
	Phonebook contacts;

	std::string input = "";
	contacts.requirements();
	while (input.compare("EXIT"))
	{
		if (input.compare("ADD") == 0)
			contacts.add_contact();
		else if (input.compare("SEARCH") == 0)
		{
			contacts.view_contacts();
			contacts.search();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n'); //preventing double prompt
		}
		if (std::cin.eof())
			std::cout << std::endl;
		clearerr(stdin);
		std::cin.clear();
		std::cout << "> ";
		getline(std::cin, input);
	}
	return 0;
}