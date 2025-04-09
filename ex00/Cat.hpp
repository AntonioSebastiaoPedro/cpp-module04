/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 09:42:03 by ansebast          #+#    #+#             */
/*   Updated: 2025/04/09 11:24:43 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{	
	public:
		Cat( void );
		Cat( const Cat& cat );
		Cat& operator=( const Cat& cat );
		~Cat( );
		
		void makeSound( void ) const;
};

# endif