#include "bf_x86_0011c810_matrix_frame.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BASE UINT32_C(0x10000)
#define SP UINT32_C(0x13000)
#define COUNT 4096u
#define CHECK(c) do{ ++checks;if(!(c)){fprintf(stderr,"FAIL %d %s\n",__LINE__,#c);exit(1);} }while(0)
static unsigned checks,scenarios;
typedef struct bus {
    unsigned char memory[0x10000];
    uint32_t fail_at,last_addr;
    unsigned events,reads,writes;
} bus;
static bool is_mapped(uint32_t va,size_t len)
{
    return va>=BASE && (uint64_t)(va-BASE)+len<=sizeof(((bus *)0)->memory);
}
static bool read_bytes(void *p,uint32_t addr,void *to,size_t n)
{
    bus *b=p;++b->events;++b->reads;b->last_addr=addr;
    if(b->events==b->fail_at||!is_mapped(addr,n))return false;
    memcpy(to,b->memory+(addr-BASE),n);return true;
}
static bool write_bytes(void *p,uint32_t addr,const void *from,size_t n)
{
    bus *b=p;++b->events;++b->writes;b->last_addr=addr;
    if(b->events==b->fail_at||!is_mapped(addr,n))return false;
    memcpy(b->memory+(addr-BASE),from,n);return true;
}
static bf_0011c810_guest_bytes ops(bus *b)
{
    const bf_0011c810_guest_bytes io={b,read_bytes,write_bytes};return io;
}
static void seeds(bus *b,unsigned seed)
{
    memset(b,0,sizeof *b);
    unsigned v=seed;
    for(size_t i=0;i<sizeof b->memory;++i) {
        v=v*1664525u+1013904223u;
        b->memory[i]=(unsigned char)(v>>24);
    }
}
int main(void)
{
    const bf_0011c810_frame f=bf_0011c810_frame_at(SP);
    CHECK(f.producer_xyz9==SP+0x68 && f.consumer_xyz9==SP+0x38);
    CHECK(f.helper_vec3==SP+0x28 && f.helper_out3==SP+0x0c);
    CHECK(f.producer_xyz9>=f.consumer_xyz9+36u);
    bus *b=malloc(sizeof *b); CHECK(b);
    for(unsigned seed=1;seed<=COUNT;++seed) {
        seeds(b,seed);
        unsigned char source[36],unused[12];
        memcpy(source,b->memory+f.producer_xyz9-BASE,36);
        memcpy(unused,b->memory+f.consumer_xyz9+36u-BASE,12);
        bf_0011c810_guest_bytes io=ops(b);
        bf_0011c810_copy_result r=bf_0011c810_copy_produced_matrix(f,&io);
        CHECK(r.status==BF_0011C810_COPIED && r.fault_guest_va==0);
        CHECK(b->events==6 && b->reads==3 && b->writes==3);
        CHECK(memcmp(b->memory+f.consumer_xyz9-BASE,source,36)==0);
        CHECK(memcmp(b->memory+f.consumer_xyz9+36u-BASE,unused,12)==0);
        ++scenarios;
    }
    /* Probe the exact interleaved read/write callback sequence. */
    for(unsigned fail=1;fail<=6;++fail) {
        seeds(b,fail);b->fail_at=fail;
        bf_0011c810_guest_bytes io=ops(b);
        bf_0011c810_copy_result r=bf_0011c810_copy_produced_matrix(f,&io);
        CHECK(r.status==(fail&1u ? BF_0011C810_READ_FAULT:BF_0011C810_WRITE_FAULT));
        CHECK(b->events==fail);
        CHECK(r.fault_guest_va==(fail&1u ? f.producer_xyz9: f.consumer_xyz9) +16u*((fail-1u)/2u));
        ++scenarios;
    }
    CHECK(bf_0011c810_copy_produced_matrix(f,NULL).status==BF_0011C810_INVALID_IO);
    free(b);
    printf("PASS %u fixed-frame matrix transfer scenarios; %u assertions (no original SSE/SEH parity)\n",scenarios,checks);
    return 0;
}
