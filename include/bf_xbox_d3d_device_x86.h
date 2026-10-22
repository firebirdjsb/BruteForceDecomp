/* Brute Force original Xbox D3D device-global observation (NOT PC ABI).
 *
 * The original x86 instruction at the command-writer callsites recovers
 * a pointer VALUE from [0x0037DD88].  See source evidence and body hashes
 * in src/0x00062170.c and src/0x00062230.c.
 *
 * A source-level pointer is needed to inspect dependent Ghidra drafts.
 * This does not verify each consumer's offsets, the pointed-to structure,
 * calling convention, 32-bit emulated memory mapping, or 64-bit PC behavior.
 * In particular, pointer arithmetic recovered as byte offsets must not be
 * assumed to match C pointer arithmetic without per-function x86 review.
 */
#ifndef BF_XBOX_D3D_DEVICE_X86_H
#define BF_XBOX_D3D_DEVICE_X86_H
#include <stdint.h>
extern uint32_t *D3D8__D3D_g_pDevice;
#endif
