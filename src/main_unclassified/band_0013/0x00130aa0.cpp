/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1DDF701A59293B7C13152CCEF4F7437C56353BD5D4E4AE1FCEDB151EA79D7C58
 * Entry: 0x00130aa0, Ghidra index: 3828, label: FUN_00130aa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00130aa0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int unaff_EBX;
  
  FUN_00131ed0(0,0x3f800000,0,0,0);
  puVar1 = *(undefined4 **)(unaff_EBX + 0x28);
  puVar3 = *(undefined4 **)(param_1 + 0x188);
  for (puVar2 = *(undefined4 **)(unaff_EBX + 0x24); puVar2 != puVar1; puVar2 = puVar2 + 4) {
    *puVar3 = *puVar2;
    puVar3[1] = puVar2[1];
    puVar3[2] = puVar2[2];
    *(undefined1 *)(puVar3 + 4) = *(undefined1 *)(puVar2 + 3);
    puVar3 = puVar3 + 5;
  }
  return;
}
