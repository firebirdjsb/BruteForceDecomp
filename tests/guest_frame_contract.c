/* Original Xbox x86 stack contracts, expressed only as guest EBP offsets.
 * This regression test intentionally does NOT reinterpret a guest address
 * as a host pointer, register an SEH handler, or claim a C ABI.
 *
 * Compile: clang -std=c11 -Wall -Wextra -Werror -pedantic
 *          tests/guest_frame_contract.c -o guest_frame_contract
 */
#include <stdint.h>
#include <stdio.h>

typedef struct {
    int32_t saved_esp_from_ebp;
    int32_t decompiler_stack_offset;
    int32_t copy_begin_from_ebp;
    int32_t copy_end_from_ebp;
    uint32_t seh_handler_guest_va;
    uint32_t copy_dwords;
    uint32_t callee_pop_bytes;
} bf_guest_frame_contract;

static const bf_guest_frame_contract bf_frame_1c630 = {
    -0x68, -0x6c, -0x24, -0x10, UINT32_C(0x00307a10), 5, 8
};
static const bf_guest_frame_contract bf_frame_1c980 = {
    -0x94, -0x98, -0x50, -0x10, UINT32_C(0x00307f00), 16, 8
};

static int check(const bf_guest_frame_contract *f) {
    return f->decompiler_stack_offset == f->saved_esp_from_ebp - 4 &&
           f->copy_end_from_ebp - f->copy_begin_from_ebp ==
               (int32_t)(f->copy_dwords * 4) &&
           f->copy_begin_from_ebp > f->saved_esp_from_ebp &&
           f->copy_end_from_ebp <= -0x10 &&
           f->callee_pop_bytes == 8;
}
int main(void) {
    if (!check(&bf_frame_1c630) || !check(&bf_frame_1c980)) {
        fputs("FAIL: guest frame contract changed\\n", stderr);
        return 1;
    }
    puts("PASS: guest frame offset model only (ABI unverified)");
    return 0;
}
