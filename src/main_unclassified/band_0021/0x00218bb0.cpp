/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C5687124FF08905F9200D43040F25B1B982A492CED533650554FBFBCC7832F1C
 * Entry: 0x00218bb0, Ghidra index: 7481, label: FUN_00218bb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00218bb0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  ushort uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int unaff_ESI;
  
  puVar4 = (undefined4 *)(unaff_ESI + 4);
  iVar6 = 3;
  puVar5 = in_EAX;
  do {
    uVar1 = puVar4[1];
    uVar2 = *puVar4;
    *puVar5 = puVar4[-1];
    *(undefined4 *)(((int)in_EAX - unaff_ESI) + (int)puVar4) = uVar2;
    puVar5[2] = uVar1;
    puVar5 = puVar5 + 3;
    puVar4 = puVar4 + 3;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  in_EAX[9] = *(undefined4 *)(unaff_ESI + 0x24);
  in_EAX[10] = *(undefined4 *)(unaff_ESI + 0x28);
  in_EAX[0xb] = *(undefined4 *)(unaff_ESI + 0x2c);
  in_EAX[0xc] = *(undefined4 *)(unaff_ESI + 0x30);
  *(undefined2 *)(in_EAX + 0xd) = *(undefined2 *)(unaff_ESI + 0x34);
  *(ushort *)((int)in_EAX + 0x36) =
       *(ushort *)((int)in_EAX + 0x36) ^
       (*(byte *)((int)in_EAX + 0x36) ^ *(byte *)(unaff_ESI + 0x36)) & 0x1f;
  uVar3 = (*(ushort *)(unaff_ESI + 0x36) ^ *(ushort *)((int)in_EAX + 0x36)) & 0x3e0 ^
          *(ushort *)((int)in_EAX + 0x36);
  *(ushort *)((int)in_EAX + 0x36) = uVar3;
  *(ushort *)((int)in_EAX + 0x36) = (*(ushort *)(unaff_ESI + 0x36) ^ uVar3) & 0x7c00 ^ uVar3;
  *(undefined2 *)((int)in_EAX + 0x36) = *(undefined2 *)(unaff_ESI + 0x36);
  return;
}
