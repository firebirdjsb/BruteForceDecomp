#include "bf_001feb60_caller_dispatch.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BASE UINT32_C(0x10000)
#define SIZE UINT32_C(0x210000)
#define ESP UINT32_C(0x12000)
#define OWNER UINT32_C(0x13000)
#define FILTER UINT32_C(0x14000)
#define NODE UINT32_C(0x15000)
#define END UINT32_C(0x15040)
#define ITEM UINT32_C(0x16000)
#define CHECK(x) do { ++checks; if(!(x)){fprintf(stderr,"FAIL %d: %s\n",__LINE__,#x);exit(1);} }while(0)
typedef struct fixture {
    uint8_t *bytes;
    unsigned reads,writes,bytes_read,fail_read,fail_write,fail_byte;
    uint32_t read_addresses[48],write_addresses[16];
} fixture;
static unsigned checks;
static bool mapped(uint32_t a,unsigned n){return a>=BASE && (uint64_t)(a-BASE)+n<=SIZE;}
static bool rd(void*ctx,uint32_t a,uint32_t*out){
    fixture*f=ctx;
    CHECK(f->reads<48u);
    f->read_addresses[f->reads++]=a;
    if(f->reads==f->fail_read||!mapped(a,4))return false;
    memcpy(out,f->bytes+(a-BASE),4);return true;
}
static bool wr(void*ctx,uint32_t a,uint32_t value){
    fixture*f=ctx;CHECK(f->writes<16u);f->write_addresses[f->writes++]=a;
    if(f->writes==f->fail_write||!mapped(a,4))return false;
    memcpy(f->bytes+(a-BASE),&value,4);return true;
}
static bool read_byte(void*ctx,uint32_t a,uint8_t*out){
    fixture*f=ctx;f->bytes_read++;
    if(f->bytes_read==f->fail_byte||!mapped(a,1))return false;
    *out=f->bytes[a-BASE];return true;
}
static void put32(fixture*f,uint32_t a,uint32_t v){CHECK(mapped(a,4));memcpy(f->bytes+(a-BASE),&v,4);}
static uint32_t get32(fixture*f,uint32_t a){uint32_t v;CHECK(mapped(a,4));memcpy(&v,f->bytes+(a-BASE),4);return v;}
static void init(fixture*f,uint32_t typ) {
    memset(f->bytes,0,SIZE);
    f->reads=f->writes=f->bytes_read=f->fail_read=f->fail_write=f->fail_byte=0;
    put32(f,ESP+0x14u,NODE);
    put32(f,ESP+0x10u,UINT32_C(0xf00df00d));
    put32(f,OWNER+0x30u,END);
    put32(f,NODE,END);
    put32(f,NODE+8u,ITEM);
    put32(f,FILTER+4u,UINT32_C(0x12345678));
    put32(f,FILTER+8u,UINT32_C(0xaabbccdd));
    put32(f,ITEM+4u,UINT32_C(0x12345678));
    put32(f,ITEM+0xcu,UINT32_C(0xaabbccdd));
    put32(f,ITEM+0x10u,3u);
    put32(f,ITEM+0x14u,2u);
    put32(f,ITEM+8u,typ);
    /* Minimal table entries independently pinned from private XBE. */
    f->bytes[UINT32_C(0x205a48)-BASE]=0u;  /* raw type 4 */
    f->bytes[UINT32_C(0x205a48)-BASE+26u]=1u; /* type 0x1e */
    f->bytes[UINT32_C(0x205a48)-BASE+27u]=2u; /* type 0x1f */
    f->bytes[UINT32_C(0x205a48)-BASE+31u]=6u; /* type 0x23 */
    put32(f,UINT32_C(0x205a28),UINT32_C(0x2059b9));
    put32(f,UINT32_C(0x205a28)+4u,UINT32_C(0x205941));
    put32(f,UINT32_C(0x205a28)+8u,UINT32_C(0x205976));
    put32(f,UINT32_C(0x205a28)+24u,UINT32_C(0x2059ad));
    f->bytes[UINT32_C(0x1ff494)-BASE]=0u; /* raw type 2 */
    f->bytes[UINT32_C(0x1ff494)-BASE+1u]=1u; /* raw type 3 */
    f->bytes[UINT32_C(0x1ff494)-BASE+35u]=3u; /* raw 0x25 */
    f->bytes[UINT32_C(0x1ff494)-BASE+42u]=10u; /* raw 0x2c */
    put32(f,UINT32_C(0x1ff464),UINT32_C(0x1ff1d0));
    put32(f,UINT32_C(0x1ff464)+4u,UINT32_C(0x1ff21e));
    put32(f,UINT32_C(0x1ff464)+12u,UINT32_C(0x1ff26c));
    put32(f,UINT32_C(0x1ff464)+40u,UINT32_C(0x1ff3f7));
}
static bf_001feb60_dispatch_result call(fixture*f,uint32_t entry){
    bf_001feb60_dispatch_io io={{f,rd,wr},read_byte};
    return bf_001feb60_execute_caller_dispatch(&io,entry,ESP,FILTER,OWNER);
}
static void match_cases(fixture*f) {
    const struct scenario {uint32_t entry,typ,target,index;} cases[]={
       {0x2058c0u,4u,0x2059b9u,0u},
       {0x2058c0u,0x1eu,0x205941u,26u},
       {0x2058c0u,0x1fu,0x205976u,27u},
       {0x2058c0u,0x23u,0x2059adu,31u},
       {0x1ff0f0u,2u,0x1ff1d0u,0u},
       {0x1ff0f0u,3u,0x1ff21eu,1u},
       {0x1ff0f0u,0x25u,0x1ff26cu,35u},
       {0x1ff0f0u,0x2cu,0x1ff3f7u,42u},
       {0x2058c0u,3u,0x2059c2u,UINT32_MAX},
       {0x2058c0u,0x24u,0x2059c2u,32u},
       {0x1ff0f0u,1u,0x1ff438u,UINT32_MAX},
       {0x1ff0f0u,0x2du,0x1ff438u,43u}
    };
    for(unsigned repeat=0;repeat<256u;repeat++)for(unsigned i=0;i<sizeof cases/sizeof cases[0];i++){
       const struct scenario c=cases[i];
       init(f,c.typ);
       bf_001feb60_dispatch_result r=call(f,c.entry);
       CHECK(r.status==BF_001FEB60_DISPATCH_TARGET);
       CHECK(r.raw_type==c.typ&&r.adjusted_index==c.index);
       CHECK(r.target_guest_va==c.target&&r.matched_item_guest==ITEM);
       CHECK(r.fault_guest_va==0u);
       CHECK(get32(f,ESP+0x10u)==ITEM&&get32(f,ESP+0x14u)==END);
       CHECK(f->write_addresses[0]==ESP+0x10u);
       CHECK(f->write_addresses[1]==ESP+0x10u);
       CHECK(f->write_addresses[2]==ESP+0x14u);
       const bool in_range=c.index<=bf_001feb60_dispatch_layout_for(c.entry).maximum_index;
       CHECK(f->reads>1u&&f->read_addresses[f->reads-(in_range?2u:1u)]==ITEM+8u);
       CHECK(f->bytes_read==(c.index<=bf_001feb60_dispatch_layout_for(c.entry).maximum_index?1u:0u));
    }
}
static void edges(fixture*f){
    init(f,4u);
    put32(f,ESP+0x14u,END);
    bf_001feb60_dispatch_result r=call(f,0x2058c0u);
    CHECK(r.status==BF_001FEB60_DISPATCH_END&&f->bytes_read==0u);
    CHECK(get32(f,ESP+0x10u)==0u);
    init(f,4u);f->fail_write=1u;
    r=call(f,0x2058c0u);
    CHECK(r.status==BF_001FEB60_DISPATCH_WRITE_FAULT&&r.fault_guest_va==ESP+0x10u);
    init(f,4u);f->fail_byte=1u;
    r=call(f,0x2058c0u);
    CHECK(r.status==BF_001FEB60_DISPATCH_READ_FAULT&&r.fault_guest_va==0x205a48u);
    init(f,4u);f->fail_read=1u;
    r=call(f,0x2058c0u);
    CHECK(r.status==BF_001FEB60_DISPATCH_READ_FAULT&&r.fault_guest_va==ESP+0x14u);
    init(f,4u);
    r=call(f,UINT32_C(0x12345678));
    CHECK(r.status==BF_001FEB60_DISPATCH_INVALID&&f->reads==0&&f->writes==0);
    CHECK(bf_001feb60_dispatch_layout_for(0).jump_table==0u);
}
int main(void){
    fixture*f=calloc(1,sizeof*f);CHECK(f);
    f->bytes=calloc(SIZE,1u);CHECK(f->bytes);
    match_cases(f);edges(f);
    printf("PASS original two caller dispatch bridges: %u assertions\n",checks);
    free(f->bytes);free(f);return 0;
}
