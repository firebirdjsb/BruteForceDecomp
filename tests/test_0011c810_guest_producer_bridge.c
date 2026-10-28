#include "bf_0011c810_guest_producer_bridge.h"
#include "bf_0011c810_register_calls.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <math.h>
#define BASE UINT32_C(0x10000)
#define SP UINT32_C(0x13000)
#define SOURCE UINT32_C(0x1e000)
#define CHECK(x) do{++checks;if(!(x)){fprintf(stderr,"FAIL %d: %s\n",__LINE__,#x);exit(1);}}while(0)
static unsigned checks;
typedef struct bus { unsigned char data[65536];unsigned events, fail_at; } bus;
static bool read_cb(void *p,uint32_t addr,void *out,size_t n) {
    bus *b=p;++b->events;
    if(b->events==b->fail_at||addr<BASE||(uint64_t)(addr-BASE)+n>sizeof b->data)return false;
    memcpy(out,b->data+addr-BASE,n);return true;
}
static bool write_cb(void *p,uint32_t addr,const void *in,size_t n) {
    bus *b=p;++b->events;
    if(b->events==b->fail_at||addr<BASE||(uint64_t)(addr-BASE)+n>sizeof b->data)return false;
    memcpy(b->data+addr-BASE,in,n);return true;
}
static bf_0011c810_guest_bytes ops(bus *b) {const bf_0011c810_guest_bytes io={b,read_cb,write_cb};return io;}
static void write3(bus *b,uint32_t addr,const float *x) {memcpy(b->data+addr-BASE,x,12);}
static void read3(bus *b,uint32_t addr,float *x) {memcpy(x,b->data+addr-BASE,12);}
static float dot(const float *m,const float *v,int r) {return(m[r]*v[0]+m[3+r]*v[1])+m[6+r]*v[2];}
int main(void) {
    const bf_0011c810_frame f=bf_0011c810_frame_at(SP);
    bus *b=malloc(sizeof *b);CHECK(b);
    unsigned scenarios=0;
    for(unsigned seed=1;seed<=4096;++seed) {
        memset(b,0,sizeof *b);
        const float source[]={seed*.008f,((int)(seed%61)-30)*.024f,((int)(seed%71)-35)*.017f};
        const float vector[]={seed*.00011f, (seed%17)*-.092f, (seed%23)*.073f};
        write3(b,SOURCE,source);write3(b,f.helper_vec3,vector);
        memset(b->data+f.consumer_xyz9-BASE+36,0xa5,12);
        bf_0011c810_guest_bytes io=ops(b);
        bf_0011c810_bridge_result r=bf_0011c810_source_matrix(&io,SP,SOURCE);
        CHECK(r.status==BF_0011C810_COPIED && r.stage==BF_BRIDGE_STAGE_MATRIX_COPY);
        CHECK(b->events==8);/* input read, producer output write, 6 copy callbacks */
        CHECK(memcmp(b->data+f.producer_xyz9-BASE,b->data+f.consumer_xyz9-BASE,36)==0);
        for(int i=0;i<12;i++)CHECK(b->data[f.consumer_xyz9-BASE+36+i]==0xa5);
        float mat[9], expected[3],out[3];
        memcpy(mat,b->data+f.consumer_xyz9-BASE,36);
        for(int k=0;k<3;k++) expected[k]=dot(mat,vector,k);
        r=bf_0011c810_dot_output(&io,SP);
        CHECK(r.status==BF_0011C810_COPIED && r.stage==BF_BRIDGE_STAGE_DOT_OUTPUT);
        CHECK(b->events==13);/* matrix read, vec read, 3 original ordered writes */
        read3(b,f.helper_out3,out);
        for(int k=0;k<3;k++)CHECK(memcmp(out+k,expected+k,4)==0);
        ++scenarios;
    }
    for(unsigned fail=1;fail<=8;++fail) {
        memset(b,0,sizeof *b);b->fail_at=fail;
        float x[]={1.f,2.f,3.f};write3(b,SOURCE,x);
        bf_0011c810_guest_bytes io=ops(b);
        bf_0011c810_bridge_result r=bf_0011c810_source_matrix(&io,SP,SOURCE);
        CHECK(r.status==(fail==1||fail==3||fail==5||fail==7?BF_0011C810_READ_FAULT:BF_0011C810_WRITE_FAULT));
        CHECK(b->events==fail);
        ++scenarios;
    }
    memset(b,0,sizeof *b);bf_0011c810_guest_bytes io=ops(b);
    for(unsigned fail=1;fail<=5;++fail) {
        b->events=0;b->fail_at=fail;
        bf_0011c810_bridge_result r=bf_0011c810_dot_output(&io,SP);
        CHECK(r.status==(fail<=2?BF_0011C810_READ_FAULT:BF_0011C810_WRITE_FAULT));
        CHECK(b->events==fail);
        ++scenarios;
    }
    CHECK(bf_0011c810_source_matrix(NULL,SP,SOURCE).status==BF_0011C810_INVALID_IO);
    CHECK(bf_0011c810_dot_output(NULL,SP).status==BF_0011C810_INVALID_IO);
    printf("PASS %u source-linked guest-frame scenarios; %u assertions (no virtual ABI, x87, original fault timing parity)\n",scenarios,checks);
    free(b);return 0;
}
