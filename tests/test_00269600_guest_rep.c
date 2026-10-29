#include "bf_00269600_guest_rep.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BASE UINT32_C(0x00100000)
#define SIZE 131072u
#define EBX (BASE+UINT32_C(0x1000))
#define ESP (BASE+UINT32_C(0x8000))
#define EBP (BASE+UINT32_C(0x9000))
#define SOURCE (BASE+UINT32_C(0x11000))
#define DEST (BASE+UINT32_C(0x15000))
#define CHECK(e) do{++checks;if(!(e)){fprintf(stderr,"FAIL %u: %s\n",(unsigned)__LINE__,#e);exit(1);}}while(0)
typedef struct memory {
    uint8_t *data;unsigned reads,writes,events;
    unsigned fail_read,fail_write;
    uint32_t addresses[2048];
    uint8_t ops[2048];
} memory;
static unsigned checks;
static bool mapped(uint32_t a){return a>=BASE && (uint64_t)(a-BASE)+4u<=SIZE;}
static bool rd(void *v,uint32_t a,uint32_t *out){
    memory*m=v;CHECK(m->events<2048u);
    m->ops[m->events]=1;m->addresses[m->events++]=a;++m->reads;
    if(!mapped(a)||m->reads==m->fail_read)return false;
    memcpy(out,m->data+(a-BASE),4);return true;
}
static bool wr(void*v,uint32_t a,uint32_t w){
    memory*m=v;CHECK(m->events<2048u);
    m->ops[m->events]=2;m->addresses[m->events++]=a;++m->writes;
    if(!mapped(a)||m->writes==m->fail_write)return false;
    memcpy(m->data+(a-BASE),&w,4);return true;
}
static void put(memory*m,uint32_t a,uint32_t w){CHECK(mapped(a));memcpy(m->data+(a-BASE),&w,4);}
static uint32_t get(memory*m,uint32_t a){uint32_t w;CHECK(mapped(a));memcpy(&w,m->data+(a-BASE),4);return w;}
static void seed(memory*m,uint32_t count){
    memset(m->data,0xa5,SIZE);
    m->reads=m->writes=m->events=m->fail_read=m->fail_write=0;
    for(uint32_t i=0;i<UINT32_C(0x146);++i)
        put(m,EBX+4u*i,i*UINT32_C(0x10204081)^UINT32_C(0x12345678));
    put(m,EBX+UINT32_C(0x514),count);
}
static void check_prepare(memory*m,uint32_t count){
    seed(m,count);
    const bf_002ebea0_guest_mem io={m,rd,wr};
    bf_00269600_copy_result r=bf_00269600_guest_prepare(&io,EBX,ESP,false);
    CHECK(r.status==BF_00269600_REP_OK);
    CHECK(r.source_count==count && r.receiver_ebx==EBX);
    CHECK(r.repeat.words_completed==UINT32_C(0x146));
    CHECK(r.repeat.ecx==0 && r.repeat.esi==EBX+UINT32_C(0x518));
    CHECK(r.repeat.edi==ESP+UINT32_C(0x578)+UINT32_C(0x518));
    CHECK(m->reads==UINT32_C(0x147));
    CHECK(m->writes==count+UINT32_C(0x147));
    /* REP STOSD starts at ESP+0x10; element 18 overlaps the
     * earlier [ESP+0x58] count save when count exceeds 18.
     * EDX still retains the original count. */
    CHECK(get(m,ESP+UINT32_C(0x58))==(count>18u ? 0u : count));
    CHECK(m->ops[0]==1 && m->addresses[0]==EBX+UINT32_C(0x514));
    CHECK(m->ops[1]==2 && m->addresses[1]==ESP+UINT32_C(0x58));
    for(unsigned i=0;i<count;i++) {
        CHECK(m->ops[2u+i]==2 && m->addresses[2u+i]==ESP+0x10u+4u*i);
        CHECK(get(m,ESP+0x10u+4u*i)==0u);
    }
    const unsigned copy_start=2u+count;
    for(unsigned i=0;i<UINT32_C(0x146);i++){
        CHECK(m->ops[copy_start+2u*i]==1);
        CHECK(m->addresses[copy_start+2u*i]==EBX+4u*i);
        CHECK(m->ops[copy_start+2u*i+1u]==2);
        CHECK(m->addresses[copy_start+2u*i+1u]==ESP+UINT32_C(0x578)+4u*i);
        CHECK(get(m,ESP+UINT32_C(0x578)+4u*i)==get(m,EBX+4u*i));
    }
}
static void output_check(memory*m){
    seed(m,4u);
    for(unsigned i=0;i<UINT32_C(0x146);i++)
        put(m,SOURCE+4u*i,UINT32_C(0xcafe0123)+i);
    put(m,EBP+8u,DEST);
    const bf_002ebea0_guest_mem io={m,rd,wr};
    const bf_00269600_copy_result r=bf_00269600_guest_copy_output(&io,EBP,SOURCE,false);
    CHECK(r.status==BF_00269600_REP_OK);
    CHECK(m->reads==UINT32_C(0x147) && m->writes==UINT32_C(0x146));
    CHECK(r.repeat.esi==SOURCE+UINT32_C(0x518));
    CHECK(r.repeat.edi==DEST+UINT32_C(0x518) && r.repeat.ecx==0u);
    CHECK(m->addresses[0]==EBP+8u && m->ops[0]==1u);
    for(unsigned i=0;i<UINT32_C(0x146);i++) {
        CHECK(m->ops[1u+2u*i]==1u&&m->addresses[1u+2u*i]==SOURCE+4u*i);
        CHECK(m->ops[2u+2u*i]==2u&&m->addresses[2u+2u*i]==DEST+4u*i);
        CHECK(get(m,DEST+4u*i)==UINT32_C(0xcafe0123)+i);
    }
}
static void alias_and_direction(memory*m){
    seed(m,3u);
    const bf_002ebea0_guest_mem io={m,rd,wr};
    const uint32_t src=SOURCE;
    for(unsigned i=0;i<5u;i++)put(m,src+4u*i,0x200u+i);
    bf_00269600_rep_result r=bf_00269600_guest_repeat(&io,true,false,0,src,src+4u,4u);
    CHECK(r.status==BF_00269600_REP_OK && r.words_completed==4u);
    for(unsigned i=0;i<5u;i++)CHECK(get(m,src+4u*i)==0x200u);
    seed(m,3u);
    for(unsigned i=0;i<5u;i++)put(m,src+4u*i,0x300u+i);
    r=bf_00269600_guest_repeat(&io,true,true,0,src+16u,src+12u,4u);
    CHECK(r.status==BF_00269600_REP_OK);
    CHECK(get(m,src+12u)==0x304u);
    CHECK(get(m,src)==0x304u);
    CHECK(r.esi==src&&r.edi==src-4u&&r.ecx==0u);
    seed(m,0u);
    r=bf_00269600_guest_repeat(&io,false,true,0x87654321u,src,src+24u,3u);
    CHECK(r.status==BF_00269600_REP_OK);
    for(unsigned i=0;i<3u;i++)CHECK(get(m,src+24u-4u*i)==UINT32_C(0x87654321));
    CHECK(r.esi==src&&r.edi==src+12u);
}
static void failures(memory*m){
    const bf_002ebea0_guest_mem io={m,rd,wr};
    seed(m,3u);m->fail_read=1u;
    bf_00269600_copy_result o=bf_00269600_guest_prepare(&io,EBX,ESP,false);
    CHECK(o.status==BF_00269600_REP_READ_FAULT&&o.fault_address==EBX+0x514u);
    CHECK(m->writes==0u);
    seed(m,3u);m->fail_write=1u;
    o=bf_00269600_guest_prepare(&io,EBX,ESP,false);
    CHECK(o.status==BF_00269600_REP_WRITE_FAULT&&o.fault_address==ESP+0x58u);
    seed(m,3u);m->fail_write=3u;
    o=bf_00269600_guest_prepare(&io,EBX,ESP,false);
    CHECK(o.status==BF_00269600_REP_WRITE_FAULT&&o.fault_address==ESP+0x14u);
    CHECK(o.repeat.ecx==2u&&o.repeat.words_completed==1u);
    seed(m,3u);m->fail_read=2u;
    o=bf_00269600_guest_prepare(&io,EBX,ESP,false);
    CHECK(o.status==BF_00269600_REP_READ_FAULT&&o.fault_address==EBX);
    CHECK(o.repeat.esi==EBX&&o.repeat.ecx==UINT32_C(0x146));
    seed(m,3u);m->fail_write=5u;
    o=bf_00269600_guest_prepare(&io,EBX,ESP,false);
    CHECK(o.status==BF_00269600_REP_WRITE_FAULT&&o.fault_address==ESP+0x578u);
    CHECK(o.repeat.words_completed==0u);
    seed(m,0u);put(m,EBP+8u,DEST);m->fail_read=2u;
    o=bf_00269600_guest_copy_output(&io,EBP,SOURCE,false);
    CHECK(o.status==BF_00269600_REP_READ_FAULT&&o.fault_address==SOURCE);
    seed(m,0u);put(m,EBP+8u,DEST);m->fail_write=1u;
    o=bf_00269600_guest_copy_output(&io,EBP,SOURCE,false);
    CHECK(o.status==BF_00269600_REP_WRITE_FAULT&&o.fault_address==DEST);
    CHECK(o.repeat.words_completed==0u);
    CHECK(bf_00269600_guest_prepare(NULL,EBX,ESP,false).status==BF_00269600_REP_INVALID_INTERFACE);
}
int main(void) {
    memory m={0};m.data=malloc(SIZE);CHECK(m.data);
    for(unsigned count=0;count<=20u;count++)check_prepare(&m,count);
    check_prepare(&m,UINT32_C(0x146));
    output_check(&m);
    alias_and_direction(&m);
    failures(&m);
    printf("PASS 00269600 guest REP copies: %u assertions\n",checks);
    free(m.data);return 0;
}
