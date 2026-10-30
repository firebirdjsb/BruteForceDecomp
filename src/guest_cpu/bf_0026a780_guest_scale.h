/* Original Xbox 0x0026A780..0x0026A807 (136 bytes).
 * XBE SHA256: B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721
 * Function SHA256: 2E3F69E58906705FB693DA7FF568ED43F814CCF0BFEAC043799486D1E7FED2FA
 * Guest-CPU operation bridge, not a host ABI replacement or full Xbox
 * x87 precision/control, exception or SEH implementation.
 */
#ifndef BF_0026A780_GUEST_SCALE_H
#define BF_0026A780_GUEST_SCALE_H
#include <stdbool.h>
#include <stdint.h>
typedef struct bf_0026a780_guest_io {
    void *ctx;
    bool (*read32)(void *, uint32_t, uint32_t *);
    bool (*write32)(void *, uint32_t, uint32_t);
} bf_0026a780_guest_io;
typedef struct bf_0026a780_x87_ops {
    void *ctx;
    bool (*fld32)(void *,uint32_t);
    bool (*fmul32)(void *,uint32_t);
    bool (*fstp32)(void *,uint32_t *);
} bf_0026a780_x87_ops;
typedef enum bf_0026a780_status {
    BF_0026A780_OK=0,BF_0026A780_INVALID_INTERFACE,
    BF_0026A780_READ_FAULT,BF_0026A780_WRITE_FAULT,
    BF_0026A780_X87_FAULT
} bf_0026a780_status;
typedef struct bf_0026a780_regs {
    uint32_t entry_esp; /* original CALL pushed return address */
    uint32_t ebx;       /* original implicit weights pointer */
    uint32_t esi,edi,ebp; /* saved/restored original registers */
    bool direction_flag;  /* original REP MOVSD does not clear DF */
} bf_0026a780_regs;
typedef struct bf_0026a780_result {
    bf_0026a780_status status;
    uint32_t instruction_va,fault_guest_va,next_eip,final_esp;
    uint32_t final_eax,final_ecx,final_esi,final_edi,final_ebp;
    uint32_t float_products,words_copied;
} bf_0026a780_result;

/* Original raw 326-word stack source, INCLUDING unwritten slots.
 * Memory callbacks model partial fault effects, not guest restart/SEH.
 * Backend owns x87 80-bit intermediate precision, control and status.
 * Do not silently replace the final REP MOVSD with host memcpy/memmove.
 */
static inline bf_0026a780_result bf_0026a780_execute(
    const bf_0026a780_guest_io *mem,
    const bf_0026a780_x87_ops *fpu,bf_0026a780_regs in)
{
    bf_0026a780_result r={0};
    r.status=BF_0026A780_INVALID_INTERFACE;
    if(!mem||!mem->read32||!mem->write32||!fpu||
       !fpu->fld32||!fpu->fmul32||!fpu->fstp32)return r;
    const uint32_t E=in.entry_esp;
    const uint32_t scratch=E-UINT32_C(0x518);
    uint32_t current_esp=E-UINT32_C(0x51c);
    uint32_t object,rows,cols,word,out_addr;
#define BF_READ(a,d,pc) do {const uint32_t va=(a);r.instruction_va=(pc); \
    if(!mem->read32(mem->ctx,va,&(d))){ \
      r.status=BF_0026A780_READ_FAULT;r.fault_guest_va=va;return r; \
    } }while(0)
#define BF_WRITE(a,w,pc) do {const uint32_t va=(a);r.instruction_va=(pc); \
    if(!mem->write32(mem->ctx,va,(w))){ \
      r.status=BF_0026A780_WRITE_FAULT;r.fault_guest_va=va;return r; \
    } }while(0)
