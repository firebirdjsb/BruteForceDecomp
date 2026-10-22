/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1D9E55BFDA803D34EEF418CA889E4872D04381320144CC98F906FCF7E7E58A15
 * Entry: 0x0011e000, Ghidra index: 3624, label: FUN_0011e000
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0011e000(void)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int unaff_ESI;
  bool bVar5;
  
  bVar2 = *(byte *)(*(int *)(unaff_ESI + 0x1fc) + 0x250) >> 6 & 1;
  if (*(int *)(unaff_ESI + 0x214) != 0) {
    bVar5 = bVar2 == 0;
    if (!bVar5) goto LAB_0011e026;
    bVar2 = *(byte *)(*(int *)(unaff_ESI + 0x214) + 0x3d) & 1;
  }
  bVar5 = bVar2 == 0;
LAB_0011e026:
  bVar2 = *(byte *)(unaff_ESI + 0x260) ^ (bVar5 << 3 ^ *(byte *)(unaff_ESI + 0x260)) & 8;
  *(byte *)(unaff_ESI + 0x260) = bVar2;
  if ((bVar2 & 8) == 0) {
    *(undefined4 *)(unaff_ESI + 0x7dc) = 0;
  }
  iVar1 = *(int *)(unaff_ESI + 0x2e8);
  cVar3 = (**(code **)(*(int *)(iVar1 + 0x144) + 0x20))();
  if ((((cVar3 != '\0') && (iVar1 = *(int *)(iVar1 + 0x164), iVar1 != 0)) &&
      (*(int *)(*(int *)(iVar1 + 0xc) + 4) == 0x14)) && (iVar1 != 0)) {
    if ((*(byte *)(unaff_ESI + 0x260) & 8) == 0) {
      bVar2 = *(byte *)(iVar1 + 0x224) & 0xfd;
    }
    else {
      if ((*(byte *)(iVar1 + 0x224) & 2) == 0) {
        *(byte *)(iVar1 + 0x224) = *(byte *)(iVar1 + 0x224) & 0xfb;
      }
      bVar2 = *(byte *)(iVar1 + 0x224) | 2;
    }
    *(byte *)(iVar1 + 0x224) = bVar2;
  }
  iVar1 = *(int *)(unaff_ESI + 0x2e8);
  iVar4 = (**(code **)(*(int *)(iVar1 + 0x178) + 0x20))();
  if (((char)iVar4 != '\0') && (iVar4 = *(int *)(iVar1 + 0x198), iVar4 != 0)) {
    if ((*(byte *)(unaff_ESI + 0x260) & 8) != 0) {
      if ((*(byte *)(iVar4 + 0x224) & 2) == 0) {
        *(byte *)(iVar4 + 0x224) = *(byte *)(iVar4 + 0x224) & 0xfb;
      }
      *(byte *)(iVar4 + 0x224) = *(byte *)(iVar4 + 0x224) | 2;
      return CONCAT31((int3)((uint)iVar4 >> 8),*(byte *)(unaff_ESI + 0x260) >> 3) & 0xffffff01;
    }
    *(byte *)(iVar4 + 0x224) = *(byte *)(iVar4 + 0x224) & 0xfd;
  }
  return CONCAT31((int3)((uint)iVar4 >> 8),*(byte *)(unaff_ESI + 0x260) >> 3) & 0xffffff01;
}
