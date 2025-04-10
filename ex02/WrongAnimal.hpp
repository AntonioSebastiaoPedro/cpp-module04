/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 09:42:03 by ansebast          #+#    #+#             */
/*   Updated: 2025/04/09 13:30:23 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	
	public:
		WrongAnimal( void );
		WrongAnimal( const WrongAnimal& WrongAnimal );
		WrongAnimal& operator=(const WrongAnimal& WrongAnimal);
		~WrongAnimal( );
		
		void setType( std::string type );
		std::string getType( void ) const;
		void makeSound( void ) const;
};

# endif