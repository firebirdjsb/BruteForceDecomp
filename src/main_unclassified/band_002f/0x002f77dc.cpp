/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A4035F578AC64F75B8FEEFE280843301EDD247FBAD78BCE2C95D20F0DB9E4BC1
 * Entry: 0x002f77dc, Ghidra index: 10923, label: HeapFree
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Recorded 0x002F77DC: three incoming 32-bit words, forwarded to
 * 0x002F75E8; MOVZX EAX,AL; RET 0x0C. The return type retains
 * precisely the low byte in this host C++ draft; its uint32_t caller
 * zero-extends that value. Guest heap semantics remain ABI_UNVERIFIED.
 * Opcode ledger: scripts/verify_002b8c60_heap_xbe.py. */
extern undefined1 FUN_002f75e8(int heap, uint32_t flags, int allocation);
undefined1 XAPILIB__HeapFree(undefined4 heap,
                             undefined4 flags,
                             undefined4 allocation)
{
  return FUN_002f75e8((int32_t)heap, flags, (int32_t)allocation);
}
