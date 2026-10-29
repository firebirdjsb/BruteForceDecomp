#include "bf_001f3aa0_sparse_frame.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BASE UINT32_C(0x100000)
#define SIZE 16384u
#define CHECK(x) do{++checks;if(!(x)){fprintf(stderr,"FAIL line %d: %s\n",__LINE__,#x);exit(1);}}while(0)
typedef struct fixture {unsigned char *bytes;uint32_t va[256];unsigned writes,fail_write;} fixture;
static unsigned checks;
static bool write32(void *ctx,uint32_t a,uint32_t w){
    fixture*f=ctx;
    CHECK(f->writes<256u);
    f->va[f->writes++]=a;
    if(f->writes==f->fail_write || a<BASE || (uint64_t)(a-BASE)+4u>SIZE)return false;
    memcpy(f->bytes+a-BASE,&w,4);return true;
}
static void one(unsigned live_offset,unsigned failed_at){
    fixture f={0};f.bytes=malloc(SIZE);CHECK(f.bytes);
    memset(f.bytes,0xa5,SIZE);f.fail_write=failed_at;
    const uint32_t live_esp=BASE+UINT32_C(0x80)+live_offset;
    const bf_002ebea0_guest_mem io={&f,NULL,write32};
    const bf_001f3aa0_sparse_result r=bf_001f3aa0_write_sparse_frame(&io,live_esp);
    const unsigned written=failed_at?failed_at-1u:256u;
    CHECK(r.written==written);
    CHECK(f.writes==(failed_at?failed_at:256u));
    CHECK(r.status==(failed_at?BF_002EBEA0_WRITE_FAULT:BF_002EBEA0_OK));
    CHECK(r.final_eax==live_esp+UINT32_C(0xb0)+(uint32_t)(failed_at?failed_at-1u:256u)*32u);
    CHECK(r.fault_address==(failed_at?live_esp+UINT32_C(0xb0)+(failed_at-1u)*32u:0u));
    for(unsigned i=0;i<f.writes;i++)CHECK(f.va[i]==live_esp+UINT32_C(0xb0)+i*32u);
    for(unsigned i=0;i<256u;i++){
        uint32_t addr=live_esp+UINT32_C(0xb0)+i*32u;
        const unsigned index=addr-BASE;
        for(unsigned b=0;b<32u;b++){
            const unsigned char expect=i<written&&b<4u?0:0xa5;
            CHECK(f.bytes[index+b]==expect);
        }
    }
    free(f.bytes);
}
int main(void){
    for(unsigned off=0;off<16u;off++)one(off,0);
    for(unsigned fail=1;fail<=256u;fail+=17u)one(0,fail);
    const bf_001f3aa0_sparse_result bad=bf_001f3aa0_write_sparse_frame(NULL,BASE);
    CHECK(bad.status==BF_002EBEA0_INVALID_IO);
    printf("PASS original 001F3AA0 sparse frame writes: %u assertions\n",checks);
    return 0;
}
