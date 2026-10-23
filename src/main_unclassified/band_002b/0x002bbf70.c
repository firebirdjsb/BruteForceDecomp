/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F7EEE108E08F6241462A6347608D9802F905A750115F1BAAC2A5CA64D86B8C2F
 * Entry: 0x002bbf70, Ghidra index: 9919, label: FUN_002bbf70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002bbf70(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  undefined4 *unaff_ESI;
  float10 fVar5;
  
  iVar1 = *(int *)(unaff_ESI[0x1a] + 0x14);
  uVar2 = *(undefined4 *)(iVar1 + 0x108);
  uVar3 = *(undefined4 *)(iVar1 + 0x10c);
  dVar4 = *(double *)(iVar1 + 0x108);
  unaff_ESI[0x18] = *(undefined4 *)(iVar1 + 0x120);
  iVar1 = *(int *)(unaff_ESI[0x1a] + 0x90);
  fVar5 = (float10)dVar4;
  if (fVar5 - (float10)*(double *)(iVar1 + 0x70) == (float10)0.0) {
    *unaff_ESI = *(undefined4 *)(iVar1 + 0xdc);
    unaff_ESI[1] = *(undefined4 *)(iVar1 + 0xe0);
    unaff_ESI[2] = *(undefined4 *)(iVar1 + 0xe4);
    unaff_ESI[3] = *(undefined4 *)(iVar1 + 0xe8);
    uVar2 = *(undefined4 *)(iVar1 + 0xc4);
    uVar3 = *(undefined4 *)(iVar1 + 0xbc);
    unaff_ESI[0x11] = *(undefined4 *)(iVar1 + 0xc0);
    unaff_ESI[0x10] = uVar3;
    unaff_ESI[0x12] = uVar2;
    uVar2 = *(undefined4 *)(iVar1 + 0xc0);
    uVar3 = *(undefined4 *)(iVar1 + 0xc4);
    unaff_ESI[0x14] = *(undefined4 *)(iVar1 + 0xbc);
  }
  else {
    FUN_002b4370(unaff_ESI,iVar1 + 0xdc,iVar1 + 0xec,
                 (float)((fVar5 - (float10)*(double *)(iVar1 + 0x70)) *
                        (float10)*(float *)(iVar1 + 0x78)));
    FUN_002b2b10(*(undefined4 *)(unaff_ESI[0x1a] + 0x90),unaff_ESI + 0x10,uVar2,uVar3);
    uVar2 = unaff_ESI[0x11];
    uVar3 = unaff_ESI[0x12];
    unaff_ESI[0x14] = unaff_ESI[0x10];
  }
  unaff_ESI[0x15] = uVar2;
  unaff_ESI[0x16] = uVar3;
  FUN_002b4100();
  if ((*(uint *)(unaff_ESI[0x1a] + 0x70) & 0xc00) == 0) {
    FUN_00150930();
  }
  if (*(int *)(unaff_ESI[0x1a] + 0x28) != 0) {
    FUN_002b3d00();
    FUN_002b4100();
    return;
  }
  return;
}
