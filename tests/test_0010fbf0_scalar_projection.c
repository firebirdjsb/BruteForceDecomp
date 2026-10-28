#include "bf_0010fbf0_scalar_projection.h"
#include "bf_0011c810_original_vector_lanes.h"
#include "bf_0011c810_register_calls.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <xmmintrin.h>
#define BASE UINT32_C(0x10000)
#define SP UINT32_C(0x13000)
#define ARG UINT32_C(0x17000)
#define VT UINT32_C(0x19000)
#define OBJ UINT32_C(0x1a000)
#define CHECK(x) do{checks++;if(!(x)){fprintf(stderr,"FAIL line %d: %s\n",__LINE__,#x);exit(1);}}while(0)
static unsigned checks,scenarios;
typedef struct bus {unsigned char ram[0x10000];unsigned event,fail,reads,writes;} bus;
static bool mapped(uint32_t at,size_t len){return at>=BASE && (uint64_t)(at-BASE)+len<=65536u;}
static bool read_guest(void *ctx,uint32_t at,void*dst,size_t n) {
    bus *b=ctx;++b->event;++b->reads;if(b->event==b->fail||!mapped(at,n))return false;
    memcpy(dst,b->ram+(at-BASE),n);return true;
}
static bool write_guest(void *ctx,uint32_t at,const void*src,size_t n) {
    bus *b=ctx;++b->event;++b->writes;if(b->event==b->fail||!mapped(at,n))return false;
    memcpy(b->ram+(at-BASE),src,n);return true;
}
static bf_0011c810_guest_bytes io_for(bus*b){const bf_0011c810_guest_bytes io={b,read_guest,write_guest};return io;}
static void put32(bus*b,uint32_t at,uint32_t w){CHECK(mapped(at,4));memcpy(b->ram+(at-BASE),&w,4);}
static uint32_t get32(bus*b,uint32_t at){uint32_t w;CHECK(mapped(at,4));memcpy(&w,b->ram+(at-BASE),4);return w;}
static uint32_t bits(float x){uint32_t w;memcpy(&w,&x,4);return w;}
extern void bf_0010fbf0_reference(float output[3], const float *x,const float *z);
static void setup(bus*b,float x,float z){
    memset(b,0,sizeof *b);
    put32(b,ARG+0x1b4u,VT);
    put32(b,VT+0x30u,BF_0011C810_CONCRETE_METHOD);
    put32(b,ARG+0x1b4u+0x410u,bits(x));
    put32(b,ARG+0x1b4u+0x428u,bits(z));
    put32(b,ARG+0x6cu,OBJ);
}
static float gen(unsigned seed, unsigned scale){
    const int32_t m=(int32_t)((seed*1664525u+1013904223u)%3001u)-1500;
    return ((float)m)*((scale&1u)?0.03125f:0.00390625f);
}
int main(void){
    bus*b=malloc(sizeof *b);CHECK(b);
#if BF_0010FBF0_NUMERIC_PROJECTION_AVAILABLE
    const bf_0011c810_frame f=bf_0011c810_frame_at(SP);
    for (unsigned seed=1; seed<=20000u; ++seed) {
        const float x=gen(seed,seed),z=gen(seed*11939u,seed+1u);
        setup(b,x,z);
        const bf_0011c810_guest_bytes io=io_for(b);
        const bf_0010fbf0_result r=bf_0010fbf0_project(&io,ARG+0x1b4u,SP+0x28u);
        CHECK(r.completed&&r.stage==BF_0010FBF0_COMPLETE);
        CHECK(b->event==5u&&b->reads==2u&&b->writes==3u);
        float oracle[3];bf_0010fbf0_reference(oracle,&x,&z);
        CHECK(get32(b,SP+0x28u)==bits(oracle[0]));
        CHECK(get32(b,SP+0x2cu)==0u);
        CHECK(get32(b,SP+0x30u)==bits(oracle[2]));
        CHECK(r.result_words[0]==bits(oracle[0]));
        CHECK(r.result_words[2]==bits(oracle[2]));
        scenarios++;
    }
    /* Exercise both ORIGINAL virtual call sites and the actual restored
     * producer/consumer C source, with 3-vector guest memory linkage. */
    for(unsigned seed=1;seed<=1024u;++seed){
        const float x=gen(seed+30,1),z=gen(seed*19u+101,0);
        setup(b,x,z);const bf_0011c810_guest_bytes io=io_for(b);
        bf_0010fbf0_result scalar={0};
        const bf_0011c810_concrete_context ctx={&io,bf_0010fbf0_project_executor,&scalar};
        const bf_0011c810_virtual_result first=bf_0011c810_first_virtual_to_matrix(
            &io,ARG,SP,bf_0011c810_concrete_virtual_executor,(void*)&ctx);
        CHECK(first.status==BF_0011C810_VIRTUAL_OK);
        CHECK(first.response.eax_after_return==SP+0x28u);
        CHECK(first.response.esp_after_return==SP);
        CHECK(scalar.completed&&scalar.stage==BF_0010FBF0_COMPLETE);
        float oracle[3];bf_0010fbf0_reference(oracle,&x,&z);
        const uint32_t vector_expected[]={bits(oracle[0]),bits(oracle[1]),bits(oracle[2])};
        for(unsigned i=0;i<3;i++) CHECK(get32(b,SP+0x28u+4u*i)==vector_expected[i]);
        float matrix_expected[9];FUN_0001d0c0(oracle,matrix_expected);
        CHECK(memcmp(b->ram+(f.consumer_xyz9-BASE),matrix_expected,36)==0);
        /* A second invocation of the same original +0x30 method is distinct:
         * output parameter is S+0x1C, not the first call's S+0x28. */
        const bf_0011c810_virtual_result second=bf_0011c810_dispatch_virtual(
            &io,ARG,SP,BF_0011C810_SECOND_VIRTUAL,
            bf_0011c810_concrete_virtual_executor,(void*)&ctx);
        CHECK(second.status==BF_0011C810_VIRTUAL_OK);
        CHECK(second.response.eax_after_return==SP+0x1cu);
        CHECK(second.response.esp_after_return==SP);
        for(unsigned i=0;i<3;i++) CHECK(get32(b,SP+0x1cu+4u*i)==vector_expected[i]);
        /* That second virtual result is overwritten by the original later
         * vector; stage the independently XBE-verified object lane words. */
        const float components[]={gen(seed+17,0),gen(seed+71,1),gen(seed+300,0)};
        for(unsigned i=0;i<3;i++)put32(b,OBJ+0x1cu+12u*i,bits(components[i]));
        const uint32_t words[]={bits(components[0]),bits(components[1]),bits(components[2])};
        uint32_t fault=0;
        CHECK(bf_0011c810_original_vector_lanes(NULL,&io,f.helper_vec3,words,&fault));
        CHECK(fault==0);
        const bf_0011c810_bridge_result dot=bf_0011c810_dot_output(&io,SP);
        CHECK(dot.status==BF_0011C810_COPIED);
        float expected_out[3],converted[3];
        for(unsigned i=0;i<3;i++)converted[i]=bf_0010fbf0_float_from_word(words[i]^UINT32_C(0x80000000));
        FUN_0012b2a0(expected_out,converted,matrix_expected);
        CHECK(memcmp(b->ram+(f.helper_out3-BASE),expected_out,12)==0);
        scenarios++;
    }
    /* Zero length, non-finite, subnormal and NaN are intentionally
     * NOT asserted to be original Xbox runtime equivalence. */
    const uint32_t specials[]={0u,0x7f800000u,0xff800000u,0x7fc00000u,0x7f800001u,0x00000001u};
    for(unsigned i=0;i<sizeof specials/sizeof specials[0];++i){
        setup(b,0.f,0.f);
        put32(b,ARG+0x1b4u+0x410u,specials[i]);
        put32(b,ARG+0x1b4u+0x428u,i==0?0u:bits(1.0f));
        const bf_0011c810_guest_bytes io=io_for(b);
        const bf_0010fbf0_result r=bf_0010fbf0_project(&io,ARG+0x1b4u,SP+0x28u);
        CHECK(!r.completed&&r.stage==BF_0010FBF0_FLOAT_UNVERIFIED);
        CHECK(b->writes==0u);
        scenarios++;
    }
    for(unsigned at=1;at<=5u;++at){
        setup(b,.25f,.5f);b->fail=at;
        const bf_0011c810_guest_bytes io=io_for(b);
        const bf_0010fbf0_result r=bf_0010fbf0_project(&io,ARG+0x1b4u,SP+0x28u);
        CHECK(!r.completed&&b->event==at);
        CHECK(r.stage==(at==1?BF_0010FBF0_READ_X:
                        at==2?BF_0010FBF0_READ_Z:
                        at==3?BF_0010FBF0_WRITE_X:
                        at==4?BF_0010FBF0_WRITE_ZERO:BF_0010FBF0_WRITE_Z));
        scenarios++;
    }
    CHECK(!bf_0010fbf0_project(NULL,ARG,SP).completed);
    printf("PASS %u source-linked hardware-oracle scenarios, %u assertions per build (bounded finite inputs only)\n",scenarios,checks);
#else
    /* Unsupported host arithmetic must decline without creating guest output.
     * This is rejection-path coverage, not a numeric-oracle comparison. */
    for(unsigned seed=1;seed<=1024u;++seed){
        setup(b,gen(seed,0),gen(seed+1u,1));
        put32(b,SP+0x28u,UINT32_C(0xdeadbeef));
        const bf_0011c810_guest_bytes io=io_for(b);
        const bf_0010fbf0_result result=bf_0010fbf0_project(&io,ARG+0x1b4u,SP+0x28u);
        CHECK(!result.completed && result.stage==BF_0010FBF0_FLOAT_UNVERIFIED);
        CHECK(b->reads==2u && b->writes==0u);
        CHECK(get32(b,SP+0x28u)==UINT32_C(0xdeadbeef));
        ++scenarios;
    }
    CHECK(!bf_0010fbf0_project(NULL,ARG,SP).completed);
    printf("PASS %u unsupported-host rejection scenarios, %u assertions; SKIP numeric oracle: no supported 80-bit proxy\n",scenarios,checks);
#endif
    free(b);
    return 0;
}
