/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CB4C2E15BDCDB2F8B6115F5EFA498E03718B4926E359F56C6EE0CDEFCCC65D3D
 * Entry: 0x002fe98a, Ghidra index: 11039, label: FUN_002fe98a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002fe98a(uint *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *in_EDX;
  byte *pbVar4;
  byte *unaff_EDI;
  bool bVar5;
  
  iVar3 = *(int *)(unaff_EDI + 4);
  if ((iVar3 != 0) && (pbVar4 = (byte *)(iVar3 + 8), *pbVar4 != 0)) {
    if (iVar3 != *(int *)(in_EDX + 4)) {
      pbVar2 = (byte *)(*(int *)(in_EDX + 4) + 8);
      do {
        bVar1 = *pbVar4;
        bVar5 = bVar1 < *pbVar2;
        if (bVar1 != *pbVar2) {
LAB_002fe9c7:
          iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
          goto LAB_002fe9cc;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar5 = bVar1 < pbVar2[1];
        if (bVar1 != pbVar2[1]) goto LAB_002fe9c7;
        pbVar4 = pbVar4 + 2;
        pbVar2 = pbVar2 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_002fe9cc:
      if (iVar3 != 0) {
        return 0;
      }
    }
    if (((((*in_EDX & 2) != 0) && ((*unaff_EDI & 8) == 0)) ||
        (((*param_1 & 1) != 0 && ((*unaff_EDI & 1) == 0)))) ||
       (((*param_1 & 2) != 0 && ((*unaff_EDI & 2) == 0)))) {
      return 0;
    }
  }
  return 1;
}
