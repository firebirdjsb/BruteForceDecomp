#include "bf_heap_wrapper_guest.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BASE UINT32_C(0x100000)
#define SIZE UINT32_C(0x420000)
#define E UINT32_C(0x150000)
#define CHECK(x) do{++checks;if(!(x)){fprintf(stderr,"FAIL %d %s\n",__LINE__,#x);exit(1);}}while(0)
static unsigned checks;
typedef struct fixture {
    unsigned char*mem;
    unsigned reads,writes,calls;
    uint32_t target,esp;
    bool bad_return;
} fixture;
static bool valid(uint32_t va){
    return va>=BASE&&(uint64_t)(va-BASE)+4u<=SIZE;
}
static bool rd(void*v,uint32_t va,uint32_t*out){
    fixture*f=v;++f->reads;
    if(!valid(va))return false;
    memcpy(out,f->mem+va-BASE,4);return true;
}
static bool wr(void*v,uint32_t va,uint32_t w){
    fixture*f=v;++f->writes;
    if(!valid(va))return false;
    memcpy(f->mem+va-BASE,&w,4);return true;
}
static void put(fixture*f,uint32_t va,uint32_t w){
    CHECK(valid(va));memcpy(f->mem+va-BASE,&w,4);
}
static uint32_t get(fixture*f,uint32_t va){
    uint32_t w;CHECK(valid(va));memcpy(&w,f->mem+va-BASE,4);return w;
}
static bool inner(void*v,uint32_t target,uint32_t esp,uint32_t*eax,
                  uint32_t*ret,uint32_t*after){
    fixture*f=v;++f->calls;f->target=target;f->esp=esp;
    CHECK(get(f,esp+4u)==UINT32_C(0x8765));
    CHECK(get(f,esp+8u)==0u);
    CHECK(get(f,esp+12u)==16u||get(f,esp+12u)==0x1234u);
    *eax=target+1u;*ret=get(f,esp);*after=esp+16u;
    if(f->bad_return)*ret+=1u;
    return true;
}
static void seed(fixture*f,uint32_t argument){
    memset(f->mem,0x23,SIZE);
    f->reads=f->writes=f->calls=0;f->bad_return=false;
    put(f,0x3bc650u,0x237ea0u);
    put(f,0x3bc654u,0x237ec0u);
    put(f,0x3bc658u,0x237ee0u);
    put(f,0x4a90d4u,0x8765u);
    put(f,E,0x12345678u);put(f,E+4u,argument);
}
int main(void){
    fixture f={0};f.mem=malloc(SIZE);CHECK(f.mem);
    const bf_heap_guest_io io={&f,rd,wr,inner};
    seed(&f,0u);
    bf_heap_result r=bf_heap_execute_default_wrapper(&io,BF_HEAP_ALLOC,E);
    CHECK(r.status==BF_HEAP_GUEST_OK&&r.result_eax==0u&&!r.called_inner);
    CHECK(r.next_eip==0x12345678u&&r.final_esp==E+4u&&f.calls==0u);
    for(unsigned op=0;op<3u;op++){
        seed(&f,op==0u?16u:0x1234u);
        r=bf_heap_execute_default_wrapper(&io,(bf_heap_op)op,E);
        CHECK(r.status==BF_HEAP_GUEST_OK&&r.called_inner);
        CHECK(r.loaded_target==(op==0u?0x237ea0u:
              op==1u?0x237ec0u:0x237ee0u));
        CHECK(r.inner_target==(op==0u?0x2f6e31u:
              op==1u?0x2f77dcu:0x2f648fu));
        CHECK(f.calls==1u&&r.result_eax==r.inner_target+1u);
        CHECK(r.final_esp==E+4u&&r.next_eip==0x12345678u);
        CHECK(f.esp==E-16u&&get(&f,E-12u)==0x8765u);
    }
    seed(&f,16u);put(&f,0x3bc650u,0x238000u);
    r=bf_heap_execute_default_wrapper(&io,BF_HEAP_ALLOC,E);
    CHECK(r.status==BF_HEAP_GUEST_PATCHED_TARGET);
    CHECK(r.loaded_target==0x238000u&&f.calls==0u);
    seed(&f,16u);f.bad_return=true;
    r=bf_heap_execute_default_wrapper(&io,BF_HEAP_ALLOC,E);
    CHECK(r.status==BF_HEAP_GUEST_BAD_RETURN&&f.calls==1u);
    CHECK(bf_heap_execute_default_wrapper(NULL,BF_HEAP_ALLOC,E).status==
          BF_HEAP_GUEST_INVALID);
    printf("PASS Xbox original default heap wrapper %u assertions\n",checks);
    free(f.mem);return 0;
}
