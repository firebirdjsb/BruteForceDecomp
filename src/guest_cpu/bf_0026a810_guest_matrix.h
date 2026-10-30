/* Xbox Brute Force 0x0026A810..0x0026A8F5 (230 bytes), guest execution.
 * Original image SHA-256:
 * B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721
 * Body SHA-256:
 * 8B28CA66B84826C0BBCE3323287A85C919BA60D41F1D3C3C87F2C517EEDCBC81
 * NOT a host ABI replacement or complete Xbox x87/exception emulation.
 */
#ifndef BF_0026A810_GUEST_MATRIX_H
#define BF_0026A810_GUEST_MATRIX_H
#include <stdbool.h>
#include <stdint.h>
typedef struct bf_0026a810_mem {
    void *ctx;
    bool (*read32)(void *,uint32_t,uint32_t *);
    bool (*write32)(void *,uint32_t,uint32_t);
} bf_0026a810_mem;
typedef struct bf_0026a810_x87 {
    void *ctx;
    bool (*fld32)(void *,uint32_t);
    bool (*fmul32)(void *,uint32_t);
    bool (*faddp)(void *);
    bool (*fstp32)(void *,uint32_t *);
} bf_0026a810_x87;
typedef struct bf_0026a810_entry {
    uint32_t esp,esi,edi,ebx,ebp;
    bool direction_flag;
} bf_0026a810_entry;
typedef enum bf_0026a810_status {
    BF_0026A810_OK=0,BF_0026A810_INVALID,
    BF_0026A810_READ_FAULT,BF_0026A810_WRITE_FAULT,BF_0026A810_X87_FAULT
} bf_0026a810_status;
typedef struct bf_0026a810_result {
    bf_0026a810_status status;
    uint32_t pc,fault_address;
    uint32_t eax,ecx,esi,edi,ebx,ebp,esp,next_eip;
    uint32_t products,cells,copied_words;
} bf_0026a810_result;
static inline bf_0026a810_result bf_0026a810_execute(
    const bf_0026a810_mem *m,const bf_0026a810_x87 *f,
    bf_0026a810_entry entry)
{
    bf_0026a810_result r={0};
    r.status=BF_0026A810_INVALID;
    if(!m||!m->read32||!m->write32||!f||!f->fld32||
       !f->fmul32||!f->faddp||!f->fstp32)return r;
#define READ(a,v,at) do {const uint32_t addr=(a);r.pc=(at);\
    if(!m->read32(m->ctx,addr,&(v))){r.status=BF_0026A810_READ_FAULT;\
    r.fault_address=addr;return r;}}while(0)
#define WRITE(a,v,at) do {const uint32_t addr=(a);r.pc=(at);\
    if(!m->write32(m->ctx,addr,(v))){r.status=BF_0026A810_WRITE_FAULT;\
    r.fault_address=addr;return r;}}while(0)
#define FP(op,v,at) do {r.pc=(at);if(!f->op(f->ctx,(v))){\
    r.status=BF_0026A810_X87_FAULT;return r;}}while(0)
