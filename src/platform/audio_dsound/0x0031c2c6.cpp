/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0F0149C582584C9A28B83962FE64C2358824219F9826C53B65637604298C4D6F
 * Entry: 0x0031c2c6, Ghidra index: 12329, label: FUN_0031c2c6
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0031c2c6(undefined4 param_1,uint param_2)

{
  ushort *puVar1;
  byte *pbVar2;
  int iVar3;
  int in_ECX;
  
  FUN_003118f0();
  if ((*(uint *)(in_ECX + 0xc) & 2) != 0) {
    *(char *)(in_ECX + 0x24) = *(char *)(in_ECX + 0x24) + -1;
    *(uint *)(in_ECX + 0xc) = *(uint *)(in_ECX + 0xc) & 0xfffffffd;
  }
  iVar3 = (uint)(*(char *)(in_ECX + 0x25) + *(char *)(in_ECX + 0x24) & 0x1f) * 8;
  *(undefined4 *)(iVar3 + *(int *)(in_ECX + 0x18)) = param_1;
  *(short *)(*(int *)(in_ECX + 0x18) + 4 + iVar3) = (short)(param_2 >> 1);
  puVar1 = (ushort *)(*(int *)(in_ECX + 0x18) + iVar3 + 6);
  *puVar1 = *puVar1 & 0xc000;
  pbVar2 = (byte *)(*(int *)(in_ECX + 0x18) + iVar3 + 7);
  *pbVar2 = *pbVar2 | 0x40;
  pbVar2 = (byte *)(*(int *)(in_ECX + 0x18) + iVar3 + 7);
  *pbVar2 = *pbVar2 | 0x80;
  FUN_0031c161(*(undefined1 *)(in_ECX + 0x25),*(char *)(in_ECX + 0x24) + '\x01',0,1);
  FUN_00311923();
  return;
}
