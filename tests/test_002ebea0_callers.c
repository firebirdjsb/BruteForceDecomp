#define main bf_chkstk_tests_main
#include "test_002ebea0_guest_chkstk.c"
#undef main
#include "bf_002ebea0_callers.h"
static void verify_caller(uint32_t caller) {
    fixture f={0}; f.words=malloc(SIZE); CHECK(f.words);
    const bf_002ebea0_guest_mem io={&f,read_word,write_word};
    const uint32_t requested=caller==0x001f3aa0u ? 0x20a8u : 0x14b4u;
    const uint32_t return_to=caller==0x001f3aa0u ? 0x001f3ab0u : 0x00269610u;
    for(unsigned misalignment=0;misalignment<16u;misalignment++) {
        const uint32_t ebp=ESP+misalignment;
        bf_002ebea0_caller_entry entry={0};
        CHECK(bf_002ebea0_bind_verified_caller(caller,ebp,ECX,&entry));
        CHECK(entry.probe_regs.eax==requested);
        CHECK(entry.call_return_eip==return_to);
        CHECK(entry.aligned_esp== (ebp & ~(caller==0x001f3aa0u ? 15u : 7u)));
        CHECK(entry.call_entry_esp==entry.aligned_esp-4u);
        CHECK(entry.probe_regs.esp==entry.call_entry_esp);
        CHECK(entry.probe_regs.ecx==ECX);
        reset(&f);
        put(&f,entry.call_entry_esp,return_to); /* model original x86 CALL push */
        const bf_002ebea0_result result=bf_002ebea0_execute(&io,entry.probe_regs);
        CHECK(result.status==BF_002EBEA0_OK);
        CHECK(result.regs.eax==return_to);
        CHECK(result.regs.next_eip==return_to);
        CHECK(result.regs.ecx==ECX);
        CHECK(result.regs.esp==entry.aligned_esp-requested);
        CHECK(get(&f,entry.aligned_esp-requested-4u)==return_to);
        CHECK(f.type[0]==2&&f.addr[0]==entry.call_entry_esp-4u);
    }
    free(f.words);
}
int main(void) {
    verify_caller(0x001f3aa0u);
    verify_caller(0x00269600u);
    bf_002ebea0_caller_entry entry={0};
    CHECK(!bf_002ebea0_bind_verified_caller(0x12345678u,ESP,ECX,&entry));
    CHECK(!bf_002ebea0_bind_verified_caller(0x001f3aa0u,ESP,ECX,NULL));
    printf("PASS 002EBEA0 caller frame bindings: %u assertions\n",assertions);
    return 0;
}
