/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:59:01 by ansebast          #+#    #+#             */
/*   Updated: 2025/04/10 16:21:45 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called\n";
	for ( int i = 0; i < 100; i++ )
	{
		this->ideas[i] = "Idea " + std::to_string(i + 1);
	}
}

Brain::Brain( const Brain& brain )
{
	std::cout << "Brain copy constructor called\n";
	*this = brain;
}

Brain& Brain::operator=( const Brain& brain )
{
	if ( this != &brain )
	{
		for (int i = 0; i < 100; i++)
		{
			this->ideas[i] = brain.getIdea(i);
		}
	}
	return ( *this );
}

Brain::~Brain()
{
	std::cout << "Brain destructor called\n";
}

std::string Brain::getIdea( int position ) const
{
	return ( this->ideas[position % 100] );	
}

void Brain::setIdeas( int position, std::string ideas )
{
	this->ideas[position % 100] = ideas;
}

std::ostream& operator<<( std::ostream& stream, const Brain& brain )
{
	for (int i = 0; i < 100; i++)
	{
		stream << brain.getIdea(i) << "\n";
	}
	return ( stream );
}
