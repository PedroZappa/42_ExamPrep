/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 08:18:41 by passunca          #+#    #+#             */
/*   Updated: 2025/03/31 08:34:52 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

int main(void) {
	Warlock const zedro("Zedro", "the Passunca");
	zedro.introduce();
	std::cout << zedro.getName() << " - " << zedro.getTitle() << std::endl;
	return (0);
}
