/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C7C7CE4D865CEE2623623137D6C1BC2B3AB5237D83E0475CE2B699A3735892D9
 * Entry: 0x00311a1a, Ghidra index: 11907, label: FUN_00311a1a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00311a1a(void)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x88);
  uVar2 = ((uint)*(byte *)(iVar1 + 0xf) * (uint)*(byte *)(iVar1 + 0xe) >> 3) * 0x20;
  if (uVar2 <= *(uint *)(iVar1 + 0x14)) {
    uVar2 = *(uint *)(iVar1 + 0x14);
  }
  return uVar2 * 2;
}
