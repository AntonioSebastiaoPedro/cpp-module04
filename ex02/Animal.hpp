/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 09:42:03 by ansebast          #+#    #+#             */
/*   Updated: 2025/04/10 17:03:17 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class AAnimal
{
	protected:
		std::string type;
	
	public:
		AAnimal( void );
		AAnimal( const AAnimal& animal );
		AAnimal& operator=(const AAnimal& animal);
		virtual ~AAnimal( );
		
		void setType( std::string type );
		std::string getType( void ) const;
		virtual void makeSound( void ) const = 0;
};

# endif