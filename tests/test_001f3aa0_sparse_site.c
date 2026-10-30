#define main bf_previous_sparse_test_main
#include "test_001f3aa0_sparse_frame.c"
#undef main
#include "bf_001f3aa0_sparse_site.h"

static void bound(unsigned skew){
    fixture f={0};f.bytes=malloc(SIZE);CHECK(f.bytes);
    memset(f.bytes,0xa5,SIZE);
    const uint32_t guest_ebp=BASE+UINT32_C(0x3000)+skew;
    const uint32_t aligned_ebp=guest_ebp & ~UINT32_C(0xf);
    const uint32_t expected_esp=aligned_ebp-UINT32_C(0x20b0);
    const bf_002ebea0_guest_mem io={&f,NULL,write32};
    bf_001f3aa0_sparse_site_result r=
        bf_001f3aa0_execute_sparse_site(&io,guest_ebp,expected_esp);
    CHECK(r.accepted&&r.storage.status==BF_002EBEA0_OK);
    CHECK(r.expected_live_esp==expected_esp);
    CHECK(r.first_write_guest==aligned_ebp-UINT32_C(0x2000));
    CHECK(r.last_write_guest==aligned_ebp-UINT32_C(0x20));
    CHECK(r.storage.written==256u&&f.writes==256u);
    for(unsigned i=0;i<256u;i++) {
        CHECK(f.va[i]==r.first_write_guest+32u*i);
        CHECK(f.bytes[f.va[i]-BASE]==0u);
        CHECK(f.bytes[f.va[i]-BASE+4u]==0xa5);
    }
    f.writes=0u;
    r=bf_001f3aa0_execute_sparse_site(&io,guest_ebp,expected_esp+4u);
    CHECK(!r.accepted && f.writes==0u);
    CHECK(r.expected_live_esp==expected_esp);
    free(f.bytes);
}
int main(void){
    for(unsigned i=0;i<32u;i++)bound(i);
    printf("PASS 001F3AA0 original caller sparse ESP contract: %u assertions\n",checks);
    return 0;
}
