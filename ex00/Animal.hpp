/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 09:42:03 by ansebast          #+#    #+#             */
/*   Updated: 2025/04/09 12:04:09 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string type;
	
	public:
		Animal( void );
		Animal( const Animal& animal );
		Animal& operator=(const Animal& animal);
		~Animal( );
		
		void setType( std::string type );
		std::string getType( void ) const;
		void makeSound( void ) const;
};

# endif