#include "bf_001f3aa0_concrete_router.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define BASE UINT32_C(0x100000)
#define SIZE UINT32_C(0x430000)
#define L UINT32_C(0x180000)
#define EBP (L+UINT32_C(0x20b0))
#define OWNER UINT32_C(0x200000)
#define INTER UINT32_C(0x210000)
#define BUFFER UINT32_C(0x220000)
#define ENTITY UINT32_C(0x230000)
#define VTABLE UINT32_C(0x240000)
#define RECEIVER UINT32_C(0x250000)
#define CHECK(x) do{++checks;if(!(x)){fprintf(stderr,"FAIL %d %s\n",__LINE__,#x);exit(1);}}while(0)
static unsigned checks;
typedef struct fixture {
    unsigned char*data;
    unsigned deep_calls,heap_calls,depth;
    long double st[4];
} fixture;
static bool valid(uint32_t a){
    return a>=BASE&&(uint64_t)(a-BASE)+4u<=SIZE;
}
static uint32_t get(fixture*f,uint32_t a){
    uint32_t w;CHECK(valid(a));memcpy(&w,f->data+a-BASE,4);return w;
}
static void put(fixture*f,uint32_t a,uint32_t w){
    CHECK(valid(a));memcpy(f->data+a-BASE,&w,4);
}
static bool rd(void*v,uint32_t a,uint32_t*w){
    fixture*f=v;if(!valid(a))return false;*w=get(f,a);return true;
}
static bool rb(void*v,uint32_t a,uint8_t*w){
    fixture*f=v;
    if(a<BASE||(uint64_t)(a-BASE)>=SIZE)return false;
    *w=f->data[a-BASE];return true;
}
static bool wr(void*v,uint32_t a,uint32_t w){
    fixture*f=v;if(!valid(a))return false;put(f,a,w);return true;
}
static bool deep(void*v,uint32_t target,uint32_t esp,uint32_t esi,
                 uint32_t eax,uint32_t ecx,uint32_t*eip,uint32_t*after)
{
    fixture*f=v;++f->deep_calls;
    CHECK(target==UINT32_C(0x2b89f0)||target==UINT32_C(0x2abcde));
    CHECK(esi==L+0x40u&&eax==ENTITY);
    CHECK(ecx==(target==UINT32_C(0x2b89f0)?0u:RECEIVER));
    CHECK(get(f,esp+4u)==esi&&get(f,esp+8u)==eax);
    *eip=get(f,esp);*after=esp+12u;return true;
}
static bool heap(void*v,uint32_t target,uint32_t esp,
                 uint32_t*eax,uint32_t*eip,uint32_t*after)
{
    fixture*f=v;++f->heap_calls;
    CHECK(target==UINT32_C(0x2f77dc));
    CHECK(get(f,esp+8u)==0u&&get(f,esp+12u)==BUFFER);
    *eax=0u;*eip=get(f,esp);*after=esp+16u;return true;
}
static bool fld(void*v,uint32_t w){
    fixture*f=v;if(f->depth>=4u)return false;
    float x;memcpy(&x,&w,4);f->st[f->depth++]=x;return true;
}
static bool fadd(void*v,uint32_t w){
    fixture*f=v;if(!f->depth)return false;
    float x;memcpy(&x,&w,4);f->st[f->depth-1]+=x;return true;
}
static bool fsub(void*v,uint32_t w){
    fixture*f=v;if(!f->depth)return false;
    float x;memcpy(&x,&w,4);f->st[f->depth-1]-=x;return true;
}
static bool fstp(void*v,uint32_t*w){
    fixture*f=v;if(!f->depth)return false;
    float x=(float)f->st[--f->depth];memcpy(w,&x,4);return true;
}
static void seed(fixture*f,bool owned,bool virtual_type){
    memset(f->data,0xa5,SIZE);
    f->deep_calls=f->heap_calls=f->depth=0u;
    put(f,L,UINT32_C(0x55aa55aa));
    put(f,L+4u,UINT32_C(0x12344321));
    put(f,L+0x14u,UINT32_C(0xff7fffff));
    put(f,L+0x90u,0u);
    put(f,L+0x94u,BUFFER);
    put(f,L+0x9cu,0u);
    put(f,BUFFER+4u,0u);
    put(f,EBP,UINT32_C(0x22223333));
    put(f,EBP+4u,UINT32_C(0x44445555));
    put(f,OWNER+8u,owned?ENTITY:0u);
    put(f,OWNER+0x14u,7u);
    put(f,OWNER+0x38u,INTER);
    put(f,INTER+0x110u,0u);
    put(f,ENTITY+4u,virtual_type?2u:3u);
    put(f,ENTITY+0x18u,0u);
    put(f,ENTITY+0x70u,0u);
    put(f,ENTITY+0x7cu,RECEIVER);
    put(f,RECEIVER,VTABLE);
    put(f,VTABLE+0x18u,UINT32_C(0x2abcde));
    put(f,L+0x48u,0u);
    put(f,UINT32_C(0x3bc654),UINT32_C(0x237ec0));
    put(f,UINT32_C(0x4a90d4),UINT32_C(0x1234));
}
static void exercise(fixture*f,bool owned,bool virtual_type){
    seed(f,owned,virtual_type);
    bf_001f3aa0_concrete_router router={
        f,rd,rb,wr,heap,deep,
        UINT32_C(0xaabbccdd),UINT32_C(0xdeadbeef)
    };
    const bf_001f3aa0_tail_io io=bf_001f3aa0_concrete_tail_io(&router);
    const bf_001f3aa0_tail_x87 fp={f,fld,fadd,fsub,fstp};
    const bf_001f3aa0_tail_entry in={
        L,EBP,OWNER,UINT32_C(0xaabbccdd),L+0x90u,1u,1u
    };
    const bf_001f3aa0_tail_result r=bf_001f3aa0_execute_tail(&io,&fp,in);
    CHECK(r.status==BF_001F3AA0_TAIL_OK);
    CHECK(r.pc==UINT32_C(0x1f3bca));
    CHECK(r.return_eip==UINT32_C(0x44445555));
    CHECK(r.final_esp==EBP+16u);
    CHECK(r.cleanup.arrays_freed==1u);
    CHECK(f->heap_calls==1u&&get(f,L+0x94u)==0u);
    CHECK(r.branch_1f35b0_calls==(owned?0u:1u));
    CHECK(r.branch_2b8c60_calls==(owned?1u:0u));
    CHECK(f->deep_calls==(owned?1u:0u));
    CHECK(get(f,OWNER+0x14u)==(owned?7u:0u));
    CHECK(f->depth==1u&&r.loaded_final_float_bits==UINT32_C(0xff7fffff));
}
int main(void){
    fixture f={0};f.data=malloc(SIZE);CHECK(f.data);
    exercise(&f,false,false);
    exercise(&f,true,false);
    exercise(&f,true,true);
    printf("PASS 001F3AA0 concrete branch and heap router %u assertions\n",checks);
    free(f.data);return 0;
}
