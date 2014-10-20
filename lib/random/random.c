/*
 * This file is part of HiKoB Openlab.
 *
 * HiKoB Openlab is free software: you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation, version 3.
 *
 * HiKoB Openlab is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with HiKoB Openlab. If not, see
 * <http://www.gnu.org/licenses/>.
 *
 * Copyright (C) 2011,2012 HiKoB.
 */

/*
 * random.c
 *
 *  Created on: Sept 2011
 *      Author: Antoine Fraboulet <antoine.fraboulet.at.hikob.com>
 */

/*
 * This lib uses the standard rand() function call.
 * Upgrade to a more robust random generator using LFSR of
 * PRNG is required as soon as possible.
 */

#include "random.h"
#include <stdlib.h>

void random_init(unsigned short seed)
{
    srand(seed);
}

unsigned short random_rand16(void)
{
    return (unsigned short)rand();
}

unsigned int   random_rand32(void)
{
    return (unsigned int)rand();
}

