/* Scoped original x87 operand/order fixture, not Xbox FPU exception parity. */
#include "bf_001f3aa0_guest_producer.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BASE UINT32_C(0x100000)
#define SIZE UINT32_C(0x300000)
#define EBP (BASE+UINT32_C(0x3000))
#define LIVE_ESP (EBP-UINT32_C(0x20b0))
#define OWNER (BASE+UINT32_C(0x10000))
#define DATA (BASE+UINT32_C(0x11000))
#define PARAM_A UINT32_C(0x00144444)
#define PARAM_B UINT32_C(0x00155555)
#define CHECK(c) do{++checks;if(!(c)){fprintf(stderr,"FAIL %u: %s\n",(unsigned)__LINE__,#c);exit(1);}}while(0)
typedef struct memory {
    uint8_t *b;uint32_t read_addr[32],write_addr[32];
    unsigned reads,writes;
    uint32_t fault_read,fault_write;
} memory;
typedef struct fpu {
    long double stack[8];int depth;unsigned loads,adds,subs,pops;
    bool fail_add;
} fpu;
static unsigned checks;
static bool inrange(uint32_t a){return a>=BASE && (uint64_t)(a-BASE)+4u<=SIZE;}
static bool rd(void *v,uint32_t a,uint32_t *out){
    memory*m=v;CHECK(m->reads<32u);m->read_addr[m->reads++]=a;
    if(!inrange(a)||a==m->fault_read)return false;
    memcpy(out,m->b+a-BASE,4);return true;
}
static bool wr(void *v,uint32_t a,uint32_t w){
    memory*m=v;CHECK(m->writes<32u);m->write_addr[m->writes++]=a;
    if(!inrange(a)||a==m->fault_write)return false;
    memcpy(m->b+a-BASE,&w,4);return true;
}
static void put(memory*m,uint32_t a,uint32_t w){CHECK(inrange(a));memcpy(m->b+a-BASE,&w,4);}
static uint32_t get(memory*m,uint32_t a){uint32_t w;CHECK(inrange(a));memcpy(&w,m->b+a-BASE,4);return w;}
static uint32_t bits(float x){uint32_t b;memcpy(&b,&x,4);return b;}
static float from_bits(uint32_t bits){float f;memcpy(&f,&bits,4);return f;}
static bool fld(void *v,uint32_t w){fpu*p=v;p->loads++;if(p->depth>=8)return false;p->stack[p->depth++]=(long double)from_bits(w);return true;}
static bool fadd(void *v,uint32_t w){fpu*p=v;p->adds++;if(p->fail_add||p->depth==0)return false;p->stack[p->depth-1]+=(long double)from_bits(w);return true;}
static bool fsub(void *v,uint32_t w){fpu*p=v;p->subs++;if(p->depth==0)return false;p->stack[p->depth-1]-=(long double)from_bits(w);return true;}
static bool fstp(void *v,uint32_t *w){fpu*p=v;p->pops++;if(p->depth==0)return false;*w=bits((float)p->stack[--p->depth]);return true;}
static void seed(memory*m,float a,float b) {
    memset(m->b,0xa5,SIZE);
    m->reads=m->writes=0;m->fault_read=m->fault_write=0;
    put(m,EBP+8u,PARAM_A);put(m,EBP+0xcu,PARAM_B);
    put(m,OWNER+0x38u,DATA);
    put(m,DATA+4u,bits(a));put(m,DATA+8u,bits(b));
    put(m,0x003a4f78u,bits(1.f));
}
static bf_001f3aa0_producer_result run(memory*m,fpu*p,uint32_t esp) {
    const bf_002ebea0_guest_mem mem={m,rd,wr};
    const bf_001f3aa0_x87_backend fp={p,fld,fadd,fsub,fstp};
    return bf_001f3aa0_make_2b7970_args(&mem,&fp,EBP,esp,OWNER);
}
static void finite(memory*m){
    for(unsigned k=0;k<128u;k++){
        const float a=(float)(k+1u)*0.25f;
        const float b=(float)(k%7u)*0.25f;
        fpu p={0};seed(m,a,b);
        const bf_001f3aa0_producer_result r=run(m,&p,LIVE_ESP);
        CHECK(r.status==BF_001F3AA0_PRODUCER_OK);
        CHECK(r.instruction_va==UINT32_C(0x1f3b2c));
        CHECK(r.live_guest_esp==LIVE_ESP);
        CHECK(r.ecx==PARAM_A&&r.edx==PARAM_B&&r.edi==OWNER);
        CHECK(r.first_arg==LIVE_ESP+0x40u&&r.second_arg==LIVE_ESP+0x18u);
        CHECK(r.guest_call_esp==LIVE_ESP-8u&&r.return_eip==0x1f3b31u);
        CHECK(get(m,LIVE_ESP-8u)==r.first_arg);
        CHECK(get(m,LIVE_ESP-4u)==r.second_arg);
        CHECK(get(m,LIVE_ESP+0x14u)==0xff7fffffu);
        CHECK(get(m,LIVE_ESP+0x18u)==PARAM_A);
        CHECK(get(m,LIVE_ESP+0x20u)==PARAM_B);
        CHECK(get(m,LIVE_ESP+0x2cu)==bits(-1.f));
        CHECK(get(m,LIVE_ESP+0x1cu)==bits(a+1.f));
        CHECK(get(m,LIVE_ESP+0x38u)==bits(a-b+1.f));
        CHECK(get(m,LIVE_ESP+0x3cu)==0u);
        CHECK(m->reads==8u && m->writes==14u);
        CHECK(m->write_addr[0]==LIVE_ESP+0x24u);
        CHECK(m->write_addr[1]==LIVE_ESP+0x28u);
        CHECK(m->write_addr[2]==LIVE_ESP+0x2cu);
        CHECK(m->write_addr[9]==LIVE_ESP+0x14u);
        CHECK(m->write_addr[10]==LIVE_ESP-4u);
        CHECK(m->write_addr[11]==LIVE_ESP-8u);
        CHECK(m->write_addr[12]==LIVE_ESP+0x3cu);
        CHECK(m->write_addr[13]==LIVE_ESP+0x38u);
        CHECK(p.depth==0&&p.loads==2u&&p.adds==2u&&p.subs==1u&&p.pops==2u);
    }
}
static void fault_cases(memory*m){
    fpu p={0};seed(m,10.f,2.f);m->fault_read=OWNER+0x38u;
    bf_001f3aa0_producer_result r=run(m,&p,LIVE_ESP);
    CHECK(r.status==BF_001F3AA0_PRODUCER_READ_FAULT);
    CHECK(r.fault_guest_va==OWNER+0x38u&&m->writes==0u);
    seed(m,10.f,2.f);memset(&p,0,sizeof p);
    m->fault_write=LIVE_ESP-4u;
    r=run(m,&p,LIVE_ESP);
    CHECK(r.status==BF_001F3AA0_PRODUCER_WRITE_FAULT);
    CHECK(r.fault_guest_va==LIVE_ESP-4u);
    CHECK(m->writes==11u&&p.depth==1);
    seed(m,10.f,2.f);memset(&p,0,sizeof p);p.fail_add=true;
    r=run(m,&p,LIVE_ESP);
    CHECK(r.status==BF_001F3AA0_PRODUCER_X87_FAULT);
    CHECK(r.instruction_va==UINT32_C(0x1f3ae8)&&p.depth==1);
    seed(m,10.f,2.f);memset(&p,0,sizeof p);
    r=run(m,&p,LIVE_ESP+4u);
    CHECK(r.status==BF_001F3AA0_PRODUCER_INVALID&&m->writes==0u);
}
int main(void){
    memory m={0};m.b=malloc(SIZE);CHECK(m.b);
    finite(&m);fault_cases(&m);
    printf("PASS 001F3AA0 original x87 data producer and 2B7970 arguments: %u assertions\n",checks);
    free(m.b);return 0;
}
