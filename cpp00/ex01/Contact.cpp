/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuhaise <mmuhaise@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 02:26:23 by mmuhaise          #+#    #+#             */
/*   Updated: 2025/01/10 00:29:05 by mmuhaise         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() : firstName(""), lastName(""), nickname(""), phoneNumber(""), darkestSecret("") {}

void	Contact::setFirstName(const std::string &value) { firstName = value; }
void	Contact::setLastName(const std::string &value) { lastName = value; }
void	Contact::setNickname(const std::string &value) { nickname = value; }
void	Contact::setPhoneNumber(const std::string &value) { phoneNumber = value; }
void	Contact::setDarkestSecret(const std::string &value) { darkestSecret = value; }

std::string Contact::getFirstName() const { return firstName; }
std::string Contact::getLastName() const { return lastName; }
std::string Contact::getNickname() const { return nickname; }
std::string Contact::getPhoneNumber() const { return phoneNumber; }
std::string Contact::getDarkestSecret() const { return darkestSecret; }

bool Contact::isEmpty() const {
	return firstName.empty() || lastName.empty() || nickname.empty() || phoneNumber.empty() || darkestSecret.empty();
}