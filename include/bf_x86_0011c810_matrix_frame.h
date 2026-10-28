/* Original 0x0011C810: successful 36-byte guest SSE matrix copy boundary.
 * Source is written by 0x0001D0C0 through ECX, dependent on an unresolved
 * preceding indirect EAX producer. The 0x0012B2A0 output also depends on
 * unbound EAX/ECX/EDX register inputs. This model does not fabricate them.
 *
 * The mapped copy is source S+0x68..S+0x8B -> dest S+0x38..S+0x5B,
 * where S=guest ESP after SUB ESP,0x88 and PUSH ESI. SSE MOVUPS copies
 * 16+16 bytes followed by MOVSS 4 bytes. No pointer is a host address.
 * Exact x86 faults, SSE registers and full caller behavior unverified.
 */
#ifndef BF_X86_0011C810_MATRIX_FRAME_H
#define BF_X86_0011C810_MATRIX_FRAME_H
#include <stdbool.h>
#include <stdint.h>
#include <stddef.h>

typedef struct bf_0011c810_frame {
    uint32_t producer_xyz9; /* ECX output of 0x0001D0C0; 36 bytes */
    uint32_t consumer_xyz9; /* EDX input to 0x0012B2A0; 36 bytes */
    uint32_t helper_vec3;   /* ECX input to 0x0012B2A0; 12 bytes */
    uint32_t helper_out3;   /* EAX output from 0x0012B2A0; 12 bytes */
} bf_0011c810_frame;
static inline bf_0011c810_frame bf_0011c810_frame_at(uint32_t guest_esp)
{
    const bf_0011c810_frame f = {
        guest_esp + UINT32_C(0x68), guest_esp + UINT32_C(0x38),
        guest_esp + UINT32_C(0x28), guest_esp + UINT32_C(0x0c)
    };
    return f;
}

typedef struct bf_0011c810_guest_bytes {
    void *user;
    bool (*read)(void *, uint32_t, void *, size_t);
    bool (*write)(void *, uint32_t, const void *, size_t);
} bf_0011c810_guest_bytes;
typedef enum bf_0011c810_copy_status {
    BF_0011C810_COPIED = 0,
    BF_0011C810_READ_FAULT,
    BF_0011C810_WRITE_FAULT,
    BF_0011C810_INVALID_IO
} bf_0011c810_copy_status;
typedef struct bf_0011c810_copy_result {
    bf_0011c810_copy_status status;
    uint32_t fault_guest_va;
} bf_0011c810_copy_result;

/* Precondition: the real producer has filled 36 bytes at frame.producer_xyz9.
 * Source and destination are disjoint 36-byte regions in the original
 * fixed frame. Transfer exactly 16, 16 and 4 bytes, without numeric float
 * conversion or invented zeroes. This is a byte-success projection; do not
 * interpret the callback fault result as original x86 EIP/SEH state. */
static inline bf_0011c810_copy_result bf_0011c810_copy_produced_matrix(
    bf_0011c810_frame f, const bf_0011c810_guest_bytes *io)
{
    bf_0011c810_copy_result r = {BF_0011C810_INVALID_IO,0};
    if (!io || !io->read || !io->write) return r;
    unsigned char temp[16];
    for (uint32_t offset=0;offset<36u;offset+=16u) {
        const size_t n = offset==32u ? 4u : 16u;
        const uint32_t input=f.producer_xyz9+offset;
        const uint32_t output=f.consumer_xyz9+offset;
        if (!io->read(io->user,input,temp,n)) {
            r.status=BF_0011C810_READ_FAULT;
            r.fault_guest_va=input;
            return r;
        }
        if (!io->write(io->user,output,temp,n)) {
            r.status=BF_0011C810_WRITE_FAULT;
            r.fault_guest_va=output;
            return r;
        }
    }
    r.status=BF_0011C810_COPIED;
    return r;
}
#endif
