/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 16:58:20 by passunca          #+#    #+#             */
/*   Updated: 2025/03/31 17:25:21 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ASpell.hpp"
#include <map>

class SpellBook {
public:
  SpellBook();
  ~SpellBook();

  void learnSpell(ASpell *);
  void forgetSpell(const std::string &);
  ASpell *createSpell(std::string const &);

private:
  std::map<std::string, ASpell *> _spellBook;

  SpellBook(SpellBook const &);
  SpellBook &operator=(SpellBook const &);
};
