/*
Copyright (c) 2012, Broadcom Europe Ltd
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    * Neither the name of the copyright holder nor the
      names of its contributors may be used to endorse or promote products
      derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#ifndef VCHIQ_BI_H
#define VCHIQ_BI_H

#include "vchiq_bi_ipc_shared_mem.h"

/* It turns out the modem/dsp is using 4KB of the VideoCore space, so leave a gap */
#define IPC_SHARED_MEM_VC_AVOID      (0x3000)
#define IPC_SHARED_MEM_SLOTS      (IPC_SHARED_MEM_BASE + IPC_SHARED_MEM_VC_OFFSET + IPC_SHARED_MEM_VC_AVOID)
#define IPC_SHARED_MEM_SLOTS_SIZE (IPC_SHARED_MEM_CLOCK_DEBUG_OFFSET - IPC_SHARED_MEM_VC_AVOID)

#if defined(VCHIQ_SM_ALLOC_VCDDR)
#define VCHIQ_IPC_SHARED_MEM_SIZE            0x1E000  /* ARM and VC channels. */ 
#define VCHIQ_IPC_SHARED_MEM_EXTRA           0x1000   /* Misc pointers: clock debug, gpio. */

#define VCHIQ_IPC_SHARED_MEM_SYMBOL          "vchiq_ipc_shared_mem"
#define VCHIQ_IPC_SHARED_MEM_SIZE_SYMBOL     "vchiq_ipc_shared_mem_size"
#endif

#endif /* VCHIQ_BI_H */
