/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F69EA1C72372970064118FCAE1ACDD3045F67B99BCAE4323A45C200BEA0BCAB1
 * Entry: 0x00154290, Ghidra index: 4432, label: FUN_00154290
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00154290(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int unaff_ESI;
  
  puVar3 = (undefined4 *)(unaff_ESI + 4);
  iVar5 = 3;
  puVar4 = in_EAX;
  do {
    uVar1 = puVar3[1];
    uVar2 = *puVar3;
    *puVar4 = puVar3[-1];
    *(undefined4 *)(((int)in_EAX - unaff_ESI) + (int)puVar3) = uVar2;
    puVar4[2] = uVar1;
    puVar4 = puVar4 + 3;
    puVar3 = puVar3 + 3;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  uVar1 = *(undefined4 *)(unaff_ESI + 0x2c);
  uVar2 = *(undefined4 *)(unaff_ESI + 0x28);
  in_EAX[9] = *(undefined4 *)(unaff_ESI + 0x24);
  in_EAX[10] = uVar2;
  in_EAX[0xb] = uVar1;
  uVar1 = *(undefined4 *)(unaff_ESI + 0x34);
  uVar2 = *(undefined4 *)(unaff_ESI + 0x38);
  in_EAX[0xc] = *(undefined4 *)(unaff_ESI + 0x30);
  in_EAX[0xd] = uVar1;
  in_EAX[0xe] = uVar2;
  uVar1 = *(undefined4 *)(unaff_ESI + 0x40);
  uVar2 = *(undefined4 *)(unaff_ESI + 0x44);
  in_EAX[0xf] = *(undefined4 *)(unaff_ESI + 0x3c);
  in_EAX[0x10] = uVar1;
  in_EAX[0x11] = uVar2;
  in_EAX[0x12] = *(undefined4 *)(unaff_ESI + 0x48);
  in_EAX[0x13] = *(undefined4 *)(unaff_ESI + 0x4c);
  in_EAX[0x14] = *(undefined4 *)(unaff_ESI + 0x50);
  return;
}
