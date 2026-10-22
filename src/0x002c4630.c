/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BE384502EADE9AF961F46672BFA42D0B7987542D291DC161C56E95009967C3EE
 * Entry: 0x002c4630, Ghidra index: 10056, label: FUN_002c4630
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c4630(undefined4 param_1)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  uint uVar3;
  undefined4 *unaff_ESI;
  
  unaff_ESI[1] = 0;
  unaff_ESI[3] = 0;
  unaff_ESI[4] = 0;
  unaff_ESI[5] = 0;
  *unaff_ESI = 0x3089705f;
  *(undefined2 *)((int)unaff_ESI + 0x26) = 0;
  *(undefined2 *)(unaff_ESI + 0xb) = 0;
  *(undefined2 *)(unaff_ESI + 9) = 0x200;
  unaff_ESI[10] = unaff_ESI + 0xc;
  unaff_ESI[7] = *(undefined4 *)(in_EAX + 4);
  unaff_ESI[8] = param_1;
  iVar2 = (int)*(short *)(in_EAX + 0x4a) - (int)*(short *)(in_EAX + 0x4c);
  iVar1 = *(int *)(*(int *)(in_EAX + 4) + 0xa8);
  unaff_ESI[1] = iVar2;
  uVar3 = iVar2 + 3U & 0xfffffffc;
  unaff_ESI[2] = uVar3;
  iVar2 = *(int *)(iVar1 + 8);
  uVar3 = iVar2 + unaff_ESI[1] * uVar3 * 4 + 0x2b & 0xffffffe0;
  if (uVar3 < *(uint *)(iVar1 + 0xc)) {
    *(uint *)(iVar1 + 8) = uVar3;
  }
  else {
    iVar2 = FUN_002bbe20();
  }
  unaff_ESI[3] = iVar2;
  iVar2 = *(int *)(iVar1 + 8);
  uVar3 = iVar2 + 0x1f + unaff_ESI[2] * 4 & 0xffffffe0;
  if (uVar3 < *(uint *)(iVar1 + 0xc)) {
    *(uint *)(iVar1 + 8) = uVar3;
  }
  else {
    iVar2 = FUN_002bbe20();
  }
  unaff_ESI[4] = iVar2;
  iVar2 = *(int *)(iVar1 + 8);
  uVar3 = iVar2 + 0x1f + unaff_ESI[2] * 4 & 0xffffffe0;
  if (uVar3 < *(uint *)(iVar1 + 0xc)) {
    *(uint *)(iVar1 + 8) = uVar3;
  }
  else {
    iVar2 = FUN_002bbe20();
  }
  unaff_ESI[5] = iVar2;
  unaff_ESI[3] = unaff_ESI[3] + 0xc & 0xfffffff0;
  return;
}
