/** $lic$
 * Copyright (C) 2012 by Massachusetts Institute of Technology
 * Copyright (C) 2010-2012 by The Board of Trustees of Stanford University
 *
 * This file is part of zsim, the zcache simulator. zsim was mainly
 * developed at MIT and Stanford by Daniel Sanchez <sanchez@csail.mit.edu>.
 *
 * If you use this software in your research, we request that you reference
 * the zcache paper ("The ZCache: Decoupling ways and Associativity", Sanchez
 * and Kozyrakis, MICRO-44, December 2010) as the source of the simulator in
 * any publications that use this software, and that you send us a citation of
 * your work.
 *
 * Until we release zsim, only MIT and Stanford students and faculty using
 * university equipment are allowed to use zsim. We will release zsim under
 * a GPLv2 license on 2013, upon publication of a paper about it, currently
 * under submission. Until then, you are required to keep this within MIT
 * and/or Stanford. 
 *
 * zsim is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.
 */

#ifndef __SYSCALL_TABLE_H__
#define __SYSCALL_TABLE_H__

#ifdef _ASM_X86_UNISTD_64_H
#error "You need to include this file before any unistd include"
#endif

#define QUOTED_(x) #x
#define QUOTED(x) QUOTED_(x)

#define __SYSCALL(a, b) QUOTED(b),

static const char* syscallNames[] = {
#include <asm/unistd.h>
"INVALID"
};

#undef __SYSCALL
#undef QUOTED

#endif /*__SYSCALL_TABLE_H__*/


