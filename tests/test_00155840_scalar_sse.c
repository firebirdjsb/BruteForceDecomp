/* Bounded host SSE fixture: does NOT establish Xbox RSQRT approximation parity. */
#include "bf_00155840_scalar_sse.h"
#include <emmintrin.h>
#include <xmmintrin.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define EBP UINT32_C(0x20000)
#define MEMBASE UINT32_C(0x1ff00)
#define MEMSIZE 512u
#define CHECK(x) do{++checks;if(!(x)){fprintf(stderr,"FAIL line %d: %s\n",__LINE__,#x);exit(1);}}while(0)
typedef struct mem {
    uint8_t data[MEMSIZE];
    uint32_t raddr,waddr;
    unsigned reads,writes,fail_read,fail_write;
} mem;
static unsigned checks;
static bool mapped(uint32_t a){return a>=MEMBASE&&(uint64_t)(a-MEMBASE)+4<=MEMSIZE;}
static bool rd(void*v,uint32_t a,uint32_t*w){
    mem*m=v;m->raddr=a;++m->reads;
    if(m->reads==m->fail_read||!mapped(a))return false;
    memcpy(w,m->data+(a-MEMBASE),4);return true;
}
static bool wr(void*v,uint32_t a,uint32_t w){
    mem*m=v;m->waddr=a;++m->writes;
    if(m->writes==m->fail_write||!mapped(a))return false;
    memcpy(m->data+(a-MEMBASE),&w,4);return true;
}
static void put(mem*m,uint32_t a,uint32_t w){
    CHECK(mapped(a));memcpy(m->data+(a-MEMBASE),&w,4);
}
static uint32_t get(mem*m,uint32_t a){
    uint32_t v;CHECK(mapped(a));memcpy(&v,m->data+(a-MEMBASE),4);return v;
}
typedef struct fp {
    unsigned rsqrt_calls,sqrt_calls;
    bool fail_backend;
} fp;
static bool rsqrt(void*v,uint32_t input,uint32_t*out){
    fp*f=v;++f->rsqrt_calls;if(f->fail_backend)return false;
    __m128 s=_mm_castsi128_ps(_mm_cvtsi32_si128((int)input));
    s=_mm_rsqrt_ss(s);
    *out=(uint32_t)_mm_cvtsi128_si32(_mm_castps_si128(s));
    return true;
}
static bool square_root(void*v,uint32_t input,uint32_t*out){
    fp*f=v;++f->sqrt_calls;if(f->fail_backend)return false;
    __m128 s=_mm_castsi128_ps(_mm_cvtsi32_si128((int)input));
    s=_mm_sqrt_ss(s);
    *out=(uint32_t)_mm_cvtsi128_si32(_mm_castps_si128(s));
    return true;
}
static void verify(void){
    const uint32_t pcs[]={
        UINT32_C(0x001559ea),UINT32_C(0x00155a36),
        UINT32_C(0x00155aea),UINT32_C(0x00155b4a),
        UINT32_C(0x00155bab),UINT32_C(0x00155c28),
        UINT32_C(0x00155ca9)
    };
    mem*m=calloc(1,sizeof *m);CHECK(m);
    fp state={0};
    const bf_621c0_guest_words io={m,rd,wr};
    const bf_00155840_scalar_backend b={&state,rsqrt,square_root};
    for(unsigned seed=0;seed<2048u;seed++)for(unsigned i=0;i<7u;i++){
        memset(m,0,sizeof *m);memset(&state,0,sizeof state);
        const bool sq=(pcs[i]==UINT32_C(0x00155bab));
        const uint32_t input=EBP-(sq?0x18u:0x1cu);
        const uint32_t output=EBP-(sq?0x10u:(pcs[i]==UINT32_C(0x00155ca9)?0x10u:0x18u));
        const uint32_t raw=(seed%19u==0)?UINT32_C(0x00000000):
            ((seed%17u==0)?UINT32_C(0x7f800000):
             (UINT32_C(0x3e800000)^(seed*UINT32_C(0x0123d))));
        put(m,input,raw);
        bf_00155840_xmm0_words xmm={{UINT32_C(0xabcdef12),
            UINT32_C(0x11112222),UINT32_C(0x33334444),UINT32_C(0x55556666)}};
        uint32_t expected=0;
        CHECK((sq ? square_root(&state,raw,&expected) : rsqrt(&state,raw,&expected)));
        memset(&state,0,sizeof state);
        const bf_00155840_scalar_result r=bf_00155840_scalar_at(pcs[i],&io,&b,&xmm,EBP);
        CHECK(r.status==BF_00155840_SCALAR_OK && r.fault_guest_va==0u);
        CHECK(r.instruction_va==pcs[i]);
        CHECK(m->reads==1u&&m->writes==1u&&m->raddr==input&&m->waddr==output);
        CHECK(get(m,output)==expected&&xmm.lane[0]==expected);
        CHECK(xmm.lane[1]==UINT32_C(0x11112222)&&xmm.lane[2]==UINT32_C(0x33334444));
        CHECK(xmm.lane[3]==UINT32_C(0x55556666));
        CHECK(state.sqrt_calls==(sq?1u:0u)&&state.rsqrt_calls==(sq?0u:1u));
    }
    memset(m,0,sizeof *m);memset(&state,0,sizeof state);
    bf_00155840_xmm0_words xmm={{UINT32_C(0xdeadbeef),1u,2u,3u}};
    put(m,EBP-0x1cu,UINT32_C(0x3f800000));
    m->fail_read=1u;
    bf_00155840_scalar_result r=bf_00155840_scalar_at(0x1559eau,&io,&b,&xmm,EBP);
    CHECK(r.status==BF_00155840_SCALAR_READ_FAULT&&r.fault_guest_va==EBP-0x1cu);
    CHECK(xmm.lane[0]==UINT32_C(0xdeadbeef)&&m->writes==0);
    m->fail_read=0u;m->reads=0u;state.fail_backend=true;
    r=bf_00155840_scalar_at(0x1559eau,&io,&b,&xmm,EBP);
    CHECK(r.status==BF_00155840_SCALAR_BACKEND_FAILED&&m->writes==0);
    CHECK(xmm.lane[0]==UINT32_C(0xdeadbeef));
    state.fail_backend=false;m->reads=0u;m->fail_write=1u;
    r=bf_00155840_scalar_at(0x1559eau,&io,&b,&xmm,EBP);
    CHECK(r.status==BF_00155840_SCALAR_WRITE_FAULT&&r.fault_guest_va==EBP-0x18u);
    CHECK(xmm.lane[0]!=UINT32_C(0xdeadbeef)); /* SSE was executed before failed MOVSS */
    CHECK(bf_00155840_scalar_at(0u,&io,&b,&xmm,EBP).status==BF_00155840_SCALAR_INVALID);
    CHECK(bf_00155840_scalar_at(0x1559eau,NULL,&b,&xmm,EBP).status==BF_00155840_SCALAR_INVALID);
    free(m);
}
int main(void){verify();printf("PASS original scalar SSE guest windows: %u assertions\n",checks);return 0;}
