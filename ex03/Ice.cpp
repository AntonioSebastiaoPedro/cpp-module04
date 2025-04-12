/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 20:38:42 by ansebast          #+#    #+#             */
/*   Updated: 2025/04/12 10:05:45 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice( const Ice& ice ): AMateria(ice)
{
}

Ice& Ice::operator=( const Ice& ice )
{
	if ( this != &ice )
	{
		AMateria::operator=(ice);
	}
	return ( *this );
}

Ice::~Ice()
{
	// std::cout << "Ice destructor called\n";
}

AMateria* Ice::clone() const
{
	return ( new Ice(*this) );
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}
