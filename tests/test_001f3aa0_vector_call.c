/* Caller-side guest CALL + callee x87/SSE integration fixture.
 * Producer status has the exact declared original caller output; the
 * separate producer test validates the instruction-level input writes.
 */
#define main bf_previous_tail_test_main
#include "test_002b7970_guest_tail.c"
#undef main
#include "bf_001f3aa0_vector_call.h"
static bool xch(void*v){
    fixture*f=v;if(f->depth<2)return false;
    long double z=f->st[f->depth-1];
    f->st[f->depth-1]=f->st[f->depth-2];
    f->st[f->depth-2]=z;return true;
}
static void verify(unsigned k){
    fixture*f=calloc(1,sizeof *f);CHECK(f);f->data=malloc(SIZE);CHECK(f->data);
    const uint32_t live=E+12u;
    const uint32_t source=live+0x18u,dest=live+0x40u;
    seed(f,k);put(f,E,UINT32_C(0x11111111));
    /* Two original PUSHed guest addresses, from the producer.
     * Destination and source live inside the SAME guest stack frame. */
    for(unsigned i=0;i<10u;i++)
        put(f,source+4u*i,bits((float)(i+1u)*0.125f+(float)(k%7u)*0.25f));
    put(f,live-8u,dest);put(f,live-4u,source);
    bf_001f3aa0_producer_result prod={0};
    prod.status=BF_001F3AA0_PRODUCER_OK;
    prod.instruction_va=UINT32_C(0x1f3b2c);
    prod.live_guest_esp=live;prod.guest_call_esp=live-8u;
    prod.first_arg=dest;prod.second_arg=source;
    prod.return_eip=UINT32_C(0x1f3b31);
    const bf_002b7970_tail_io mem={{f,rd32,wr32},rd64,wr64};
    const bf_002b7970_x87 base={f,fld,xch,fstp};
    const bf_002b7970_tail_ops tail={f,fld,fmul,fstp,mulps,addps};
    bf_002b7970_xmm xmm=start_xmm();
    const bf_001f3aa0_vector_result r=
        bf_001f3aa0_execute_vector_call(&mem,&base,&tail,&prod,&xmm);
    CHECK(r.status==BF_001F3AA0_VECTOR_OK&&r.pc==UINT32_C(0x1f3b31));
    CHECK(r.output_guest==dest&&r.live_esp==live);
    CHECK(r.callee.base.x87_loads==6u&&r.callee.base.x87_stores==6u);
    CHECK(r.callee.tail.x87_multiplies==1u);
    CHECK(r.callee.return_eip==UINT32_C(0x1f3b31));
    CHECK(r.callee.final_esp==live);
    CHECK(get(f,E)==UINT32_C(0x1f3b31));
    CHECK(get(f,dest)==UINT32_C(0x0039efb8));
    CHECK(get(f,dest+0x0cu)==0u&&get(f,dest+0x2cu)==0u);
    CHECK(f->depth==0u);
    free(f->data);free(f);
}
int main(void){
    for(unsigned k=0;k<128u;k++)verify(k);
    fixture*f=calloc(1,sizeof *f);CHECK(f);f->data=malloc(SIZE);CHECK(f->data);
    const bf_002b7970_tail_io mem={{f,rd32,wr32},rd64,wr64};
    const bf_002b7970_x87 base={f,fld,xch,fstp};
    const bf_002b7970_tail_ops tail={f,fld,fmul,fstp,mulps,addps};
    bf_002b7970_xmm xmm=start_xmm();
    bf_001f3aa0_producer_result prod={0};
    CHECK(bf_001f3aa0_execute_vector_call(&mem,&base,&tail,&prod,&xmm).
          status==BF_001F3AA0_VECTOR_INVALID);
    seed(f,0);
    prod.status=BF_001F3AA0_PRODUCER_OK;
    prod.instruction_va=UINT32_C(0x1f3b2c);
    prod.return_eip=UINT32_C(0x1f3b31);
    prod.live_guest_esp=E+12u;prod.guest_call_esp=E+4u;
    prod.first_arg=E+12u+0x40u;prod.second_arg=E+12u+0x18u;
    put(f,E+4u,prod.first_arg);put(f,E+8u,prod.second_arg);
    f->write_fault=E;
    CHECK(bf_001f3aa0_execute_vector_call(&mem,&base,&tail,&prod,&xmm).
          status==BF_001F3AA0_VECTOR_CALL_PUSH_FAULT);
    free(f->data);free(f);
    printf("PASS 001F3AA0 x87/SSE vector CALL/RET8 %u assertions\n",checks);
    return 0;
}
