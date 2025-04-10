/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:51:06 by ansebast          #+#    #+#             */
/*   Updated: 2025/04/10 15:16:45 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	private:
		std::string ideas[100];
	
	public:
		Brain();
		Brain( const Brain& brain );
		Brain& operator=( const Brain& brain );
		~Brain();

		std::string getIdea( int position ) const;
		void setIdeas( std::string ideas[100] );
};
std::ostream& operator<<( std::ostream& stream, const Brain& brain );

# endif