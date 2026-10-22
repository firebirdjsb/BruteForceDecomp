/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 50F9AACBDC87A10F73093C9D61A781E9B09CBA5E31E711F240169F31AD78CB6B
 * Entry: 0x00074c20, Ghidra index: 1334, label: FUN_00074c20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00074c20(void)

{
  int *piVar1;
  int in_ECX;
  int unaff_EBX;
  int local_8;
  int local_4;
  
  if (*(int *)(unaff_EBX + 4) != 0) {
    local_8 = FUN_00075f00((uint *)(in_ECX + 4));
    if ((local_8 == *(int *)(unaff_EBX + 0x28)) ||
       (*(uint *)(in_ECX + 4) < *(uint *)(local_8 + 0xc))) {
      local_4 = *(int *)(unaff_EBX + 0x28);
      piVar1 = &local_4;
    }
    else {
      piVar1 = &local_8;
    }
    if (*piVar1 != *(int *)(unaff_EBX + 0x28)) {
      FUN_000750a0(unaff_EBX + 0x24,&local_4,*piVar1);
    }
  }
  return;
}
