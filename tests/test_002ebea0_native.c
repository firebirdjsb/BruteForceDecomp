/* Successful, fully mapped native i686 comparisons. Fault-prefix tests live
 * in the portable suite and do not claim native/Xbox exception delivery. */
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bf_x86_stack_probe_002ebea0.h"

_Static_assert(sizeof(void *) == 4, "native oracle requires an i686 process");
_Static_assert(offsetof(bf_stack_probe_002ebea0_state, eflags) == 16,
               "trampoline state layout");
extern void bf_stack_probe_native_run(const bf_stack_probe_002ebea0_state *,
                                     bf_stack_probe_002ebea0_state *);
extern const unsigned char bf_stack_probe_native_resume[];

enum { NATIVE_BYTES = 0x30000, NATIVE_TOP = 0x28000 };
typedef struct native_memory {
    unsigned char *bytes;
    uint32_t base;
} native_memory;

static bool native_read(void *user, uint32_t address, uint32_t *value)
{
    native_memory *m = (native_memory *)user;
    uint32_t offset = address - m->base;
    if (offset > NATIVE_BYTES - 4u) return false;
    memcpy(value, m->bytes + offset, 4);
    return true;
}

static bool native_write(void *user, uint32_t address, uint32_t value)
{
    native_memory *m = (native_memory *)user;
    uint32_t offset = address - m->base;
    if (offset > NATIVE_BYTES - 4u) return false;
    memcpy(m->bytes + offset, &value, 4);
    return true;
}

static int native_case(native_memory *m, unsigned char *initial,
                       unsigned char *expected, uint32_t n, uint32_t seed,
                       unsigned id)
{
    uint32_t pattern = seed;
    for (unsigned i = 0; i < NATIVE_BYTES; ++i) {
        pattern = pattern * UINT32_C(1664525) + UINT32_C(1013904223);
        m->bytes[i] = (unsigned char)(pattern >> 24);
    }
    bf_stack_probe_002ebea0_state input = {
        n, seed ^ UINT32_C(0x2468ace1),
        m->base + NATIVE_TOP - (id & 3u), UINT32_C(0x002ebea0),
        UINT32_C(0x202) | (seed & UINT32_C(0x8d5)) |
            ((id & 1u) != 0 ? UINT32_C(0x400) : 0),
        UINT32_MAX
    };
    const uint32_t resume = (uint32_t)(uintptr_t)bf_stack_probe_native_resume;
    memcpy(m->bytes + (input.esp - m->base), &resume, 4);
    memcpy(initial, m->bytes, NATIVE_BYTES);
    bf_stack_probe_002ebea0_state actual = {0};
    bf_stack_probe_native_run(&input, &actual);
    memcpy(expected, m->bytes, NATIVE_BYTES);
    memcpy(m->bytes, initial, NATIVE_BYTES);
    const bf_stack_probe_002ebea0_memory memory = {m, native_read, native_write};
    bf_stack_probe_002ebea0_result modeled = bf_stack_probe_002ebea0(input, &memory);
    const uint32_t compared_flags = UINT32_C(0x8c5) | UINT32_C(0x400);
    if (modeled.status != BF_STACK_PROBE_OK ||
        actual.eax != modeled.state.eax || actual.ecx != modeled.state.ecx ||
        actual.esp != modeled.state.esp || actual.eip != modeled.state.eip ||
        ((actual.eflags ^ modeled.state.eflags) & compared_flags) != 0 ||
        (modeled.state.eflags_defined & UINT32_C(0x8d5)) != UINT32_C(0x8c5) ||
        memcmp(expected, m->bytes, NATIVE_BYTES) != 0) {
        fprintf(stderr, "Native mismatch n=%u id=%u flags=%08x/%08x "
                "eax=%08x/%08x ecx=%08x/%08x esp=%08x/%08x\n",
                (unsigned)n, id, (unsigned)actual.eflags,
                (unsigned)modeled.state.eflags, (unsigned)actual.eax,
                (unsigned)modeled.state.eax, (unsigned)actual.ecx,
                (unsigned)modeled.state.ecx, (unsigned)actual.esp,
                (unsigned)modeled.state.esp);
        return 1;
    }
    return 0;
}

int bf_stack_probe_native_suite(void)
{
    native_memory memory;
    memory.bytes = (unsigned char *)VirtualAlloc(NULL, NATIVE_BYTES,
        MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);
    unsigned char *initial = (unsigned char *)malloc(NATIVE_BYTES);
    unsigned char *expected = (unsigned char *)malloc(NATIVE_BYTES);
    if (!memory.bytes || !initial || !expected) {
        fprintf(stderr, "Native test allocation failed\n");
        free(initial); free(expected);
        if (memory.bytes) VirtualFree(memory.bytes, 0, MEM_RELEASE);
        return 1;
    }
    memory.base = (uint32_t)(uintptr_t)memory.bytes;
    const uint32_t sizes[] = {0,1,2,3,4,7,15,16,31,255,4095,4096,4097,
                             8191,8192,8193,12288,16384,65535,65536};
    uint32_t seed = UINT32_C(0x002ebea0);
    unsigned count = 0;
    int failed = 0;
    for (unsigned i = 0; i < sizeof sizes / sizeof *sizes && !failed; ++i)
        for (unsigned j = 0; j < 8 && !failed; ++j) {
            seed = seed * UINT32_C(1664525) + UINT32_C(1013904223);
            failed = native_case(&memory, initial, expected, sizes[i], seed, count++);
        }
    for (unsigned i = 0; i < 2000 && !failed; ++i) {
        seed = seed * UINT32_C(1664525) + UINT32_C(1013904223);
        failed = native_case(&memory, initial, expected, seed % 65537u, seed, count++);
    }
    free(initial); free(expected);
    VirtualFree(memory.bytes, 0, MEM_RELEASE);
    if (!failed)
        printf("PASS %u native i686 register/defined-flag/full-byte comparisons\n", count);
    return failed;
}
