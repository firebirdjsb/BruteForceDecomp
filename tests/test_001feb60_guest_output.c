#include "bf_x86_parser_item_001feb60.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ORIGIN UINT32_C(0x10000)
#define EXTENT UINT32_C(0x10000)
#define ESP UINT32_C(0x12000)
#define OWNER UINT32_C(0x13700)
#define SELECT UINT32_C(0x13500)
#define NODE1 UINT32_C(0x13000)
#define NODE2 UINT32_C(0x13020)
#define ITEM1 UINT32_C(0x13200)
#define ITEM2 UINT32_C(0x13240)
#define CHECK(e) do { ++checks; if(!(e)) { \
  fprintf(stderr,"FAIL %u: %s\n",(unsigned)__LINE__,#e);exit(1); } }while(0)
static unsigned checks,scenarios;
typedef struct bus {
    unsigned char bytes[EXTENT];
    uint32_t fail_at,last_va;
    unsigned events,reads,writes;
} bus;
static bool located(uint32_t va) {return va-ORIGIN<=EXTENT-4u;}
static uint32_t get(const bus *b,uint32_t va)
{
    const unsigned char *p=b->bytes+(va-ORIGIN);
    return (uint32_t)p[0] | (uint32_t)p[1]<<8 | (uint32_t)p[2]<<16 | (uint32_t)p[3]<<24;
}
static void put(bus *b,uint32_t va,uint32_t v)
{
    unsigned char *p=b->bytes+(va-ORIGIN);
    for(unsigned i=0;i<4;++i)p[i]=(unsigned char)(v>>(8u*i));
}
static bool read32(void *x,uint32_t va,uint32_t *v)
{
    bus *b=x;++b->events;++b->reads;b->last_va=va;
    if(b->events==b->fail_at||!located(va))return false;
    *v=get(b,va);return true;
}
static bool write32(void *x,uint32_t va,uint32_t v)
{
    bus *b=x;++b->events;++b->writes;b->last_va=va;
    if(b->events==b->fail_at||!located(va))return false;
    put(b,va,v);return true;
}
static bf_parser_001feb60_io io(bus *b)
{
    const bf_parser_001feb60_io m={b,read32,write32};return m;
}
static void setup(bus *b)
{
    memset(b,0,sizeof *b);
    put(b,ESP+0x10,0xdeadbeefu);put(b,ESP+0x14,NODE1);
    put(b,OWNER+0x30,0);
    put(b,NODE1+0,NODE2);put(b,NODE1+8,ITEM1);
    put(b,NODE2+0,0);put(b,NODE2+8,ITEM2);
    put(b,SELECT+4,17);put(b,SELECT+8,25);
    put(b,ITEM1+4,17);put(b,ITEM1+12,24);
    put(b,ITEM1+0x10,4);put(b,ITEM1+0x14,3);
    put(b,ITEM2+4,17);put(b,ITEM2+12,25);
    put(b,ITEM2+0x10,4);put(b,ITEM2+0x14,3);
    put(b,ITEM2+8,0x27);
}
static void normal_and_empty(void)
{
    bus *b=malloc(sizeof *b);CHECK(b);setup(b);
    bf_parser_001feb60_io m=io(b);
    bf_parser_001feb60_result r=bf_parser_001feb60_next(ESP,SELECT,OWNER,&m);
    CHECK(r.status==BF_PARSER_MATCH);
    CHECK(r.matched_item_guest_va==ITEM2);
    CHECK(get(b,ESP+0x10)==ITEM2 && get(b,ESP+0x14)==0);
    uint32_t kind=0,index=0,fault=0;
    CHECK(bf_parser_001feb60_dispatch_word(r.matched_item_guest_va,2,&m,&kind,&index,&fault)==BF_PARSER_MATCH);
    CHECK(kind==0x27u && index==0x25u && fault==0);
    CHECK(bf_parser_001feb60_dispatch_word(r.matched_item_guest_va,4,&m,&kind,&index,&fault)==BF_PARSER_MATCH);
    CHECK(kind==0x27u && index==0x23u);
    r=bf_parser_001feb60_next(ESP,SELECT,OWNER,&m);
    CHECK(r.status==BF_PARSER_END && get(b,ESP+0x10)==0);
    CHECK(get(b,ESP+0x14)==0);
    CHECK(b->writes>=5);
    free(b);++scenarios;
}
static void branches_and_faults(void)
{
    bus *b=malloc(sizeof *b);CHECK(b);
    bf_parser_001feb60_io m=io(b);
    setup(b);put(b,ITEM1+12,25); /* first node matches */
    bf_parser_001feb60_result r=bf_parser_001feb60_next(ESP,SELECT,OWNER,&m);
    CHECK(r.status==BF_PARSER_MATCH && r.matched_item_guest_va==ITEM1);
    CHECK(get(b,ESP+0x14)==NODE2);
    setup(b);put(b,ITEM2+0x14,4); /* signed equal: no match */
    r=bf_parser_001feb60_next(ESP,SELECT,OWNER,&m);
    CHECK(r.status==BF_PARSER_END && get(b,ESP+0x10)==0);
    CHECK(get(b,ESP+0x14)==0);
    setup(b);put(b,ITEM2+0x14,UINT32_C(0xffffffff));
    put(b,ITEM2+0x10,1); /* -1 < +1 signed */
    r=bf_parser_001feb60_next(ESP,SELECT,OWNER,&m);
    CHECK(r.status==BF_PARSER_MATCH);
    setup(b);put(b,ITEM2+0x14,1);
    put(b,ITEM2+0x10,UINT32_C(0xffffffff)); /* +1 !< -1 */
    r=bf_parser_001feb60_next(ESP,SELECT,OWNER,&m);
    CHECK(r.status==BF_PARSER_END);
    setup(b);b->fail_at=1;
    r=bf_parser_001feb60_next(ESP,SELECT,OWNER,&m);
    CHECK(r.status==BF_PARSER_WRITE_FAULT && r.fault_guest_va==ESP+0x10);
    CHECK(get(b,ESP+0x10)==UINT32_C(0xdeadbeef));
    setup(b);b->fail_at=2;
    r=bf_parser_001feb60_next(ESP,SELECT,OWNER,&m);
    CHECK(r.status==BF_PARSER_READ_FAULT && r.fault_guest_va==ESP+0x14);
    CHECK(get(b,ESP+0x10)==0); /* previous original output write survives */
    setup(b);
    CHECK(bf_parser_001feb60_next(ESP,SELECT,OWNER,NULL).status==BF_PARSER_INVALID_IO);
    CHECK(b->events==0);
    free(b);++scenarios;
}
int main(void)
{
    normal_and_empty();branches_and_faults();
    printf("PASS: %u guest parser output scenarios; %u assertions; no ABI/x86 fault claim\n",scenarios,checks);
    return 0;
}
