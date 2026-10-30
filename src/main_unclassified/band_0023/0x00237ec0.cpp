/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AA35726C3037E872B1F4DD54BC64DF55B01AC73E8ED04533F2411D071FCEBD54
 * Entry: 0x00237ec0, Ghidra index: 7860, label: FUN_00237ec0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Recorded original x86: 0x00237EC0 pushes its single incoming DWORD
 * and zero flags BEFORE CALL 0x002F77F3, which takes no guest-stack
 * arguments and simply loads [0x004A90D4] into EAX. The two saved
 * words plus that EAX are then consumed by CALL 0x002F77DC.
 * 0x002F77DC zero-extends AL into EAX and RET 0x0C; 0x00237EC0
 * returns that EAX unmodified with a plain RET.
 *
 * The original imported heap and cross-function guest ESP/register
 * effects remain ABI_UNVERIFIED. Opcode evidence is recorded in
 * scripts/verify_002b8c60_heap_xbe.py (requires pinned private XBE).
 */
extern undefined4 FUN_002f77f3(void);
extern undefined1 XAPILIB__HeapFree(undefined4 heap,
                                    undefined4 flags,
                                    undefined4 allocation);
uint32_t FUN_00237ec0(uint32_t guest_allocation_va)
{
  const uint32_t guest_heap = FUN_002f77f3();
  return (uint32_t)XAPILIB__HeapFree(guest_heap, 0, guest_allocation_va);
}
