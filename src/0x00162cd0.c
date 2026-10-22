/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6BC7641B3AEEC64CCB3C0C1D0593A186A70A1E39590BB7B395CA3B93C32B2149
 * Entry: 0x00162cd0, Ghidra index: 4656, label: FUN_00162cd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00162cd0(void)

{
  int *piVar1;
  int *in_EAX;
  int in_EDX;
  
  piVar1 = in_EAX + in_EAX[0x41] + 1;
  do {
    in_EAX = in_EAX + 1;
    if (in_EAX == piVar1) break;
  } while (*in_EAX != in_EDX);
  return CONCAT31((int3)((uint)in_EAX >> 8),in_EAX != piVar1);
}
