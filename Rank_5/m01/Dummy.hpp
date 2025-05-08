/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 08:42:15 by passunca          #+#    #+#             */
/*   Updated: 2025/05/06 08:42:27 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ATarget.hpp"

class Dummy : public ATarget {
  public:
	Dummy();
	~Dummy();

	ATarget *clone() const;
};

