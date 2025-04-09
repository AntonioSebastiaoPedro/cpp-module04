/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 09:42:03 by ansebast          #+#    #+#             */
/*   Updated: 2025/04/09 11:22:23 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "Cat.hpp"

int main( void )
{
	const Animal* meta = new Animal();
	const Animal* i = new Cat();
	
	std::cout << i->getType() << " " << std::endl;
	
	i->makeSound();
	meta->makeSound();

	delete i;
	delete meta;
	
	return (0);
}
