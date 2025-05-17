/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <rnovotny@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 16:35:00 by rnovotny          #+#    #+#             */
/*   Updated: 2025/05/17 17:31:24 by rnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap claptrap("ClapTrap");
	ClapTrap copy(claptrap);
	ClapTrap assign;
	assign = claptrap;

	claptrap.attack("target");
	claptrap.takeDamage(5);
	claptrap.beRepaired(3);

	ClapTrap *heapClaptrap = new ClapTrap("HeapClapTrap");

	heapClaptrap->attack("target");
	heapClaptrap->takeDamage(5);
	heapClaptrap->beRepaired(3);

	delete heapClaptrap;

	FragTrap fragtrap("FragTrap");
	FragTrap copyFrag(fragtrap);
	FragTrap assignFrag;
	assignFrag = fragtrap;
	
	fragtrap.attack("target");
	fragtrap.takeDamage(5);
	fragtrap.beRepaired(3);
	fragtrap.highFivesGuys();

	return 0;
}