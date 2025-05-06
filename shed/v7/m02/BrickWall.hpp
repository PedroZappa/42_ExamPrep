/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 09:18:52 by passunca          #+#    #+#             */
/*   Updated: 2025/05/06 09:19:05 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

class BrickWall : public ATarget {
  public:
	BrickWall();
	~BrickWall();

	ATarget *clone() const;
};


