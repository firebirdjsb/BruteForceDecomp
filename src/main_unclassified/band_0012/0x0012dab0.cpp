/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 55B79F4DBE88941DF74A695A764E306F3BECEC0BBDFB9F3D3F150D0DD6091CD6
 * Entry: 0x0012dab0, Ghidra index: 3802, label: FUN_0012dab0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0012dab0(int param_1,undefined4 *param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_EAX;
  byte *unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0xc) != 0) {
    FUN_0008f6a0(0);
  }
  unaff_EDI[1] = 0;
  if ((param_1 != 0) && (piVar2 = *(int **)(param_1 + 0x9c), piVar2 != (int *)0x0)) {
    if (*piVar2 == 0) {
      iVar5 = piVar2[1];
      iVar6 = *(int *)(*(int *)(iVar5 + 0xc) + 4);
      if ((iVar6 == 2) || (iVar6 == 0x1a)) {
        unaff_EDI[1] = 1;
        if (*(int *)(unaff_EDI + 0xc) != iVar5) {
          FUN_0008f6a0(iVar5);
        }
        uVar3 = in_EAX[2];
        uVar4 = in_EAX[1];
        *(undefined4 *)(unaff_EDI + 0x10) = *in_EAX;
        *(undefined4 *)(unaff_EDI + 0x14) = uVar4;
        *(undefined4 *)(unaff_EDI + 0x18) = uVar3;
        bVar1 = *unaff_EDI;
        if (*(int *)(*(int *)(unaff_EDI + 0xc) + 0x44) == 3) {
          *unaff_EDI = *unaff_EDI ^ ((byte)((uint)*param_2 >> 0x1e) ^ bVar1) & 1;
        }
        else {
          *unaff_EDI = bVar1 ^ (*(int *)(*(int *)(unaff_EDI + 0xc) + 0x44) == 1 ^ bVar1) & 1;
        }
        *(uint *)(unaff_EDI + 4) = *(byte *)((int)param_2 + 3) & 0x1f;
        *unaff_EDI = *unaff_EDI ^ ((byte)((uint)*param_2 >> 0x1d) << 1 ^ *unaff_EDI) & 2;
      }
    }
    else if (*piVar2 == 2) {
      unaff_EDI[1] = 2;
      *unaff_EDI = *unaff_EDI ^ ((byte)((uint)*param_2 >> 0x1e) ^ *unaff_EDI) & 1;
      uVar3 = in_EAX[2];
      uVar4 = in_EAX[1];
      *(undefined4 *)(unaff_EDI + 0x10) = *in_EAX;
      *(undefined4 *)(unaff_EDI + 0x14) = uVar4;
      *(undefined4 *)(unaff_EDI + 0x18) = uVar3;
      *(uint *)(unaff_EDI + 4) = *(byte *)((int)param_2 + 3) & 0x1f;
      *unaff_EDI = *unaff_EDI ^ ((byte)((uint)*param_2 >> 0x1d) << 1 ^ *unaff_EDI) & 2;
      return;
    }
  }
  return;
}