#define BF_FP(op,x,pc) do {r.instruction_va=(pc); \
    if(!fpu->op(fpu->ctx,(x))){r.status=BF_0026A780_X87_FAULT;return r;} \
    }while(0)
    /* SUB ESP,51C / PUSH ESI / load original second stack argument. */
    BF_WRITE(current_esp-4u,in.esi,UINT32_C(0x26a786));
    current_esp-=4u;
    BF_READ(E+8u,object,UINT32_C(0x26a787));
    BF_READ(object+UINT32_C(0x510),rows,UINT32_C(0x26a78e));
    BF_WRITE(current_esp-4u,in.edi,UINT32_C(0x26a796));
    current_esp-=4u;
    BF_READ(object+UINT32_C(0x514),cols,UINT32_C(0x26a797));
    BF_WRITE(E-8u,rows,UINT32_C(0x26a79d));
    BF_WRITE(E-4u,cols,UINT32_C(0x26a7a4));
    r.final_ebp=in.ebp;
    if(rows!=0u){
        BF_WRITE(current_esp-4u,in.ebp,UINT32_C(0x26a7ad));
        current_esp-=4u;
        const uint32_t frame_base=current_esp+UINT32_C(0x10);
        const uint32_t remaining_va=current_esp+UINT32_C(0xc);
        BF_WRITE(remaining_va,rows,UINT32_C(0x26a7b2));
        uint32_t row=0u,remaining;
        do {
            if(cols!=0u){
                const uint32_t row_address=frame_base+row*UINT32_C(0x48);
                for(uint32_t col=0u;col<cols;col++){
                    const uint32_t displacement=col*UINT32_C(4);
                    BF_READ(in.ebx+displacement,word,UINT32_C(0x26a7c4));
                    BF_FP(fld32,word,UINT32_C(0x26a7c4));
                    /* Original SUB ESI,EAX converts the object pointer
                     * to a guest row address relative to frame_base. */
                    BF_READ(object+row*UINT32_C(0x48)+displacement,
                            word,UINT32_C(0x26a7c8));
                    BF_FP(fmul32,word,UINT32_C(0x26a7c8));
                    BF_FP(fstp32,&word,UINT32_C(0x26a7d0));
                    BF_WRITE(row_address+displacement,word,UINT32_C(0x26a7d0));
                    ++r.float_products;
                }
                /* After FMUL loop, original 26A7D5 reloads ESI
                 * from [entry_esp+8] before the next row. */
                BF_READ(E+8u,object,UINT32_C(0x26a7d5));
            }
            BF_READ(remaining_va,remaining,UINT32_C(0x26a7dc));
            --remaining;
            BF_WRITE(remaining_va,remaining,UINT32_C(0x26a7e4));
            ++row;
        }while(remaining!=0u);
        BF_READ(current_esp,r.final_ebp,UINT32_C(0x26a7ea));
        current_esp+=4u;
    }
    /* Both paths now have ESP=entry_esp-0x524. MOV EAX,[ESP+528].
     * The copy source is still the original uninitialized guest stack.
     * Its final two DWORDs were written by the original prologue. */
    BF_READ(E+4u,out_addr,UINT32_C(0x26a7eb));
    r.final_eax=out_addr;
    uint32_t src=scratch,dst=out_addr;
    const uint32_t delta=in.direction_flag?UINT32_C(0xfffffffc):4u;
    for(uint32_t i=0;i<UINT32_C(0x146);i++){
        BF_READ(src,word,UINT32_C(0x26a7fd));
        BF_WRITE(dst,word,UINT32_C(0x26a7fd));
        src+=delta;dst+=delta;
        ++r.words_copied;
    }
    BF_READ(current_esp,r.final_edi,UINT32_C(0x26a7ff));
    current_esp+=4u;
    BF_READ(current_esp,r.final_esi,UINT32_C(0x26a800));
    current_esp+=4u+UINT32_C(0x51c);
    BF_READ(current_esp,r.next_eip,UINT32_C(0x26a807));
    r.final_esp=current_esp+4u;
    r.final_ecx=0u;
    r.status=BF_0026A780_OK;
    r.instruction_va=UINT32_C(0x26a807);
#undef BF_READ
#undef BF_WRITE
#undef BF_FP
    return r;
}
#endif
