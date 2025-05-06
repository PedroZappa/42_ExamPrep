/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 09:14:46 by passunca          #+#    #+#             */
/*   Updated: 2025/05/06 09:15:33 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

class Fireball : public ASpell {
  public:
	Fireball();
	~Fireball();

	ASpell *clone() const;
};

