/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8241B6732A7C7F6EDD5EED1E00E4DB22FDAD37CED52763861EFE50BA2323EFEA
 * Entry: 0x001554d0, Ghidra index: 4466, label: FUN_001554d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001554d0(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  uint in_ECX;
  uint uVar5;
  
  *(undefined4 *)(in_ECX + 8) = param_1;
  *(undefined4 *)(in_ECX + 0xc) = param_2;
  FUN_000dfd20(param_1,in_ECX);
  uVar3 = FUN_000d06f0(in_ECX);
  *(undefined2 *)(in_ECX + 0x20) = uVar3;
  bVar1 = *(byte *)(in_ECX + 0x26);
  *(byte *)(in_ECX + 0x26) = bVar1 | 8;
  uVar5 = -(uint)((bVar1 & 0x40) != 0) & in_ECX;
  if ((((uVar5 == 0) ||
       (((iVar2 = *(int *)(*(int *)(in_ECX + 0xc) + 4), iVar2 != 2 && (iVar2 != 0x1a)) &&
        (iVar2 != 0x1f)))) || (*(char *)(uVar5 + 0x79) != '\0')) &&
     (((bVar1 & 0x10) == 0 && (*(int *)(in_ECX + 8) != 0)))) {
    puVar4 = (undefined4 *)FUN_000e0350(*(int *)(in_ECX + 8),&param_1,in_ECX);
    *(undefined4 *)(in_ECX + 0x14) = *puVar4;
    *(byte *)(in_ECX + 0x26) = *(byte *)(in_ECX + 0x26) | 0x10;
  }
  return;
}
