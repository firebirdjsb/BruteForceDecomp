/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 35B5D179D122B373A0F15CA9571A94161626F48A392B328D827A31D63B30437E
 * Entry: 0x0011dfa0, Ghidra index: 3623, label: FUN_0011dfa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0011dfa0(void)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *in_EAX;
  int iVar5;
  undefined4 *unaff_ESI;
  
  in_EAX[0x94] = in_EAX[0x94] | 1;
  iVar5 = (**(code **)(*in_EAX + 0x40))();
  iVar2 = in_EAX[0x93];
  bVar1 = *(byte *)(unaff_ESI + 4);
  *(byte *)(unaff_ESI + 4) = bVar1 | 1;
  uVar3 = *(undefined4 *)(iVar5 + 0x2c);
  uVar4 = *(undefined4 *)(iVar5 + 0x28);
  *unaff_ESI = *(undefined4 *)(iVar5 + 0x24);
  unaff_ESI[2] = uVar3;
  unaff_ESI[3] = iVar2;
  unaff_ESI[1] = uVar4;
  *(byte *)(unaff_ESI + 4) = bVar1 & 0xfd | 1;
  return;
}
