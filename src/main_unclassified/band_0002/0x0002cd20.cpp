/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 23B22AF89FFD7274D5A48B696862FA7FD4D83E554AE29D4A0490569399E3BDCC
 * Entry: 0x0002cd20, Ghidra index: 297, label: FUN_0002cd20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint32_t FUN_0001ba10(uint32_t unaff_ESI);
extern int FUN_00054c40(int param_1,uint param_2,undefined4 param_3,int param_4);
extern void FUN_0015b7c0(void);
extern undefined4 FUN_0003a920(undefined4 param_1,int param_2,undefined4 *param_3);
extern void FUN_000124f0(float param_1, int32_t in_ECX);

undefined4 FUN_0002cd20(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 in_EDX;
  int unaff_EDI;
  undefined1 local_4 [4];
  
  iVar1 = *(int *)(*(int *)(unaff_EDI + 0x3f8) + 4 + *(int *)(unaff_EDI + 0x58) * 0xc);
  piVar4 = (int *)FUN_00023010(local_4,in_EDX);
  if ((*piVar4 == *(int *)(iVar1 + 0xc)) ||
     (uVar5 = *piVar4 - *(int *)(iVar1 + 8) >> 2, (int)uVar5 < 0)) {
    return 0x59;
  }
  iVar1 = *(int *)(unaff_EDI + 0x3f8);
  iVar2 = *(int *)(unaff_EDI + 0x58);
  puVar6 = (undefined4 *)FUN_0001ba10();
  uVar7 = FUN_00054c40(iVar1 + iVar2 * 0xc,uVar5,*puVar6,param_1);
  iVar1 = *(int *)(*(int *)(unaff_EDI + 0x3f8) + 8 + *(int *)(unaff_EDI + 0x58) * 0xc);
  if ((*(int *)(iVar1 + 4) == 0) ||
     ((uint)(*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4) >> 2) <= uVar5)) {
    FUN_0015b7c0(iVar1);
  }
  cVar3 = FUN_0003a920(unaff_EDI,uVar7,&param_1);
  if (cVar3 != '\0') {
    if (((*(byte *)(unaff_EDI + 0x3a0) & 1) != 0) && (*(float *)(unaff_EDI + 0x39c) != 0.0)) {
      FUN_000124f0(param_1);
      return uVar7;
    }
    if (((*(byte *)(unaff_EDI + 0x3b0) & 1) != 0) && (*(float *)(unaff_EDI + 0x3ac) != 0.0)) {
      FUN_000124f0(param_1);
    }
  }
  return uVar7;
}
