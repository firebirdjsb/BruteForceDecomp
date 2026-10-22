/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5A9D5103A66C917F66C1F2739F7B9B3EB0ED66BBA08361125A8B17AD90B8F7D8
 * Entry: 0x00032b90, Ghidra index: 330, label: FUN_00032b90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00032b90(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x8f4) != 0) {
    if ((*(int *)(in_ECX + 0x8f8) - *(int *)(in_ECX + 0x8f4)) / 0x18 != 0) {
      cVar1 = FUN_00026d80(in_ECX + -0x40,in_ECX + 0x8f0,in_ECX + 0x438,0,0x40000000);
      if (cVar1 != '\0') {
        FUN_000255d0(param_1,0);
        FUN_0004d970(in_ECX + -0x40,param_1,*(undefined4 *)(in_ECX + 0x5f8),1,1);
        return 1;
      }
      iVar2 = FUN_00055aa0();
      *(uint *)(iVar2 + 0x88) = *(uint *)(iVar2 + 0x88) | 2;
    }
  }
  return 2;
}
