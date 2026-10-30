/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C11D9415B619D25C4934285EEC89FB4289D99358526882976C71C138076CAB92
 * Entry: 0x0006e940, Ghidra index: 1245, label: FUN_0006e940
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0006e940(void)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int in_EDX;
  int iVar4;
  
  if (-1 < (char)(*(char *)(in_EDX + 0x124) << 1)) {
    iVar3 = 0x12;
    do {
      iVar2 = *(int *)(in_EDX + 0x120);
      iVar4 = iVar3 + -0x12;
      pbVar1 = (byte *)(iVar2 + 1 + iVar4);
      *pbVar1 = *pbVar1 | 0x50;
      *(undefined2 *)(iVar2 + 2 + iVar4) = 0;
      *(undefined2 *)(iVar2 + 4 + iVar4) = 0;
      iVar2 = *(int *)(in_EDX + 0x120);
      pbVar1 = (byte *)(iVar2 + 7 + iVar4);
      *pbVar1 = *pbVar1 | 0x50;
      *(undefined2 *)(iVar2 + 8 + iVar4) = 0;
      *(undefined2 *)(iVar2 + 10 + iVar4) = 0;
      iVar4 = *(int *)(in_EDX + 0x120);
      pbVar1 = (byte *)(iVar4 + -5 + iVar3);
      *pbVar1 = *pbVar1 | 0x50;
      iVar4 = iVar4 + -6 + iVar3;
      *(undefined2 *)(iVar4 + 2) = 0;
      *(undefined2 *)(iVar4 + 4) = 0;
      iVar4 = *(int *)(in_EDX + 0x120);
      pbVar1 = (byte *)(iVar4 + 1 + iVar3);
      *pbVar1 = *pbVar1 | 0x50;
      iVar4 = iVar4 + iVar3;
      *(undefined2 *)(iVar4 + 2) = 0;
      *(undefined2 *)(iVar4 + 4) = 0;
      iVar4 = *(int *)(in_EDX + 0x120);
      pbVar1 = (byte *)(iVar4 + 7 + iVar3);
      *pbVar1 = *pbVar1 | 0x50;
      iVar4 = iVar4 + 6 + iVar3;
      *(undefined2 *)(iVar4 + 2) = 0;
      *(undefined2 *)(iVar4 + 4) = 0;
      iVar4 = *(int *)(in_EDX + 0x120);
      pbVar1 = (byte *)(iVar4 + 0xd + iVar3);
      *pbVar1 = *pbVar1 | 0x50;
      iVar4 = iVar4 + 0xc + iVar3;
      *(undefined2 *)(iVar4 + 2) = 0;
      *(undefined2 *)(iVar4 + 4) = 0;
      iVar4 = *(int *)(in_EDX + 0x120);
      pbVar1 = (byte *)(iVar4 + 0x13 + iVar3);
      *pbVar1 = *pbVar1 | 0x50;
      iVar4 = iVar4 + 0x12 + iVar3;
      *(undefined2 *)(iVar4 + 2) = 0;
      *(undefined2 *)(iVar4 + 4) = 0;
      iVar4 = *(int *)(in_EDX + 0x120);
      pbVar1 = (byte *)(iVar4 + 0x19 + iVar3);
      *pbVar1 = *pbVar1 | 0x50;
      iVar4 = iVar4 + 0x18 + iVar3;
      *(undefined2 *)(iVar4 + 2) = 0;
      *(undefined2 *)(iVar4 + 4) = 0;
      iVar4 = *(int *)(in_EDX + 0x120);
      pbVar1 = (byte *)(iVar4 + 0x1f + iVar3);
      *pbVar1 = *pbVar1 | 0x50;
      iVar4 = iVar4 + 0x1e + iVar3;
      iVar3 = iVar3 + 0x36;
      *(undefined2 *)(iVar4 + 2) = 0;
      *(undefined2 *)(iVar4 + 4) = 0;
    } while (iVar3 < 0x6c12);
  }
  return;
}
