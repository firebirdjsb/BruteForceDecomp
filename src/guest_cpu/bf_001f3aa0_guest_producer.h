/* Brute Force original Xbox 0x001F3AB0..0x001F3B31:
 * construct the two guest stack arguments and x87 input floats for
 * CALL 0x002B7970. Not a full FUN_001F3AA0 or an x87 emulator.
 * Original XBE SHA-256:
 * B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721.
 */
#ifndef BF_001F3AA0_GUEST_PRODUCER_H
#define BF_001F3AA0_GUEST_PRODUCER_H
#include "bf_001f3aa0_sparse_site.h"

typedef struct bf_001f3aa0_x87_backend {
    void *context;
    bool (*fld_m32fp)(void *,uint32_t);
    bool (*fadd_m32fp)(void *,uint32_t);
    bool (*fsub_m32fp)(void *,uint32_t);
    bool (*fstp_m32fp)(void *,uint32_t *);
} bf_001f3aa0_x87_backend;

typedef enum bf_001f3aa0_producer_status {
    BF_001F3AA0_PRODUCER_OK=0,
    BF_001F3AA0_PRODUCER_INVALID,
    BF_001F3AA0_PRODUCER_READ_FAULT,
    BF_001F3AA0_PRODUCER_WRITE_FAULT,
    BF_001F3AA0_PRODUCER_X87_FAULT
} bf_001f3aa0_producer_status;

typedef struct bf_001f3aa0_producer_result {
    bf_001f3aa0_producer_status status;
    uint32_t fault_guest_va, instruction_va;
    uint32_t live_guest_esp, ebx, ecx, edx, eax, edi;
    uint32_t guest_call_esp; /* pre-CALL ESP after 2 original PUSHes */
    uint32_t first_arg, second_arg; /* callee [ESP+4], [ESP+8] */
    uint32_t return_eip; /* original CALL return, not yet written */
} bf_001f3aa0_producer_result;

static inline bf_001f3aa0_producer_result bf_001f3aa0_make_2b7970_args(
    const bf_002ebea0_guest_mem *mem,const bf_001f3aa0_x87_backend *fp,
    uint32_t guest_ebp,uint32_t live_esp,uint32_t incoming_ecx)
{
    bf_001f3aa0_producer_result r={0};
    uint32_t state_word,owner_38,word;
    r.status=BF_001F3AA0_PRODUCER_INVALID;
    r.live_guest_esp=live_esp;
    if(!mem || !mem->read_dword || !mem->write_dword || !fp ||
       !fp->fld_m32fp || !fp->fadd_m32fp ||
       !fp->fsub_m32fp || !fp->fstp_m32fp ||
       live_esp!=((guest_ebp & ~UINT32_C(15))-UINT32_C(0x20b0)))
        return r;
#define BF_READ(addr,dst,pc) do {const uint32_t a=(addr); r.instruction_va=(pc);\
    if(!mem->read_dword(mem->context,a,&(dst))){r.status=BF_001F3AA0_PRODUCER_READ_FAULT;r.fault_guest_va=a;return r;}\
} while(0)
#define BF_WRITE(addr,bits,pc) do {const uint32_t a=(addr);r.instruction_va=(pc);\
    if(!mem->write_dword(mem->context,a,(bits))){r.status=BF_001F3AA0_PRODUCER_WRITE_FAULT;r.fault_guest_va=a;return r;}\
} while(0)
#define BF_X87(op,arg,pc) do {r.instruction_va=(pc);\
    if(!fp->op(fp->context,(arg))){r.status=BF_001F3AA0_PRODUCER_X87_FAULT;return r;}\
} while(0)
    /* Incoming ECX is original owner object; EDI gets its address. */
    r.edi=incoming_ecx;
    BF_READ(guest_ebp+UINT32_C(0xc),r.edx,UINT32_C(0x1f3ab0));
    BF_READ(r.edi+UINT32_C(0x38),owner_38,UINT32_C(0x1f3ab7));
    BF_READ(guest_ebp+UINT32_C(8),r.ecx,UINT32_C(0x1f3aba));
    BF_WRITE(live_esp+UINT32_C(0x24),0u,UINT32_C(0x1f3abd));
    BF_WRITE(live_esp+UINT32_C(0x28),0u,UINT32_C(0x1f3ac5));
    BF_WRITE(live_esp+UINT32_C(0x2c),UINT32_C(0xbf800000),UINT32_C(0x1f3acd));
    BF_WRITE(live_esp+UINT32_C(0x30),0u,UINT32_C(0x1f3ad5));
    BF_WRITE(live_esp+UINT32_C(0x34),0u,UINT32_C(0x1f3add));
    BF_READ(owner_38+UINT32_C(4),word,UINT32_C(0x1f3ae5));
    BF_X87(fld_m32fp,word,UINT32_C(0x1f3ae5));
    BF_READ(UINT32_C(0x003a4f78),state_word,UINT32_C(0x1f3ae8));
    BF_X87(fadd_m32fp,state_word,UINT32_C(0x1f3ae8));
    BF_WRITE(live_esp+UINT32_C(0x18),r.ecx,UINT32_C(0x1f3aee));
    BF_WRITE(live_esp+UINT32_C(0x20),r.edx,UINT32_C(0x1f3af2));
    BF_WRITE(live_esp+UINT32_C(0x24),0u,UINT32_C(0x1f3af6));
    BF_X87(fstp_m32fp,&word,UINT32_C(0x1f3afe));
    BF_WRITE(live_esp+UINT32_C(0x1c),word,UINT32_C(0x1f3afe));
    BF_READ(owner_38+UINT32_C(4),word,UINT32_C(0x1f3b06));
    BF_X87(fld_m32fp,word,UINT32_C(0x1f3b06));
    BF_WRITE(live_esp+UINT32_C(0x14),UINT32_C(0xff7fffff),UINT32_C(0x1f3b09));
    BF_READ(owner_38+UINT32_C(8),word,UINT32_C(0x1f3b11));
    BF_X87(fsub_m32fp,word,UINT32_C(0x1f3b11));
    /* LEA EAX,[ESP+0x18]; PUSH EAX; PUSH ECX (ECX=ESP+0x40). */
    r.eax=live_esp+UINT32_C(0x18);
    r.first_arg=live_esp+UINT32_C(0x40);
    r.second_arg=r.eax;
    BF_WRITE(live_esp-UINT32_C(4),r.eax,UINT32_C(0x1f3b18));
    BF_WRITE(live_esp-UINT32_C(8),r.first_arg,UINT32_C(0x1f3b19));
    r.guest_call_esp=live_esp-UINT32_C(8);
    r.return_eip=UINT32_C(0x001f3b31);
    BF_READ(UINT32_C(0x003a4f78),word,UINT32_C(0x1f3b1a));
    BF_X87(fadd_m32fp,word,UINT32_C(0x1f3b1a));
    BF_WRITE(live_esp+UINT32_C(0x3c),0u,UINT32_C(0x1f3b20));
    BF_X87(fstp_m32fp,&word,UINT32_C(0x1f3b28));
    BF_WRITE(live_esp+UINT32_C(0x38),word,UINT32_C(0x1f3b28));
#undef BF_READ
#undef BF_WRITE
#undef BF_X87
    r.status=BF_001F3AA0_PRODUCER_OK;
    r.instruction_va=UINT32_C(0x1f3b2c);
    return r;
}
#endif
