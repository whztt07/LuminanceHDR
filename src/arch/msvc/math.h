/**
 * This file is a part of LuminanceHDR package.
 * ---------------------------------------------------------------------- 
 * Copyright (C) 2006,2007,2008 Giuseppe Rota
 * 
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 * ---------------------------------------------------------------------- 
 * 
 * @author Daniel Kaneider <danielkaneider@users.sourceforge.net>
 *  
 */

#ifndef _MSVC_MATH_H
#define _MSVC_MATH_H

	#define _USE_MATH_DEFINES

	#define exp2f(x)        (powf(2.0f, x))
	#define log2(x)        (log(x)  / 0.693147180559945309417)
	#define log2f(x)       (logf(x) / 0.693147180559945309417)

	#define lround(d)       ((long)(d>0 ? d+0.5 : ceil(d-0.5)))
	#define round(d)       ((d>0) ? int(d+0.5) : int(d-0.5))
	#define finite(x)       (_finite(x))

	#define isnan(x) (x != x)
	#define isnanf(x) (x != x)

	#define fmax max
	#define fmaxf max
	#define fmin min
	#define fminf min
	#pragma warning (disable:4996)
	#define snprintf sprintf_s

#endif