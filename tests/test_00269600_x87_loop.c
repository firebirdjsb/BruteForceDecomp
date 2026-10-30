/* Bounded reference FPU for original instruction-order tests.
 * NOT a byte-exact Xbox x87 control/status/exception emulator.
 */
#include "bf_00269600_x87_loop.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BASE UINT32_C(0x100000)
#define SIZE UINT32_C(0x300000)
#define EBP UINT32_C(0x207000)
#define EBX UINT32_C(0x201000)
#define ESP UINT32_C(0x1f0000)
#define COUNTER UINT32_C(0x206000)
#define CHECK(x) do{++assertions;if(!(x)){fprintf(stderr,"FAIL line %u: %s\n",(unsigned)__LINE__,#x);exit(1);}}while(0)
typedef struct fixture {
    uint8_t *data;
    uint32_t read_addrs[128],write_addrs[128];
    unsigned reads,writes,read64s;
    uint32_t fail_read_address,fail_write_address,fail64_address;
} fixture;
typedef struct fpu_reference {
    long double stack[8];int depth;uint16_t status;
    unsigned loads,compares,swreads,divides,pops;
    bool fail_fnstsw;
} fpu_reference;
static unsigned assertions;
static bool mapped(uint32_t addr,unsigned width){
    return addr>=BASE && (uint64_t)(addr-BASE)+width<=SIZE;
}
static bool read32(void *ctx,uint32_t a,uint32_t *word){
    fixture*m=ctx;CHECK(m->reads<128u);m->read_addrs[m->reads++]=a;
    if(!mapped(a,4)||a==m->fail_read_address)return false;
    memcpy(word,m->data+(a-BASE),4);return true;
}
static bool write32(void *ctx,uint32_t a,uint32_t w){
    fixture*m=ctx;CHECK(m->writes<128u);m->write_addrs[m->writes++]=a;
    if(!mapped(a,4)||a==m->fail_write_address)return false;
    memcpy(m->data+(a-BASE),&w,4);return true;
}
static bool read64(void *ctx,uint32_t a,uint64_t *word){
    fixture*m=ctx;m->read64s++;
    if(!mapped(a,8)||a==m->fail64_address)return false;
    memcpy(word,m->data+(a-BASE),8);return true;
}
static uint32_t bits(float f){uint32_t b;memcpy(&b,&f,4);return b;}
static float from_bits(uint32_t bits){float x;memcpy(&x,&bits,4);return x;}
static void set32(fixture*m,uint32_t a,uint32_t w){
    CHECK(mapped(a,4));memcpy(m->data+a-BASE,&w,4);
}
static void set64(fixture*m,uint32_t a,double value){
    CHECK(mapped(a,8));memcpy(m->data+a-BASE,&value,8);
}
static uint32_t get(fixture*m,uint32_t a){
    uint32_t w;CHECK(mapped(a,4));memcpy(&w,m->data+a-BASE,4);return w;
}
static bool fld(void *ctx,uint32_t raw){
    fpu_reference*p=ctx;p->loads++;
    if(p->depth>=8)return false;
    p->stack[p->depth++]=(long double)from_bits(raw);return true;
}
static bool cmp64(void *ctx,uint64_t raw){
    fpu_reference*p=ctx;p->compares++;
    if(p->depth<1)return false;
    double compare;memcpy(&compare,&raw,8);
    long double x=p->stack[--p->depth];
    if(isnan(x)||isnan(compare))p->status=UINT16_C(0x4500);
    else if(x<(long double)compare)p->status=UINT16_C(0x0100);
    else if(x==(long double)compare)p->status=UINT16_C(0x4000);
    else p->status=0;
    return true;
}
static bool fnstsw(void *ctx,uint16_t *sw){
    fpu_reference*p=ctx;p->swreads++;
    if(p->fail_fnstsw)return false;
    *sw=p->status;return true;
}
static bool fdiv(void *ctx,uint32_t raw){
    fpu_reference*p=ctx;p->divides++;
    if(p->depth<1)return false;
    p->stack[p->depth-1]/=(long double)from_bits(raw);return true;
}
static bool fstp(void *ctx,uint32_t *raw){
    fpu_reference*p=ctx;p->pops++;
    if(p->depth<1)return false;
    *raw=bits((float)p->stack[--p->depth]);return true;
}
static void init(fixture*m,unsigned n,float a,float b,float c){
    memset(m->data,0xa5,SIZE);
    m->reads=m->writes=m->read64s=0;
    m->fail_read_address=m->fail_write_address=m->fail64_address=0;
    set32(m,EBP+0xcu,COUNTER);
    set32(m,COUNTER,UINT32_C(0xdeadbeef));
    set32(m,EBX+0x514u,n);
    set32(m,ESP+0x10u,bits(a));
    set32(m,ESP+0x14u,bits(b));
    set32(m,ESP+0x18u,bits(c));
    set64(m,0x3a5100u,1.0);
    set32(m,0x3a4f78u,bits(1.f));
}
static bf_00269600_x87_result run(fixture *m,fpu_reference *p){
    const bf_00269600_x87_memory memory={{m,read32,write32},read64};
    const bf_00269600_x87 fp={p,fld,cmp64,fnstsw,fdiv,fstp};
    return bf_00269600_execute_x87_loop(&memory,&fp,EBP,EBX,ESP);
}
static void normal(fixture *m){
    fpu_reference p={0};init(m,3u,.5f,2.f,1.f);
    const bf_00269600_x87_result r=run(m,&p);
    CHECK(r.status==BF_00269600_X87_OK);
    CHECK(r.iterations==3u&&r.reciprocal_count==2u);
    CHECK(r.final_ecx==3u && r.instruction_va==0x2696adu);
    CHECK(get(m,COUNTER)==2u);
    CHECK(get(m,ESP+0x10u)==bits(0.f));
    CHECK(get(m,ESP+0x14u)==bits(.5f));
    CHECK(get(m,ESP+0x18u)==bits(1.f));
    CHECK(p.depth==0 && p.compares==3u && p.swreads==3u);
    CHECK(p.divides==2u && p.pops==2u && m->read64s==3u);
    CHECK(m->read_addrs[0]==EBP+0xcu && m->write_addrs[0]==COUNTER);
    CHECK(m->write_addrs[1]==ESP+0x10u);
    CHECK(m->write_addrs[2]==COUNTER && m->write_addrs[3]==ESP+0x14u);
    CHECK(m->write_addrs[4]==COUNTER && m->write_addrs[5]==ESP+0x18u);
    init(m,0u,2.f,2.f,2.f);memset(&p,0,sizeof p);
    const bf_00269600_x87_result zero=run(m,&p);
    CHECK(zero.status==BF_00269600_X87_OK && zero.iterations==0);
    CHECK(get(m,COUNTER)==0u && m->read64s==0u && p.depth==0);
    /* Calling without a guessed special-case for unordered FCOMP is
     * deliberate: original TEST AH,5 / JP takes the unordered path. */
    init(m,1u,NAN,0,0);memset(&p,0,sizeof p);
    const bf_00269600_x87_result nan=run(m,&p);
    CHECK(nan.status==BF_00269600_X87_OK);
    CHECK(nan.reciprocal_count==1u);
    CHECK(isnan(from_bits(get(m,ESP+0x10u))));
    CHECK(bf_00269600_jp_test_ah_5(0));
    CHECK(!bf_00269600_jp_test_ah_5(0x100u));
    CHECK(bf_00269600_jp_test_ah_5(0x4000u));
    CHECK(bf_00269600_jp_test_ah_5(0x4500u));
    CHECK(!bf_00269600_jp_test_ah_5(0x400u));
}
static void faults(fixture*m){
    fpu_reference p={0};init(m,1u,2.f,0,0);
    m->fail64_address=0x3a5100u;
    bf_00269600_x87_result r=run(m,&p);
    CHECK(r.status==BF_00269600_X87_READ_FAULT);
    CHECK(r.fault_guest_va==0x3a5100u&&r.instruction_va==0x269678u);
    CHECK(p.depth==1 && p.compares==0);
    init(m,1u,2.f,0,0);memset(&p,0,sizeof p);p.fail_fnstsw=true;
    r=run(m,&p);
    CHECK(r.status==BF_00269600_X87_BACKEND_FAILED);
    CHECK(r.instruction_va==0x26967eu&&p.depth==0);
    init(m,1u,2.f,0,0);memset(&p,0,sizeof p);
    m->fail_write_address=ESP+0x10u;
    r=run(m,&p);
    CHECK(r.status==BF_00269600_X87_WRITE_FAULT);
    CHECK(r.fault_guest_va==ESP+0x10u&&r.iterations==0u);
    CHECK(get(m,COUNTER)==1u && p.depth==0);
    init(m,1u,2.f,0,0);memset(&p,0,sizeof p);
    m->fail_read_address=0x3a4f78u;
    r=run(m,&p);
    CHECK(r.status==BF_00269600_X87_READ_FAULT);
    CHECK(r.fault_guest_va==0x3a4f78u&&p.depth==0);
    init(m,1u,0,0,0);memset(&p,0,sizeof p);
    set32(m,EBP+0xcu,EBX+0x514u);
    r=run(m,&p);
    CHECK(r.status==BF_00269600_X87_OK && r.iterations==0u);
    CHECK(get(m,EBX+0x514u)==0u); /* output aliases live source count */
}
int main(void){
    fixture m={0};m.data=malloc(SIZE);CHECK(m.data);
    normal(&m);faults(&m);
    printf("PASS original 00269600 x87 FCOMP/FNSTSW reciprocal decisions: %u assertions\n",assertions);
    free(m.data);return 0;
}
