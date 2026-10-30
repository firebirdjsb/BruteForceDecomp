/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 57DF6AA244E693F2FBD44619ACBF0FE03EC196505896925A155EDD265BE07BEB
 * Entry: 0x0027e470, Ghidra index: 9008, label: FUN_0027e470
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0027e470(void)

{
  uint uVar1;
  int in_ECX;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  uVar1 = (uint)*(ushort *)(in_ECX + 0xa4) + (uint)*(ushort *)(in_ECX + 0xa0) +
          (uint)*(ushort *)(in_ECX + 0x9c) + (uint)*(ushort *)(in_ECX + 0x98) +
          (uint)*(ushort *)(in_ECX + 0x94) + (uint)*(ushort *)(in_ECX + 0x90) +
          (uint)*(ushort *)(in_ECX + 0x8c);
  puVar2 = (ushort *)(in_ECX + 0xa8);
  iVar4 = 0x79;
  do {
    uVar3 = uVar3 + *puVar2;
    puVar2 = puVar2 + 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puVar2 = (ushort *)(in_ECX + 0x28c);
  iVar4 = 0x80;
  do {
    uVar1 = uVar1 + *puVar2;
    puVar2 = puVar2 + 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(char *)(in_ECX + 0x1c) = '\x01' - (uVar3 >> 2 < uVar1);
  return;
}
