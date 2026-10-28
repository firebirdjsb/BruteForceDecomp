/* Boundary-only tests: no complete caller/game/exception parity claim. */
#include "bf_x86_stack_probe_pilot_callers.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BASE UINT32_C(0x100000)
#define SIZE UINT32_C(0x40000)
#define EBP UINT32_C(0x121020)
#define MAX_EVENTS 100u
#define CHECK(x) do { ++checks; if (!(x)) { \
    fprintf(stderr,"FAIL line %d: %s\n",__LINE__,#x); exit(1); } } while (0)
static unsigned checks, scenarios;

typedef struct bus {
    unsigned char bytes[SIZE];
    unsigned events, fail_at, reads, writes;
    uint32_t last_address, first_write_address, first_write_value;
    bool modified_on_failure;
} bus;

static bool valid(uint32_t addr) { return addr-BASE <= SIZE-4u; }
static uint32_t read_word(const bus *b,uint32_t addr)
{
    const unsigned char *p=b->bytes+(addr-BASE);
    return (uint32_t)p[0] | (uint32_t)p[1]<<8 |
           (uint32_t)p[2]<<16 | (uint32_t)p[3]<<24;
}
static void write_word(bus *b,uint32_t addr,uint32_t value,unsigned n)
{
    unsigned char *p=b->bytes+(addr-BASE);
    for (unsigned i=0;i<n;++i) p[i]=(unsigned char)(value>>(8u*i));
}
static bool read32(void *u,uint32_t addr,uint32_t *out)
{
    bus *b=u;
    ++b->events; ++b->reads; b->last_address=addr;
    if (b->events==b->fail_at || !valid(addr)) return false;
    *out=read_word(b,addr);
    return true;
}
static bool write32(void *u,uint32_t addr,uint32_t v)
{
    bus *b=u;
    ++b->events; ++b->writes; b->last_address=addr;
    if (b->events==1) { b->first_write_address=addr; b->first_write_value=v; }
    if (!valid(addr)) return false;
    if (b->events==b->fail_at) {
        if (b->modified_on_failure) write_word(b,addr,v,2);
        return false;
    }
    write_word(b,addr,v,4);
    return true;
}
static bf_stack_probe_002ebea0_memory mem(bus *b)
{
    const bf_stack_probe_002ebea0_memory m={b,read32,write32};return m;
}
static void initialize(bus *b)
{
    memset(b,0,sizeof *b);
    for(uint32_t i=0;i<SIZE;++i) b->bytes[i]=(unsigned char)((i*19u+i/29u)&255u);
}
static bf_stack_probe_002ebea0_state state(uint32_t eip,uint32_t request)
{
    const bf_stack_probe_002ebea0_state s={request,UINT32_C(0xc1ef459a),
        EBP-0x20u,eip,UINT32_C(0x2c3),UINT32_MAX};
    return s;
}
static void test_success(uint32_t request,bool second)
{
    bus *b=malloc(sizeof *b);CHECK(b!=NULL);initialize(b);
    const uint32_t resume=second?BF_SP_PILOT_33FA74_NEXT:BF_SP_PILOT_2C2530_NEXT;
    const uint32_t site=second?BF_SP_PILOT_33FA74_CALL:BF_SP_PILOT_2C2530_CALL;
    bf_stack_probe_002ebea0_state s=state(site,request);
    bf_stack_probe_002ebea0_memory m=mem(b);
    bf_sp_pilot_result r=bf_sp_pilot_invoke(s,EBP,site,resume,request,&m);
    CHECK(r.status==BF_SP_PILOT_OK);
    CHECK(r.requested_bytes==request);
    CHECK(r.scratch_guest_va==s.esp-request);
    CHECK(r.helper.state.esp==s.esp-request);
    CHECK(r.helper.state.eip==resume && r.original_return_site);
    CHECK(r.helper.state.ecx==s.ecx);
    CHECK((r.helper.state.eflags_defined & 0x10u)==0);
    CHECK(b->first_write_address==s.esp-4u);
    CHECK(b->first_write_value==resume);
    CHECK(b->writes>0 && b->reads>0);
    /* CALL writes a return DWORD; probe relocates it when request > 0. */
    CHECK(read_word(b,request? s.esp-request-4u : s.esp-4u)==resume);
    free(b);++scenarios;
}
static void test_pilots(void)
{
    const uint16_t words[]={0,1,2,3,4,4094,4095,4096,4097,32767,32768,65532,65535};
    const uint32_t rounded[]={0,4,4,4,4,4096,4096,4096,4100,32768,
                               0xffff8000u,0xfffffffcu,0};
    const uint32_t sizes[]={0,1,2,3,4,4095,4096,4097,8192,16384,32768};
    for(unsigned i=0;i<sizeof words/sizeof *words;++i)
        CHECK(bf_sp_pilot_2c2530_request(words[i])==rounded[i]);
    for(unsigned i=0;i<sizeof sizes/sizeof *sizes;++i) {
        const uint32_t bytes=sizes[i];
        /* Only feasible mapped test sizes are executed, no fake bound in model. */
        test_success(bytes,false);
        test_success(bytes,true);
    }
    /* Validate both wrappers, not just the shared executor. */
    for(unsigned i=0;i<sizeof words/sizeof *words;++i) {
        uint32_t amount=bf_sp_pilot_2c2530_request(words[i]);
        if(amount>32768u) continue;
        bus *b=malloc(sizeof *b);CHECK(b);initialize(b);
        bf_stack_probe_002ebea0_memory m=mem(b);
        bf_sp_pilot_result r=bf_sp_pilot_2c2530(state(BF_SP_PILOT_2C2530_CALL,amount),
                                                  EBP,words[i],&m);
        CHECK(r.status==BF_SP_PILOT_OK);
        CHECK(r.scratch_guest_va==EBP-0x20u-amount);
        CHECK(r.helper.state.eip==BF_SP_PILOT_2C2530_NEXT);
        free(b);++scenarios;
    }
    const uint32_t lengths[]={1,2,3,4095,4096,4097,32768,UINT32_MAX};
    for(unsigned i=0;i<sizeof lengths/sizeof *lengths;++i) {
        const uint32_t len=lengths[i], count=(len+3u)&~3u;
        bus *b=malloc(sizeof *b);CHECK(b);initialize(b);
        bf_stack_probe_002ebea0_memory m=mem(b);
        bf_sp_pilot_result r=bf_sp_pilot_33fa74(
            state(BF_SP_PILOT_33FA74_CALL,count),EBP,len-1u,len,&m);
        if(count<=32768u) {
            CHECK(r.status==BF_SP_PILOT_OK);
            CHECK(r.scratch_guest_va==EBP-0x20u-count);
            CHECK(r.helper.state.eip==BF_SP_PILOT_33FA74_NEXT);
        } else {
            CHECK(r.status==BF_SP_PILOT_HELPER_FAULT);
            CHECK(r.helper.state.eip==UINT32_C(0x002ebec9));
        }
        free(b);++scenarios;
    }
}
static void test_skip_invalid_and_faults(void)
{
    bus *b=malloc(sizeof *b);CHECK(b);initialize(b);
    bf_stack_probe_002ebea0_memory m=mem(b);
    bf_stack_probe_002ebea0_state s=state(BF_SP_PILOT_33FA74_CALL,4);
    bf_sp_pilot_result r=bf_sp_pilot_33fa74(s,EBP,4,4,&m);
    CHECK(r.status==BF_SP_PILOT_NOT_CALLED && b->events==0);
    r=bf_sp_pilot_33fa74(s,EBP,7,4,&m);
    CHECK(r.status==BF_SP_PILOT_NOT_CALLED && b->events==0);
    r=bf_sp_pilot_invoke(s,EBP+4u,BF_SP_PILOT_33FA74_CALL,
                         BF_SP_PILOT_33FA74_NEXT,4,&m);
    CHECK(r.status==BF_SP_PILOT_BAD_CALL_CONTEXT && b->events==0);
    r=bf_sp_pilot_invoke(s,EBP,BF_SP_PILOT_33FA74_CALL,
                         BF_SP_PILOT_33FA74_NEXT,8,&m);
    CHECK(r.status==BF_SP_PILOT_BAD_CALL_CONTEXT && b->events==0);
    r=bf_sp_pilot_invoke(s,EBP,0,BF_SP_PILOT_33FA74_NEXT,4,&m);
    CHECK(r.status==BF_SP_PILOT_BAD_CALL_CONTEXT && b->events==0);

    /* First write is CALL's actual return push, not a helper probe. */
    b->fail_at=1; b->modified_on_failure=true;
    r=bf_sp_pilot_33fa74(s,EBP,0,4,&m);
    CHECK(r.status==BF_SP_PILOT_CALL_WRITE_FAULT);
    CHECK(r.helper.state.esp==s.esp && r.helper.state.eip==s.eip);
    CHECK(r.helper.status==BF_STACK_PROBE_WRITE_FAULT);
    CHECK(r.helper.fault_address==s.esp-4u);
    CHECK(b->events==1 && read_word(b,s.esp-4u)!=BF_SP_PILOT_33FA74_NEXT);
    /* Second access on a small request is the helper's TEST read. */
    initialize(b);b->fail_at=2;
    r=bf_sp_pilot_33fa74(s,EBP,0,4,&m);
    CHECK(r.status==BF_SP_PILOT_HELPER_FAULT);
    CHECK(r.helper.status==BF_STACK_PROBE_READ_FAULT);
    CHECK(r.helper.state.eip==UINT32_C(0x002ebeb2));
    CHECK(r.helper.state.esp==s.esp-4u);
    CHECK(read_word(b,s.esp-4u)==BF_SP_PILOT_33FA74_NEXT);
    /* Large allocations fault on the original page touch, after saved ECX. */
    initialize(b);b->fail_at=3;
    s=state(BF_SP_PILOT_2C2530_CALL,4096);
    r=bf_sp_pilot_invoke(s,EBP,BF_SP_PILOT_2C2530_CALL,
                         BF_SP_PILOT_2C2530_NEXT,4096,&m);
    CHECK(r.status==BF_SP_PILOT_HELPER_FAULT);
    CHECK(r.helper.state.eip==UINT32_C(0x002ebec9));
    CHECK(r.helper.state.esp==s.esp-8u);
    CHECK(read_word(b,s.esp-8u)==s.ecx);
    free(b);++scenarios;
}
int main(void)
{
    test_pilots();test_skip_invalid_and_faults();
    printf("PASS: %u pilot caller-boundary scenarios; %u checks (not complete caller/Xbox parity)\n",
           scenarios,checks);
    return 0;
}
