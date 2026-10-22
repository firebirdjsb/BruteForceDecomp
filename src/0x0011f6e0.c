/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CDDA6608C0CF7BD8AE580E870BA4A1E49D3B872B0C8D1CC096EEFD22409A46C2
 * Entry: 0x0011f6e0, Ghidra index: 3634, label: FUN_0011f6e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0011f6e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int in_EAX;
  
  *(undefined4 *)(in_EAX + 0x598) = 0;
  *(undefined4 *)(in_EAX + 0x674) = param_1;
  *(undefined4 *)(in_EAX + 0x678) = param_2;
  *(undefined4 *)(in_EAX + 0x67c) = param_3;
  return;
}
