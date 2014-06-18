/*
	Copyright 2014 Francesco "Franc[e]sco" Noferi (francesco149@gmail.com)

	This file is part of Kami-sama.

	Kami-sama is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	Kami-sama is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with Kami-sama. If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "utils.hpp"
#include "memoryhack.hpp"
#include <list>

namespace maple
{
	class makesingleton(cpuhack)
	{
	public:
		cpuhack();
		virtual ~cpuhack();
		bool enable(bool enabled);

	protected:
		std::list<memory::memoryhack * const> haxlist;
		memory::memoryhack bg, obj, tiles, obj2, clouds, nodmg1, nodmg2, nodmg3, nodmg4, nodmg5;
	};
}