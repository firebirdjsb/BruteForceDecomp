/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3DC226EDCCBB8F47B3EB10B937FE289E5A61E99E1F802C2F70DE8EFA0F6B5C5F
 * Entry: 0x001f9f80, Ghidra index: 7081, label: FUN_001f9f80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001f9f80(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  
  FUN_001f96e0(param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x120);
  uVar2 = *(undefined4 *)(param_1 + 0x11c);
  *(undefined4 *)(in_ECX + 0x118) = *(undefined4 *)(param_1 + 0x118);
  *(undefined4 *)(in_ECX + 0x11c) = uVar2;
  *(undefined4 *)(in_ECX + 0x120) = uVar1;
  return;
}
