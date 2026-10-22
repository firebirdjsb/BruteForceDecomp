/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FBC7FCCA327E970ED8DBE745FED5E631963426F9102CC9DFEBDC814628335F24
 * Entry: 0x000c8470, Ghidra index: 2461, label: FUN_000c8470
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_000c8470(void)

{
  char cVar1;
  int iVar2;
  uint in_EAX;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int unaff_EBX;
  
  if ((in_EAX == 0) || ((*(byte *)(in_EAX + 0x70) & 1) != 0)) {
    return in_EAX & 0xffffff00;
  }
  iVar2 = *(int *)(*(int *)(unaff_EBX + 0x28) + 8);
  if (*(uint *)(*(int *)(iVar2 + 0x48) + 0x68) == in_EAX) {
    cVar1 = *(char *)(*(int *)(iVar2 + 0x34) + 0x7c);
    uVar3 = CONCAT31((int3)((uint)iVar2 >> 8),cVar1);
    if (cVar1 != '\0') goto LAB_000c849a;
  }
  else if (*(int *)(in_EAX + 0x59c) != 0) {
    uVar3 = FUN_0005be70();
    if (uVar3 != 0) {
      return uVar3 & 0xffffff00;
    }
  }
  uVar4 = 0;
  puVar5 = (uint *)(unaff_EBX + 0x34);
  while (*puVar5 != in_EAX) {
    uVar4 = uVar4 + 1;
    puVar5 = puVar5 + 2;
    if (4 < (int)uVar4) {
      return uVar4 & 0xffffff00;
    }
  }
  uVar3 = 0;
  if (uVar4 != 0) {
    return CONCAT31((int3)(uVar4 >> 8),1);
  }
LAB_000c849a:
  return uVar3 & 0xffffff00;
}
