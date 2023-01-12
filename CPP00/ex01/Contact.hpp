#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

class Contact
{
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone;
	std::string	secret;

	void	set_first_name(void);
	void	set_last_name(void);
	void	set_nickname(void);
	void	set_phone(void);
	void	set_secret(void);

public:
	std::string	get_name(void);
	void		set_information(void);
	void		show_information(void);
	void		show_header(int index);
};

#endif