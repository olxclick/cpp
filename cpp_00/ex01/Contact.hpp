/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbranco- <jbranco-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:50:23 by jbranco-          #+#    #+#             */
/*   Updated: 2023/11/09 14:16:33 by jbranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <cstring>
#include <iostream>
#include <iomanip>
#include <limits>
#include <cstdio>

class Contact {
public:
	Contact();
	Contact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret);
	void display_contact();
	std::string getInput(std::string str) const;
	void printForm();
	void printInfo(int index);
	int getIndex();
	int get_curr_index();
	std::string w_dot(std::string str) const;
private:
	int index;
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string darkestSecret;
	std::string phoneNumber;
};

#endif