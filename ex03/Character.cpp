/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 17:40:45 by ansebast          #+#    #+#             */
/*   Updated: 2025/04/12 09:56:14 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

Character::Character()
{
	this->name = "Default";
	// std::cout << "Character default constructor called\n";
	this->inventory[0] = NULL;
	this->inventory[1] = NULL;
	this->inventory[2] = NULL;
	this->inventory[3] = NULL;
}

Character::Character( std::string name ) : name(name)
{
	// std::cout << "Character name constructor called\n";
	this->inventory[0] = NULL;
	this->inventory[1] = NULL;
	this->inventory[2] = NULL;
	this->inventory[3] = NULL;
}

Character::Character( const Character& character )
{
	// std::cout << "Character copy constructor called\n";
	this->name = character.name;
	for (int i = 0; i < 4; i++)
	{
		if (character.inventory[i]){
			this->inventory[i] = character.inventory[i]->clone();
		} else {
			this->inventory[i] = NULL;
		}
	}
}

Character& Character::operator=( const Character& character )
{
	if (this != &character)
	{
		this->name = character.name;
		for (int i = 0; i < 4; i++)
		{
			if ( this->inventory[i] )
				delete this->inventory[i];
			if (character.inventory[i]){
				this->inventory[i] = character.inventory[i]->clone();
			} else {
				this->inventory[i] = NULL;
			}
		}
	}
	return (*this);
}

Character::~Character()
{
	// std::cout << "Character destructor called\n";
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i]) {
			delete this->inventory[i];
			this->inventory[i] = NULL;
		}
	}
}

void Character::equip( AMateria* m )
{
	if (!m) {
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if ( this->inventory[i] == NULL )
		{
			this->inventory[i] = m;
			break;
		}
	}
}

void Character::unequip( int idx )
{
	if (idx >= 0 && idx <= 3)
	{
		this->inventory[idx] = NULL;
	}
}

std::string const & Character::getName( void ) const
{
	return (this->name);
}

void Character::use( int idx, ICharacter& target )
{
	if ( idx >= 0 && idx <= 3 )
	{
		if (this->inventory[idx]) {
			this->inventory[idx]->use(target);
		}
	}
}
