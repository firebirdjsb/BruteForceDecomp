/* Original Xbox 0x002B7970 input/vector construction BEFORE SSE.
 * Raw x87 copy reference deliberately does not model Xbox NaN
 * canonicalization, control word or FPU exception delivery.
 */
#include "bf_002b7970_guest_base.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BASE UINT32_C(0x100000)
#define SZ UINT32_C(0x200000)
#define E (BASE+UINT32_C(0x10000))
#define D (BASE+UINT32_C(0x30000))
#define S (BASE+UINT32_C(0x40000))
#define CHECK(v) do{++checks;if(!(v)){fprintf(stderr,"FAIL %u %s\n",__LINE__,#v);exit(1);}}while(0)
static unsigned checks;
typedef struct fixture {
    unsigned char *b;
    unsigned reads,writes,loads,stores,exchanges;
    unsigned failread;
    uint32_t failwrite,st[8];
    unsigned depth;
} fixture;
static bool mapped(uint32_t a){
    return a>=BASE && (uint64_t)(a-BASE)+4u<=SZ;
}
static bool rd(void*v,uint32_t a,uint32_t*w){
    fixture*f=v;f->reads++;
    if(!mapped(a)||f->reads==f->failread)return false;
    memcpy(w,f->b+a-BASE,4);return true;
}
static bool wr(void*v,uint32_t a,uint32_t w){
    fixture*f=v;f->writes++;
    if(!mapped(a)||a==f->failwrite)return false;
    memcpy(f->b+a-BASE,&w,4);return true;
}
static bool fld(void*v,uint32_t w){
    fixture*f=v;f->loads++;
    if(f->depth>=8)return false;
    f->st[f->depth++]=w;return true;
}
static bool xch(void*v){
    fixture*f=v;f->exchanges++;
    if(f->depth<2)return false;
    uint32_t temp=f->st[f->depth-1];
    f->st[f->depth-1]=f->st[f->depth-2];
    f->st[f->depth-2]=temp;
    return true;
}
static bool fstp(void*v,uint32_t*w){
    fixture*f=v;f->stores++;
    if(f->depth==0)return false;
    *w=f->st[--f->depth];return true;
}
static void put(fixture*f,uint32_t a,uint32_t w){
    CHECK(mapped(a));memcpy(f->b+a-BASE,&w,4);
}
static uint32_t get(fixture*f,uint32_t a){
    uint32_t w;CHECK(mapped(a));memcpy(&w,f->b+a-BASE,4);return w;
}
static void seed(fixture*f){
    memset(f->b,0xa5,SZ);
    f->reads=f->writes=f->loads=f->stores=f->exchanges=f->depth=f->failread=0;
    f->failwrite=0;
    put(f,E+4u,D);put(f,E+8u,S);
    for(unsigned j=0;j<0x14u;j++)put(f,S+j*4u,UINT32_C(0x11111111)+j);
}
static bf_002b7970_result run(fixture*f){
    const bf_002b7970_mem m={f,rd,wr};
    const bf_002b7970_x87 p={f,fld,xch,fstp};
    return bf_002b7970_execute_base(&m,&p,E);
}
int main(void){
    fixture*f=calloc(1,sizeof(*f));CHECK(f);
    f->b=malloc(SZ);CHECK(f->b);
    for(unsigned i=0;i<512u;i++){
        seed(f);
        const bf_002b7970_result r=run(f);
        CHECK(r.status==BF_002B7970_OK);
        CHECK(r.pc==UINT32_C(0x2b7a2d));
        CHECK(r.guest_esp==E-0x10u);
        CHECK(r.x87_loads==6u&&r.x87_stores==6u);
        CHECK(f->depth==0&&f->loads==6u&&f->stores==6u);
        CHECK(f->exchanges==3u);
        CHECK(get(f,D)==UINT32_C(0x0039efb8));
        CHECK(get(f,D+4u)==get(f,S+0x20u));
        CHECK(get(f,D+8u)==get(f,S+0x24u));
        for(unsigned j=0;j<3u;j++){
            CHECK(get(f,D+0x10u+j*4u)==get(f,S+j*4u));
            CHECK(get(f,D+0x30u+j*4u)==get(f,S+j*4u));
            CHECK(get(f,D+0x40u+j*4u)==get(f,S+0x10u+j*4u));
        }
        /* 0x2B7AE3 zeroes +0x0C AFTER SSE, not in this prefix. */
        CHECK(get(f,D+0x0cu)==UINT32_C(0xa5a5a5a5));
        for(unsigned j=1;j<5u;j++)
            CHECK(get(f,D+0x0cu+j*0x10u)==0u);
    }
    seed(f);f->failread=1u;
    bf_002b7970_result r=run(f);
    CHECK(r.status==BF_002B7970_READ_FAULT&&r.fault_va==E+4u);
    seed(f);f->failwrite=D+0x44u;
    r=run(f);
    CHECK(r.status==BF_002B7970_WRITE_FAULT&&r.fault_va==D+0x44u);
    CHECK(f->depth==1u);
    free(f->b);free(f);
    printf("PASS original 002B7970 pre-SSE guest vector: %u assertions\n",checks);
    return 0;
}
