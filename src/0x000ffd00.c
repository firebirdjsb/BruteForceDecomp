/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BD2E86064B489D0069FF549852FE4112F70BB4CBDE240B9CB2C693A5E44F8588
 * Entry: 0x000ffd00, Ghidra index: 3206, label: FUN_000ffd00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x000ffd35) */
/* WARNING: Removing unreachable block (ram,0x000ffd3c) */
/* WARNING: Removing unreachable block (ram,0x000ffd46) */

void FUN_000ffd00(void)

{
  int *piVar1;
  int unaff_EBX;
  int iVar2;
  int iVar3;
  
  if (*(int *)(unaff_EBX + 0x74) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(unaff_EBX + 0x78) - *(int *)(unaff_EBX + 0x74) >> 2;
  }
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      piVar1 = *(int **)(*(int *)(unaff_EBX + 0x74) + iVar3 * 4);
      *(byte *)(piVar1 + 10) = *(byte *)(piVar1 + 10) & 0xfe;
      (**(code **)(*piVar1 + 0x20))();
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  return;
}
