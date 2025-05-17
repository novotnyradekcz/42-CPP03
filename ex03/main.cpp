/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <rnovotny@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 16:35:00 by rnovotny          #+#    #+#             */
/*   Updated: 2025/05/17 17:32:43 by rnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap defaultDiamond;
	DiamondTrap diamond("DiamondTrap");
	DiamondTrap copy(diamond);
	DiamondTrap assign;
	assign = diamond;

	diamond.attack("target");
	diamond.takeDamage(5);
	diamond.beRepaired(3);
	diamond.guardGate();
	diamond.highFivesGuys();
	diamond.whoAmI();

	return 0;
}
