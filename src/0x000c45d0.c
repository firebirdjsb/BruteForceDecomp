/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2BCC4325334AD328B1BE3250E6831687CBA11E1484921D877C85536D1DE37DCD
 * Entry: 0x000c45d0, Ghidra index: 2406, label: FUN_000c45d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000c45d0(undefined4 param_1)

{
  undefined2 uVar1;
  char cVar2;
  int iVar3;
  int *in_ECX;
  
  if (in_ECX[10] == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = in_ECX[10] + -0x2c;
  }
  iVar3 = (in_ECX[0xd] + (*(byte *)(*(int *)(iVar3 + 100) + 0x74) & 1) * 4) * 0x18 + 0x3c8ee8;
  uVar1 = *(undefined2 *)(iVar3 + in_ECX[0xe] * 8);
  *(undefined2 *)((int)in_ECX + 6) = *(undefined2 *)(iVar3 + in_ECX[0xe] * 8 + 4);
  *(undefined2 *)(in_ECX + 1) = uVar1;
  cVar2 = (**(code **)(*in_ECX + 0x30))();
  *(byte *)((int)in_ECX + 0x13) =
       *(byte *)((int)in_ECX + 0x13) ^ (*(byte *)((int)in_ECX + 0x13) ^ 1U - (cVar2 != '\0')) & 1;
  FUN_000ba730(param_1);
  return;
}
