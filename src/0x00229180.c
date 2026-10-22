/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 70467563178961A95B68E39E2B274802C98554F0D0C6F4738EAC3EDA02B24E51
 * Entry: 0x00229180, Ghidra index: 7664, label: FUN_00229180
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00229180(void)

{
  undefined4 *puVar1;
  int unaff_ESI;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(unaff_ESI + 8)) {
    puVar1 = (undefined4 *)(*(int *)(unaff_ESI + 0x24) + 4);
    do {
      FUN_000db3e0(*puVar1);
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 3;
    } while (iVar2 < *(int *)(unaff_ESI + 8));
  }
  iVar2 = 0;
  if (0 < *(int *)(unaff_ESI + 4)) {
    puVar1 = (undefined4 *)(*(int *)(unaff_ESI + 0x28) + 4);
    do {
      FUN_000db3e0(*puVar1);
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 3;
    } while (iVar2 < *(int *)(unaff_ESI + 4));
  }
  return;
}
