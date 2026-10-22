/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C462D2B94AB6E46D777386B33000882A1DD1EE6BE5428D7534928CC4E8631773
 * Entry: 0x000f2c20, Ghidra index: 3031, label: FUN_000f2c20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000f2c20(int *param_1)

{
  int in_ECX;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(in_ECX + 4);
  iVar2 = -1;
  if (iVar1 != *(int *)(in_ECX + 8)) {
    iVar2 = 0;
    while ((*(int *)(iVar1 + 0x20) != *param_1 && (*(int *)(iVar1 + 0x24) != *param_1))) {
      iVar1 = iVar1 + 0x3c;
      iVar2 = iVar2 + 1;
      if (iVar1 == *(int *)(in_ECX + 8)) {
        return -1;
      }
    }
  }
  return iVar2;
}
