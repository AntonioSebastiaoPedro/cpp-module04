/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 20:38:42 by ansebast          #+#    #+#             */
/*   Updated: 2025/04/11 08:26:50 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Ice.hpp"

Ice::Ice()
{
	std::cout << "Ice default constructor called\n";
	this->type = "ice";
}

Ice::Ice( const Ice& ice ): AMateria(ice)
{
	std::cout << "Ice Copy constructor called\n";
	*this = ice;
}

Ice& Ice::operator=( const Ice& Ice )
{
	if ( this != &Ice )
	{
		this->type = Ice.getType();
	}
	return ( *this );
}

Ice::~Ice()
{
	std::cout << "Ice destructor called\n";
}

Ice* Ice::clone() const
{
	return ( new Ice() );
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *";
}
