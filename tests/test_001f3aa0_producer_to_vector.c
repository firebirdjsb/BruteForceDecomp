/* Genuine 001F3AA0 producer -> 002B7970 composed call, same guest frame.
 * The C11 FPU is only a finite-input test reference, not Xbox x87
 * status/precision or exception/SEH equivalence.
 */
#define main bf_previous_tail_test_main
#include "test_002b7970_guest_tail.c"
#undef main
#include "bf_001f3aa0_vector_call.h"

#define OWNER (BASE+UINT32_C(0x24000))
#define OBJECT_DATA (BASE+UINT32_C(0x25000))
#define LIVE (E+UINT32_C(16))
#define EBP (LIVE+UINT32_C(0x20b0))

static bool actual_fadd(void*v,uint32_t w){
    fixture*f=v;if(f->depth==0u)return false;
    f->st[f->depth-1]+=(long double)val(w);return true;
}
static bool actual_fsub(void*v,uint32_t w){
    fixture*f=v;if(f->depth==0u)return false;
    f->st[f->depth-1]-=(long double)val(w);return true;
}
static bool actual_fxch(void*v){
    fixture*f=v;if(f->depth<2u)return false;
    long double temp=f->st[f->depth-1u];
    f->st[f->depth-1u]=f->st[f->depth-2u];
    f->st[f->depth-2u]=temp;return true;
}
static void original_producer_and_callee(fixture*f,unsigned i){
    seed(f,i);
    const float a=1.f+(float)(i%32u)*0.25f;
    const float b=(float)(i%8u)*0.125f;
    put(f,EBP+8u,bits(1.f));
    put(f,EBP+12u,bits(2.f));
    put(f,OWNER+0x38u,OBJECT_DATA);
    put(f,OBJECT_DATA+4u,bits(a));
    put(f,OBJECT_DATA+8u,bits(b));
    put(f,UINT32_C(0x003a4f78),bits(1.f));
    const bf_002ebea0_guest_mem producer_mem={f,rd32,wr32};
    const bf_001f3aa0_x87_backend producer_fpu={
        f,fld,actual_fadd,actual_fsub,fstp
    };
    const bf_001f3aa0_producer_result prod=
        bf_001f3aa0_make_2b7970_args(
            &producer_mem,&producer_fpu,EBP,LIVE,OWNER);
    CHECK(prod.status==BF_001F3AA0_PRODUCER_OK);
    CHECK(prod.first_arg==LIVE+UINT32_C(0x40));
    CHECK(prod.second_arg==LIVE+UINT32_C(0x18));
    CHECK(prod.guest_call_esp==LIVE-8u);
    CHECK(f->depth==0u);
    const float scalar=a-b+1.f;
    CHECK(get(f,LIVE+0x38u)==bits(scalar));
    CHECK(get(f,LIVE+0x1cu)==bits(a+1.f));
    const bf_002b7970_tail_io mem={{f,rd32,wr32},rd64,wr64};
    const bf_002b7970_x87 base={f,fld,actual_fxch,fstp};
    const bf_002b7970_tail_ops tail={f,fld,fmul,fstp,mulps,addps};
    bf_002b7970_xmm xmm=start_xmm();
    const bf_001f3aa0_vector_result r=
        bf_001f3aa0_execute_vector_call(&mem,&base,&tail,&prod,&xmm);
    const uint32_t out=LIVE+UINT32_C(0x40);
    CHECK(r.status==BF_001F3AA0_VECTOR_OK);
    CHECK(r.pc==UINT32_C(0x001f3b31));
    CHECK(r.live_esp==LIVE&&r.output_guest==out);
    CHECK(r.callee.base.x87_loads==6u);
    CHECK(r.callee.tail.sse_mulps==2u);
    CHECK(r.callee.tail.sse_addps==2u);
    CHECK(r.callee.return_eip==UINT32_C(0x001f3b31));
    CHECK(get(f,LIVE-12u)==UINT32_C(0x001f3b31));
    CHECK(get(f,out)==UINT32_C(0x0039efb8));
    CHECK(get(f,out+4u)==bits(scalar));
    CHECK(get(f,out+0x34u)==bits((a+1.f)-(scalar*0.5f)));
    CHECK(get(f,out+0x24u)==bits((a+1.f)-scalar));
    CHECK(get(f,out+0x0cu)==0u);
    CHECK(get(f,out+0x2cu)==0u);
    CHECK(f->depth==0u);
}
int main(void){
    fixture*f=calloc(1,sizeof *f);CHECK(f);
    f->data=malloc(SIZE);CHECK(f->data);
    for(unsigned i=0;i<256u;i++)original_producer_and_callee(f,i);
    printf("PASS real original 001F3AA0 producer through 002B7970 RET8 %u assertions\n",checks);
    free(f->data);free(f);return 0;
}
