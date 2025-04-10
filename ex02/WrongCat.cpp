/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 09:42:03 by ansebast          #+#    #+#             */
/*   Updated: 2025/04/09 11:26:41 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongCat.hpp"

WrongCat::WrongCat( void )
{
	this->type = "WrongCat";
	std::cout << "WrongCat Default constructor called\n";
}

WrongCat::WrongCat( const WrongCat& WrongCat )
{
	std::cout << "WrongCat Copy constructor called\n";
	*this = WrongCat;
}

WrongCat& WrongCat::operator=(const WrongCat& WrongCat)
{
	if (this != &WrongCat)
	{
		this->type = WrongCat.getType();	
	}
	return ( *this );
}

WrongCat::~WrongCat( )
{
	std::cout << "WrongCat Destructor called\n";
}

void WrongCat::makeSound( void ) const
{
	std::cout << "The WrongCat meowed\n";
}