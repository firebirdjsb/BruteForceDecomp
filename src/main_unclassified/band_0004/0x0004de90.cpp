/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0C1B4580A101B640F9BB9C7D64F822C717E5589BC28A1C402EEA69BDC8FA9086
 * Entry: 0x0004de90, Ghidra index: 661, label: FUN_0004de90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0004de90(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = FUN_000120f0();
  if (iVar3 != 0) {
    FUN_0004dd70();
    iVar1 = *(int *)(iVar3 + 0x2e8);
    cVar2 = (**(code **)(*(int *)(iVar1 + 0x144) + 0x20))();
    if ((((cVar2 != '\0') && (iVar1 = *(int *)(iVar1 + 0x164), iVar1 != 0)) &&
        (*(int *)(*(int *)(iVar1 + 0xc) + 4) == 0x14)) && (iVar1 != 0)) {
      (**(code **)(*(int *)(*(int *)(iVar3 + 0x2e8) + 0x144) + 0x20))();
      FUN_0022dc60();
      iVar3 = *(int *)(iVar3 + 0x2e8);
      cVar2 = (**(code **)(*(int *)(iVar3 + 0x144) + 0x20))();
      if (((cVar2 == '\0') || (iVar3 = *(int *)(iVar3 + 0x164), iVar3 == 0)) ||
         (*(int *)(*(int *)(iVar3 + 0xc) + 4) != 0x14)) {
        iVar3 = 0;
      }
      *(byte *)(iVar3 + 0x224) = *(byte *)(iVar3 + 0x224) | 4;
    }
  }
  return;
}
