/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 57D3D0387E22CB516BD61189666F87EB9F974B142C3878681BB99B5BA5E35D99
 * Entry: 0x0008e030, Ghidra index: 1727, label: FUN_0008e030
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern float10 FUN_0008e620(undefined4 param_1,undefined4 param_2,int *param_3);

float10 FUN_0008e030(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  uint *unaff_EBX;
  int unaff_ESI;
  undefined4 uVar3;
  float10 fVar4;
  
  fVar4 = (float10)0.0;
  *param_2 = 0;
  uVar2 = *unaff_EBX;
  if ((((-1 < (int)uVar2) && (*(int *)(unaff_ESI + 0x2c) != 0)) &&
      (uVar2 < (uint)((*(int *)(unaff_ESI + 0x30) - *(int *)(unaff_ESI + 0x2c)) / 0x28))) &&
     (iVar1 = *(int *)(unaff_ESI + 0x2c) + 4 + uVar2 * 0x28, iVar1 != 0)) {
    fVar4 = (float10)FUN_0008e620(unaff_ESI,param_1,iVar1);
    uVar2 = *unaff_EBX;
    uVar3 = 0;
    *unaff_EBX = uVar2 + 1;
    if (((-1 < (int)uVar2) && (*(int *)(unaff_ESI + 0x2c) != 0)) &&
       (uVar2 < (uint)((*(int *)(unaff_ESI + 0x30) - *(int *)(unaff_ESI + 0x2c)) / 0x28))) {
      uVar3 = *(undefined4 *)(*(int *)(unaff_ESI + 0x2c) + uVar2 * 0x28);
    }
    *param_2 = uVar3;
  }
  return fVar4;
}