#define FP_NOP(op,at) do {r.pc=(at);if(!f->op(f->ctx)){\
    r.status=BF_0026A810_X87_FAULT;return r;}}while(0)
    const uint32_t E=entry.esp;
    const uint32_t src_frame=E-UINT32_C(0x518);
    uint32_t left,right,left_rows,right_rows,product,left_count;
    uint32_t right_cols,remaining,saved_ebx=entry.ebx;
    uint32_t word,ptr_out,ptr_left,ptr_right;
    READ(E+8u,left,UINT32_C(0x26a816));
    READ(left+UINT32_C(0x510),left_rows,UINT32_C(0x26a81d));
    WRITE(E-UINT32_C(0x52c),entry.esi,UINT32_C(0x26a825));
    WRITE(E-UINT32_C(0x530),entry.edi,UINT32_C(0x26a826));
    READ(E+12u,right,UINT32_C(0x26a827));
    READ(right+UINT32_C(0x510),right_rows,UINT32_C(0x26a82e));
    WRITE(E-8u,left_rows,UINT32_C(0x26a834));
    WRITE(E-4u,right_rows,UINT32_C(0x26a83b));
    if(left_rows!=0u){
        READ(right+UINT32_C(0x514),right_cols,UINT32_C(0x26a848));
        WRITE(E-UINT32_C(0x534),entry.ebx,UINT32_C(0x26a84e));
        uint32_t offset=src_frame-left;
        WRITE(E-UINT32_C(0x538),entry.ebp,UINT32_C(0x26a855));
        WRITE(E-UINT32_C(0x51c),right_cols,UINT32_C(0x26a856));
        WRITE(E-UINT32_C(0x520),offset,UINT32_C(0x26a85c));
        WRITE(E-UINT32_C(0x524),left_rows,UINT32_C(0x26a860));
        ptr_left=left;ptr_right=right;ptr_out=src_frame;
        for(;;){
            if(right_cols!=0u){
                READ(left+UINT32_C(0x514),left_count,UINT32_C(0x26a868));
                WRITE(E-UINT32_C(0x528),right_cols,UINT32_C(0x26a870));
                for(;;){
                    WRITE(ptr_out,0u,UINT32_C(0x26a876));
                    if(left_count!=0u){
                        READ(UINT32_C(0x003a4f88),word,UINT32_C(0x26a87e));
                        FP(fld32,word,UINT32_C(0x26a87e));
                        uint32_t lhs=ptr_left,rhs=ptr_right;
                        remaining=left_count;
                        for(;;){
                            READ(rhs,word,UINT32_C(0x26a890));
                            FP(fld32,word,UINT32_C(0x26a890));
                            READ(lhs,word,UINT32_C(0x26a895));
                            FP(fmul32,word,UINT32_C(0x26a895));
                            lhs+=4u;rhs+=4u;--remaining;
                            FP_NOP(faddp,UINT32_C(0x26a89c));
                            ++r.products;
                            if(remaining==0u)break;
                        }
                        FP(fstp32,&product,UINT32_C(0x26a8a0));
                        WRITE(ptr_out,product,UINT32_C(0x26a8a0));
                    }
                    ++r.cells;
                    READ(E-UINT32_C(0x528),remaining,UINT32_C(0x26a8a2));
                    ptr_out+=4u;ptr_right+=UINT32_C(0x48);
                    --remaining;
                    WRITE(E-UINT32_C(0x528),remaining,UINT32_C(0x26a8ad));
                    if(remaining==0u)break;
                }
                READ(E-UINT32_C(0x520),offset,UINT32_C(0x26a8b3));
                READ(E-UINT32_C(0x51c),right_cols,UINT32_C(0x26a8b7));
                READ(E+8u,left,UINT32_C(0x26a8bb));
                READ(E+12u,right,UINT32_C(0x26a8c2));
            }
            READ(E-UINT32_C(0x524),remaining,UINT32_C(0x26a8c9));
            ptr_left+=UINT32_C(0x48);--remaining;
            WRITE(E-UINT32_C(0x524),remaining,UINT32_C(0x26a8d1));
            if(remaining==0u)break;
            ptr_out=ptr_left+offset;
            ptr_right=right;
        }
        READ(E-UINT32_C(0x538),r.ebp,UINT32_C(0x26a8d7));
        READ(E-UINT32_C(0x534),saved_ebx,UINT32_C(0x26a8d8));
    }else r.ebp=entry.ebp;
    r.ebx=saved_ebx;
    READ(E+4u,r.eax,UINT32_C(0x26a8d9));
    ptr_out=r.eax;
    uint32_t src=src_frame;
    const uint32_t delta=entry.direction_flag?UINT32_C(0xfffffffc):4u;
    for(uint32_t i=0;i<UINT32_C(0x146);++i){
        READ(src,word,UINT32_C(0x26a8eb));
        WRITE(ptr_out,word,UINT32_C(0x26a8eb));
        src+=delta;ptr_out+=delta;++r.copied_words;
    }
    READ(E-UINT32_C(0x530),r.edi,UINT32_C(0x26a8ed));
    READ(E-UINT32_C(0x52c),r.esi,UINT32_C(0x26a8ee));
    READ(E,r.next_eip,UINT32_C(0x26a8f5));
    r.esp=E+4u;r.ecx=0u;
    r.status=BF_0026A810_OK;r.pc=UINT32_C(0x26a8f5);
#undef READ
#undef WRITE
#undef FP
#undef FP_NOP
    return r;
}
#endif
