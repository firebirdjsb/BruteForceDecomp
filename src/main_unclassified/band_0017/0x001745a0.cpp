/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FF42427F2EEAB2B6091F4DD5AEC522455DB1160A5289424747B6F3BE72DEC729
 * Entry: 0x001745a0, Ghidra index: 4911, label: FUN_001745a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039a3d0;
void FUN_001745a0(void)

{
  undefined4 *in_EAX;
  
  *in_EAX = PTR_LAB_0039a3d0;
  in_EAX[2] = 5;
  in_EAX[3] = 0x3f800000;
  in_EAX[4] = 0x3f800000;
  in_EAX[5] = 0;
  return;
}
