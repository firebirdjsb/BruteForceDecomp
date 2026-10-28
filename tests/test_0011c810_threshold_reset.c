#include "bf_0011c810_threshold_reset.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BASE UINT32_C(0x10000)
#define ARG UINT32_C(0x17000)
#define CHECK(x) do{++checks;if(!(x)){fprintf(stderr,"FAIL line %d: %s\n",__LINE__,#x);exit(1);}}while(0)
typedef struct memory {unsigned char bytes[0x10000];unsigned writes;unsigned fail;} memory;
static unsigned checks,scenarios;
static bool write_guest(void*p,uint32_t a,const void*src,size_t n){memory*m=p;++m->writes;if(m->writes==m->fail||a<BASE||(uint64_t)(a-BASE)+n>sizeof m->bytes)return false;memcpy(m->bytes+(a-BASE),src,n);return true;}
static uint32_t word(float v){uint32_t x;memcpy(&x,&v,4);return x;}
static uint32_t get(memory*m,uint32_t at){uint32_t w;memcpy(&w,m->bytes+(at-BASE),4);return w;}
extern int bf_0011c810_threshold_reference(const float*,const float*);
static float sample(unsigned i,unsigned mul){
    const int32_t x=(int32_t)((i*mul+197u)%131071u)-65535;
    return (float)x*(mul&1u?0.0009765625f:0.000030517578125f);
}
int main(void){
    memory*m=malloc(sizeof *m);CHECK(m);
    for(unsigned seed=1;seed<=32768u;++seed){
        memset(m,0,sizeof *m);
        const float first=sample(seed,2243u),third=sample(seed,157u);
        const int original=bf_0011c810_threshold_reference(&first,&third);
        const bf_0011c810_guest_bytes io={m,NULL,write_guest};
        const bf_0011c810_reset_result r=bf_0011c810_threshold_reset(&io,ARG,word(first),word(third));
        CHECK((r.status==BF_RESET_TAKEN)==(original!=0));
        CHECK(r.status==BF_RESET_TAKEN||r.status==BF_RESET_NOT_TAKEN);
        if(original){CHECK(get(m,ARG+0x7b0u)==0x3f800000u);CHECK(get(m,ARG+0x7b4u)==0u);CHECK(get(m,ARG+0x7b8u)==0u);CHECK(r.writes==3&&m->writes==3);}
        else{CHECK(r.writes==0&&m->writes==0);}
        scenarios++;
    }
    const float boundary[][2]={
        {0.f,0.f},{0.f,1.f},{-0.f,-1.f},{0.125f,1.f},{0.125f,1.000001f},
        {-0.125f,1.f},{-0.125f,-1.000001f},{1.f,8.f},{1.f,8.000001f},
        {1.0e-30f,2.0e-29f},{1.0e30f,1.0e31f}
    };
    for(unsigned i=0;i<sizeof boundary/sizeof boundary[0];++i){
        memset(m,0,sizeof *m);const bf_0011c810_guest_bytes io={m,NULL,write_guest};
        const float first=boundary[i][0],third=boundary[i][1];
        const bf_0011c810_reset_result r=bf_0011c810_threshold_reset(&io,ARG,word(first),word(third));
        CHECK((r.status==BF_RESET_TAKEN)==(bf_0011c810_threshold_reference(&first,&third)!=0));scenarios++;
    }
    /* Deterministic bytewise failure stages, refusing further writes. */
    for(unsigned fail=1;fail<=3u;++fail){
        memset(m,0,sizeof *m);m->fail=fail;
        const bf_0011c810_guest_bytes io={m,NULL,write_guest};
        const bf_0011c810_reset_result r=bf_0011c810_threshold_reset(&io,ARG,word(0.01f),word(1.f));
        CHECK(r.status==BF_RESET_GUEST_WRITE_FAULT);
        CHECK(r.fault_guest_va==ARG+0x7b0u+4u*(fail-1));
        CHECK(m->writes==fail&&r.writes==fail-1);scenarios++;
    }
    const uint32_t invalid[]={0x7f800000u,0xff800000u,0x7fc00000u,0x7f800001u};
    for(unsigned i=0;i<4;++i){
        memset(m,0,sizeof *m);const bf_0011c810_guest_bytes io={m,NULL,write_guest};
        const bf_0011c810_reset_result r=bf_0011c810_threshold_reset(&io,ARG,invalid[i],word(1.f));
        CHECK(r.status==BF_RESET_FLOAT_UNVERIFIED&&m->writes==0u);scenarios++;
    }
    CHECK(bf_0011c810_threshold_reset(NULL,ARG,0,0).status==BF_RESET_GUEST_IO_INVALID);
    free(m);
    printf("PASS %u independent-original-x87 branch scenarios, %u assertions (finite F32 threshold/reset path)\n",scenarios,checks);
    return 0;
}
