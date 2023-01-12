#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	std::cout << "Welcome to Unperpetual PhoneBook !" << std::endl;
	this->nb_contact = 0;
	this->oldest_contact_index = 0;
}

Phonebook::~Phonebook()
{
	std::cout << "Goodbye !" << std::endl;
}

int	Phonebook::show_menu(void)
{
	std::string	cmd;

	std::cout << "ADD SEARCH EXIT" << std::endl;
	std::cin >> cmd;
	if (cmd == "EXIT")
		return (0);
	else if (cmd == "ADD")
		this->add_contact();
	else if (cmd == "SEARCH")
		this->search_contact();
	return (1);
}

void	Phonebook::add_contact(void)
{
	std::string	cmd;

	if (this->nb_contact >= 8)
	{
		do {
			std::cout << "PhoneBook full : Add new contact will erase " << std::flush;
			std::cout << this->contacts[oldest_contact_index].get_name() << std::flush;
			std::cout << "... Continue ? [y/n] " << std::flush; 
			std::cin >> cmd;
		} while (cmd != "y" && cmd != "n");
		if (cmd == "y")
		{
			this->contacts[oldest_contact_index].set_information();
			oldest_contact_index++;
			if (oldest_contact_index >= 8)
				oldest_contact_index = 0;
		}
	}
	else
	{
		this->contacts[nb_contact].set_information();
		nb_contact++;
	}
}

void	Phonebook::search_contact(void)
{
	for (int i = 0; i < this->nb_contact; i++)
		this->contacts[i].show_header()
	
}