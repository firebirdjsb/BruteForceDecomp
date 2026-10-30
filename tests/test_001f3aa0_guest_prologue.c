#include "bf_001f3aa0_guest_prologue.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define BASE UINT32_C(0x100000)
#define SIZE UINT32_C(0x200000)
#define STACK (BASE+UINT32_C(0x90000))
#define CHECK(x) do{++checks;if(!(x)){fprintf(stderr,"FAIL %d %s\n",__LINE__,#x);exit(1);}}while(0)
static unsigned checks;
typedef struct fixture {
    unsigned char *bytes;
    unsigned reads,writes;
    uint32_t failed_write;
} fixture;
static bool valid(uint32_t addr){
    return addr>=BASE&&(uint64_t)(addr-BASE)+4u<=SIZE;
}
static bool rd(void*v,uint32_t addr,uint32_t*out){
    fixture*f=v;++f->reads;
    if(!valid(addr))return false;
    memcpy(out,f->bytes+addr-BASE,4);return true;
}
static bool wr(void*v,uint32_t addr,uint32_t value){
    fixture*f=v;++f->writes;
    if(!valid(addr)||addr==f->failed_write)return false;
    memcpy(f->bytes+addr-BASE,&value,4);return true;
}
static uint32_t get(fixture*f,uint32_t addr){
    uint32_t out;CHECK(valid(addr));
    memcpy(&out,f->bytes+addr-BASE,4);return out;
}
static void seed(fixture*f){
    memset(f->bytes,0x8b,SIZE);
    f->reads=f->writes=0;f->failed_write=0;
}
int main(void){
    fixture f={0};f.bytes=malloc(SIZE);CHECK(f.bytes);
    const bf_002ebea0_guest_mem mem={&f,rd,wr};
    for(unsigned i=0;i<64u;i++){
        seed(&f);
        const uint32_t entry=STACK+i*4u;
        const bf_001f3aa0_prologue_entry in={
            entry,UINT32_C(0xabcddcba),UINT32_C(0x11223344),
            UINT32_C(0x55667788),UINT32_C(0x91001111)
        };
        const bf_001f3aa0_prologue_result r=
            bf_001f3aa0_execute_prologue(&mem,in);
        const uint32_t ebp=entry-4u,aligned=ebp&~UINT32_C(15);
        CHECK(r.status==BF_001F3AA0_PROLOGUE_OK&&r.pc==UINT32_C(0x1f3ab5));
        CHECK(r.guest_ebp==ebp&&get(&f,ebp)==in.caller_ebp);
        CHECK(r.live_esp==aligned-UINT32_C(0x20b0));
        CHECK(r.incoming_ecx==in.caller_ecx);
        CHECK(r.stack_probe.regs.next_eip==UINT32_C(0x1f3ab0));
        CHECK(r.stack_probe.regs.esp==aligned-UINT32_C(0x20a8));
        CHECK(get(&f,aligned-UINT32_C(0x20ac))==in.caller_esi);
        CHECK(get(&f,aligned-UINT32_C(0x20b0))==in.caller_edi);
    }
    seed(&f);f.failed_write=STACK-4u;
    const bf_001f3aa0_prologue_entry bad={STACK,0u,0u,0u,0u};
    const bf_001f3aa0_prologue_result fail=
        bf_001f3aa0_execute_prologue(&mem,bad);
    CHECK(fail.status==BF_001F3AA0_PROLOGUE_WRITE_FAULT);
    CHECK(fail.fault_va==STACK-4u);
    CHECK(bf_001f3aa0_execute_prologue(NULL,bad).status==
          BF_001F3AA0_PROLOGUE_INVALID);
    printf("PASS 001F3AA0 authentic x86 guest prologue %u assertions\n",checks);
    free(f.bytes);return 0;
}
