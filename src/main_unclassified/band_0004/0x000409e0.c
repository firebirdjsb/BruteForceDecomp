/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F3A4D18E91F1BCB75AFC87C6EDB1E8FAF8DB3E2D747535A4F8D486BA26217D5B
 * Entry: 0x000409e0, Ghidra index: 484, label: FUN_000409e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000409e0(undefined4 param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *in_ECX;
  
  if (((((*(byte *)(in_ECX + 0x43) & 1) == 0) ||
       ((float)in_ECX[0x42] < 0.6 == ((float)in_ECX[0x42] == 0.6))) ||
      ((*(byte *)(in_ECX + 0x43) & 1) == 0)) || ((float)in_ECX[0x42] <= 0.0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  iVar3 = FUN_000120f0();
  if (iVar3 != 0) {
    iVar3 = FUN_000120f0();
    iVar3 = *(int *)(iVar3 + 0x2e8);
    cVar2 = (**(code **)(*(int *)(iVar3 + 0x144) + 0x20))();
    if (((cVar2 != '\0') && (iVar3 = *(int *)(iVar3 + 0x164), iVar3 != 0)) &&
       ((*(int *)(*(int *)(iVar3 + 0xc) + 4) == 0x14 &&
        ((iVar3 != 0 && (**(int **)(iVar3 + 0x228) != 7)))))) {
      if (bVar1) {
        *(byte *)(iVar3 + 0x224) = *(byte *)(iVar3 + 0x224) | 4;
      }
      else {
        FUN_0022dc00();
      }
    }
  }
  (**(code **)(*in_ECX + 0x370))(param_1);
  return;
}
