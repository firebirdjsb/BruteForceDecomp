#include "bf_001f35b0_entry_gate.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define BASE UINT32_C(0x100000)
#define SIZE UINT32_C(0x210000)
#define E UINT32_C(0x110000)
#define S UINT32_C(0x120000)
#define DATA UINT32_C(0x130000)
#define CHILD UINT32_C(0x140000)
#define RETURN UINT32_C(0x001f3b75)
#define CHECK(x) do{++checks;if(!(x)){fprintf(stderr,"FAIL %d %s\n",__LINE__,#x);exit(1);}}while(0)
static unsigned checks;
typedef struct fixture {
    unsigned char*mem;unsigned reads,writes;
    uint32_t failed_read,failed_write;
} fixture;
static bool valid(uint32_t addr){
    return addr>=BASE&&(uint64_t)(addr-BASE)+4u<=SIZE;
}
static bool rd(void*v,uint32_t addr,uint32_t*out){
    fixture*f=v;++f->reads;if(!valid(addr)||addr==f->failed_read)return false;
    memcpy(out,f->mem+addr-BASE,4);return true;
}
static bool wr(void*v,uint32_t addr,uint32_t word){
    fixture*f=v;++f->writes;
    if(!valid(addr)||addr==f->failed_write)return false;
    memcpy(f->mem+addr-BASE,&word,4);return true;
}
static void put(fixture*f,uint32_t addr,uint32_t word){
    CHECK(valid(addr));memcpy(f->mem+addr-BASE,&word,4);
}
static uint32_t get(fixture*f,uint32_t addr){
    uint32_t word;CHECK(valid(addr));memcpy(&word,f->mem+addr-BASE,4);
    return word;
}
static void seed(fixture*f,uint32_t owned,uint32_t intermediate,uint32_t child){
    memset(f->mem,0xa5,SIZE);
    f->reads=f->writes=0;f->failed_read=f->failed_write=0;
    put(f,E,RETURN);put(f,S+8u,owned);
    put(f,S+0x14u,0x7777u);put(f,S+0x38u,DATA);
    put(f,DATA+0x110u,intermediate);
    if(intermediate!=0u)put(f,intermediate+8u,child);
}
static bf_001f35b0_result run(fixture*f){
    const bf_001f35b0_mem io={f,rd,wr};
    const bf_001f35b0_entry in={E,S,UINT32_C(0xabcdef01),
                                UINT32_C(0x12345678)};
    return bf_001f35b0_execute_entry(&io,in);
}
int main(void){
    fixture f={0};f.mem=malloc(SIZE);CHECK(f.mem);
    for(unsigned i=0;i<40u;i++){
        const uint32_t owned=i%3u==0u?CHILD:0u;
        const uint32_t nested=i%5u==0u?0u:CHILD;
        const uint32_t child=i%4u==0u?0u:DATA;
        seed(&f,owned,nested,child);
        const bf_001f35b0_result r=run(&f);
        const bool needs=owned==0u&&nested!=0u&&child!=0u;
        CHECK(r.status==(needs?BF_001F35B0_NEEDS_ALLOCATOR:
                              BF_001F35B0_RETURNED));
        CHECK(r.pc==(needs?UINT32_C(0x1f35e4):UINT32_C(0x1f3704)));
        CHECK(get(&f,E-0x68u)==UINT32_C(0x12345678));
        CHECK(get(&f,E-0x64u)==UINT32_C(0xabcdef01));
        CHECK(get(&f,S+0x14u)==(owned==0u&&!needs?0u:0x7777u));
        if(needs){
            CHECK(r.esp==E-0x68u&&r.child_ptr==DATA);
        }else{
            CHECK(r.esp==E+8u&&r.next_eip==RETURN);
            CHECK(r.ebx==UINT32_C(0xabcdef01));
            CHECK(r.edi==UINT32_C(0x12345678));
        }
    }
    seed(&f,0u,0u,0u);f.failed_read=S+0x38u;
    bf_001f35b0_result r=run(&f);
    CHECK(r.status==BF_001F35B0_READ_FAULT&&r.fault_va==S+0x38u);
    seed(&f,0u,0u,0u);f.failed_write=E-0x68u;
    r=run(&f);
    CHECK(r.status==BF_001F35B0_WRITE_FAULT);
    printf("PASS 001F35B0 original entry/early exits %u assertions\n",checks);
    free(f.mem);return 0;
}
