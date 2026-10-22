/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B71B290CCD3E5352BE43D58C440E6A1D1C06F726AF9F6C2480279A0D61B5AA24
 * Entry: 0x00022ca0, Ghidra index: 202, label: FUN_00022ca0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00022ca0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int in_EAX;
  
  *(undefined4 *)(in_EAX + 0x24) = 1;
  *(undefined4 *)(in_EAX + 0x10) = param_1;
  *(undefined4 *)(in_EAX + 0x14) = param_2;
  *(undefined4 *)(in_EAX + 0x18) = param_3;
  return;
}
