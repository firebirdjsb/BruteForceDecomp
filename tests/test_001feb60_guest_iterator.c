#include "bf_001feb60_guest_iterator.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BASE UINT32_C(0x10000)
#define SIZE 65536u
#define ITER (BASE+0x100u)
#define MATCH (BASE+0x104u)
#define OWNER (BASE+0x400u)
#define FILTER (BASE+0x600u)
#define NODE1 (BASE+0x1000u)
#define NODE2 (BASE+0x1100u)
#define SENTINEL (BASE+0x1200u)
#define ITEM1 (BASE+0x2000u)
#define ITEM2 (BASE+0x2100u)
#define CHECK(x) do { ++checks; if(!(x)){fprintf(stderr,"FAIL %d: %s\n",__LINE__,#x);exit(1);} } while(0)
typedef struct fixture {
    uint8_t bytes[SIZE];
    unsigned nr,nw,fail_read,fail_write;
    uint32_t reads[64],writes[16],write_values[16];
} fixture;
static unsigned checks;
static bool mapped(uint32_t addr) {return addr>=BASE && (uint64_t)(addr-BASE)+4u<=SIZE;}
static bool rd(void*ctx,uint32_t addr,uint32_t*out){
    fixture*f=ctx;
    CHECK(f->nr<64u);
    f->reads[f->nr++]=addr;
    if(f->nr==f->fail_read||!mapped(addr))return false;
    memcpy(out,f->bytes+(addr-BASE),4);
    return true;
}
static bool wr(void*ctx,uint32_t addr,uint32_t x){
    fixture*f=ctx;
    CHECK(f->nw<16u);
    f->writes[f->nw]=addr;f->write_values[f->nw]=x;
    ++f->nw;
    if(f->nw==f->fail_write||!mapped(addr))return false;
    memcpy(f->bytes+(addr-BASE),&x,4);
    return true;
}
static void put(fixture*f,uint32_t a,uint32_t x){
    CHECK(mapped(a));memcpy(f->bytes+(a-BASE),&x,4);
}
static uint32_t get(fixture*f,uint32_t a){
    uint32_t v;CHECK(mapped(a));memcpy(&v,f->bytes+(a-BASE),4);return v;
}
static bf_001feb60_regs regs(void) {
    bf_001feb60_regs r={ITER,MATCH,FILTER,OWNER};
    return r;
}
static void init(fixture*f,unsigned seed, bool match_second){
    memset(f,0,sizeof *f);
    put(f,ITER,NODE1);put(f,MATCH,UINT32_C(0xfeedface));
    put(f,OWNER+0x30u,SENTINEL);
    put(f,NODE1,NODE2);put(f,NODE2,SENTINEL);
    put(f,NODE1+8u,ITEM1);put(f,NODE2+8u,ITEM2);
    put(f,FILTER+4u,seed);put(f,FILTER+8u,seed^0x52u);
    put(f,ITEM1+4u,seed+1u);
    put(f,ITEM2+4u,match_second?seed:seed+1u);
    put(f,ITEM2+0xcu,seed^0x52u);
    put(f,ITEM2+0x10u,7u);
    put(f,ITEM2+0x14u,2u);
}
static void matched_cases(void){
    fixture*f=malloc(sizeof *f);CHECK(f);
    const bf_001feb60_guest_io mem={f,rd,wr};
    for(unsigned seed=1;seed<=1024u;seed++){
        init(f,seed,true);
        const bf_001feb60_result out=bf_001feb60_execute(&mem,regs());
        CHECK(out.status==BF_001FEB60_OK&&out.al==1u&&out.fault_guest_addr==0u);
        CHECK(get(f,MATCH)==ITEM2);
        CHECK(get(f,ITER)==SENTINEL);
        CHECK(f->nw==4u);
        CHECK(f->writes[0]==MATCH&&f->write_values[0]==0u);
        CHECK(f->writes[1]==ITER&&f->write_values[1]==NODE2);
        CHECK(f->writes[2]==MATCH&&f->write_values[2]==ITEM2);
        CHECK(f->writes[3]==ITER&&f->write_values[3]==SENTINEL);
        /* Original 0x00205920 reads matched pointer's [ESI+8] to switch. */
        put(f,ITEM2+8u,(seed&1u)?4u:0x1fu);
        CHECK(get(f,get(f,MATCH)+8u)==((seed&1u)?4u:0x1fu));
    }
    /* Empty iterator returns AL=0 after initial EBX clear. */
    init(f,3,true);put(f,ITER,SENTINEL);
    bf_001feb60_result out=bf_001feb60_execute(&mem,regs());
    CHECK(out.status==BF_001FEB60_OK&&out.al==0u);
    CHECK(get(f,MATCH)==0u&&get(f,ITER)==SENTINEL&&f->nw==1u);
    /* Exhausted matches: advance both nodes and return AL=0. */
    init(f,13,false);
    out=bf_001feb60_execute(&mem,regs());
    CHECK(out.status==BF_001FEB60_OK&&out.al==0u);
    CHECK(get(f,MATCH)==0u&&get(f,ITER)==SENTINEL&&f->nw==3u);
    /* Original JL is signed; -1 compares less than +0. */
    init(f,33,true);
    put(f,ITEM2+0x14u,UINT32_C(0xffffffff));put(f,ITEM2+0x10u,0u);
    out=bf_001feb60_execute(&mem,regs());
    CHECK(out.status==BF_001FEB60_OK&&out.al==1u);
    /* Failure must not manufacture an output; initial EBX write remains. */
    init(f,33,true);f->fail_write=2u;
    out=bf_001feb60_execute(&mem,regs());
    CHECK(out.status==BF_001FEB60_GUEST_WRITE_FAILED);
    CHECK(out.fault_guest_addr==ITER&&f->nw==2u&&get(f,MATCH)==0u);
    init(f,33,true);f->fail_read=1u;
    out=bf_001feb60_execute(&mem,regs());
    CHECK(out.status==BF_001FEB60_GUEST_READ_FAILED&&out.fault_guest_addr==ITER);
    CHECK(f->nw==1u&&get(f,MATCH)==0u);
    CHECK(bf_001feb60_execute(NULL,regs()).status==BF_001FEB60_INVALID_INTERFACE);
    CHECK(bf_001feb60_signed_less(UINT32_C(0xffffffff),0u));
    CHECK(!bf_001feb60_signed_less(0u,UINT32_C(0xffffffff)));
    free(f);
}
int main(void){
    matched_cases();
    printf("PASS original 001FEB60 guest iterator: %u assertions\n",checks);
    return 0;
}
