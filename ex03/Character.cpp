/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 17:40:45 by ansebast          #+#    #+#             */
/*   Updated: 2025/04/11 07:57:40 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

Character::Character()
{
	std::cout << "Character default constructor called\n";
	this->inventory[0] = NULL;
	this->inventory[1] = NULL;
	this->inventory[2] = NULL;
	this->inventory[3] = NULL;
}

Character::Character( const Character& character )
{
	std::cout << "Character copy constructor called\n";
	*this = character;
}

Character& Character::operator=( const Character& character )
{
	if ( this != &character )
	{
		for ( int i = 0; i < 4; i++ )
		{
			this->inventory[i] = character.inventory[i];
		}
	}
	return ( *this );
}

Character::~Character()
{
	std::cout << "Character destructor called\n";
	delete[] this->inventory;
}

void Character::equip( AMateria& m )
{
	for (int i = 0; i < 4; i++)
	{
		if ( this->inventory[i] == NULL )
		{
			*this->inventory[i] = m;
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

void Character::use( int idx, Character& target )
{
	if ( idx >= 0 && idx <= 3 )
	{
		this->inventory[idx]->use(target);
	}
}
