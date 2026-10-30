/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 43C8076D1C73521C86A057679FE99C2B96701FE8CA3EFEE30F213DEF7CEF0B6B
 * Entry: 0x00237520, Ghidra index: 7850, label: FUN_00237520
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00237520(void)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *in_ECX;
  undefined4 *puVar5;
  uint *unaff_ESI;
  
  uVar2 = *unaff_ESI;
  uVar3 = unaff_ESI[2];
  sVar1 = *(short *)((int)unaff_ESI + 0x12);
  in_ECX[2] = 0;
  for (puVar5 = (undefined4 *)unaff_ESI[1];
      ((undefined4 *)*unaff_ESI <= puVar5 && (puVar5 < (undefined4 *)unaff_ESI[2]));
      puVar5 = (undefined4 *)*puVar5) {
    in_ECX[2] = in_ECX[2] + 1;
  }
  *in_ECX = (int)*(short *)((int)unaff_ESI + 0x12) * in_ECX[2];
  iVar4 = (int)(uVar3 - uVar2) / (int)sVar1 - in_ECX[2];
  in_ECX[3] = (int)*(short *)((int)unaff_ESI + 0x12);
  in_ECX[4] = iVar4;
  in_ECX[1] = *(short *)((int)unaff_ESI + 0x12) * iVar4;
  in_ECX[5] = unaff_ESI[6];
  in_ECX[6] = -1;
  in_ECX[7] = -1;
  return;
}
