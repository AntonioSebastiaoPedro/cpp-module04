/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 09:42:03 by ansebast          #+#    #+#             */
/*   Updated: 2025/04/09 13:18:23 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog( void )
{
	this->type = "Dog";
	std::cout << "Dog Default constructor called\n";
}

Dog::Dog( const Dog& dog )
{
	std::cout << "Dog Copy constructor called\n";
	*this = dog;
}

Dog& Dog::operator=(const Dog& dog)
{
	if (this != &dog)
	{
		this->type = dog.getType();	
	}
	return ( *this );
}

Dog::~Dog( )
{
	std::cout << "Dog Destructor called\n";
}

void Dog::makeSound( void ) const
{
	std::cout << "The Dog barked\n";
}