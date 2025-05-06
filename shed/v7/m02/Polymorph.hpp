/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 09:16:09 by passunca          #+#    #+#             */
/*   Updated: 2025/05/06 09:17:40 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

class Polymorph : public ASpell {
  public:
	Polymorph();
	~Polymorph();

	ASpell *clone() const;
};


