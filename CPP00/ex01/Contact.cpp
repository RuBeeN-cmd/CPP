#include "Contact.hpp"

void	Contact::set_first_name(void)
{
	std::cout << "# First Name : " << std::flush;
	do {
		std::cin >> this->first_name;
	} while (this->first_name.empty());
}

void	Contact::set_last_name(void)
{
	std::cout << "# Last Name : " << std::flush;
	do {
		std::cin >> this->last_name;
	} while (this->last_name.empty());
}

void	Contact::set_nickname(void)
{
	std::cout << "# Nickname : " << std::flush;
	do {
		std::cin >> this->nickname;
	} while (this->nickname.empty());
}

void	Contact::set_phone(void)
{
	std::cout << "# Phone Number : " << std::flush;
	do {
		std::cin >> this->phone;
	} while (this->phone.empty());
}

void	Contact::set_secret(void)
{
	std::cout << "# Darkest Secret : " << std::flush;
	do {
		std::cin >> this->secret;
	} while (this->secret.empty());
}

void	Contact::set_information(void)
{
	this->set_first_name();
	this->set_last_name();
	this->set_nickname();
	this->set_phone();
	this->set_secret();
}

void	Contact::show_information(void)
{
	std::cout << "# First Name : " << std::flush;
	std::cout << this->first_name << std::endl;
	std::cout << "# Last Name : " << std::flush;
	std::cout << this->last_name << std::endl;
	std::cout << "# Nickname : " << std::flush;
	std::cout << this->nickname << std::endl;
	std::cout << "# Phone Number : " << std::flush;
	std::cout << this->phone << std::endl;
	std::cout << "# Darkest Secret : " << std::flush;
	std::cout << this->secret << std::endl;
}

std::string	Contact::get_name(void)
{
	return (this->first_name + " " + this->last_name);
}

void	Contact::show_header(int index)
{
	std::cout << index << std::flush;
	std::cout << this->first_name << std::endl;
	std::cout << this->last_name << std::endl;
	std::cout << this->nickname << std::endl;
}