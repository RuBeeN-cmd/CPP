#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class Phonebook
{
private:
	int	nb_contact;
	int	oldest_contact_index;
	Contact	contacts[8];

	void	add_contact(void);
	void	search_contact(void)

public:
	Phonebook();
	~Phonebook();

	int	show_menu(void);
};

#endif