/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 707FAA52AEE143B384B1A4A5D9209A5AAF0BF2B158D0A5E50B53C83BA85520D2
 * Entry: 0x00169950, Ghidra index: 4753, label: FUN_00169950
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00169950(void)

{
  int in_EAX;
  
  if ((*(byte *)(*(int *)(in_EAX + 4) + 0x7d8) & 3) == 0) {
    return 0;
  }
  return 1;
}
