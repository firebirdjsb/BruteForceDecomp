/* Explicit host-C connectivity for actual 0x0001D0C0 and 0x0012B2A0
 * source implementations and the instruction-observed 0x0011C810 frame.
 * NOT the actual original caller entry, guest exception delivery, or a
 * verified recreation of the first/second indirect +0x30 virtual target.
 * Read/write callbacks refer to 32-bit GUEST addresses, never host pointers.
 */
#ifndef BF_0011C810_GUEST_PRODUCER_BRIDGE_H
#define BF_0011C810_GUEST_PRODUCER_BRIDGE_H
#include "bf_x86_0011c810_matrix_frame.h"
typedef enum bf_0011c810_bridge_stage {
    BF_BRIDGE_STAGE_NONE=0,
    BF_BRIDGE_STAGE_SOURCE_INPUT,
    BF_BRIDGE_STAGE_MATRIX_OUTPUT,
    BF_BRIDGE_STAGE_MATRIX_COPY,
    BF_BRIDGE_STAGE_DOT_INPUT,
    BF_BRIDGE_STAGE_DOT_OUTPUT
} bf_0011c810_bridge_stage;
typedef struct bf_0011c810_bridge_result {
    bf_0011c810_copy_status status;
    bf_0011c810_bridge_stage stage;
    uint32_t fault_guest_va;
} bf_0011c810_bridge_result;
/* `virtual_eax` must come from the REAL virtual +0x30 return register.
 * This bridge does not discover that target or assume a C ABI for it. */
bf_0011c810_bridge_result bf_0011c810_source_matrix(
    const bf_0011c810_guest_bytes *io, uint32_t guest_esp, uint32_t virtual_eax);
/* Call only when the later +0x30 virtual call and caller's vector stores
 * have happened; the frame's 36-byte copied matrix must already exist. */
bf_0011c810_bridge_result bf_0011c810_dot_output(
    const bf_0011c810_guest_bytes *io, uint32_t guest_esp);
#endif
