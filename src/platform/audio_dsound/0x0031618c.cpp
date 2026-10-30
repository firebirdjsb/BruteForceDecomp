/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6F6434EF2F100A1F21E48BB62350A1F43806283E15DFEA15048194B6F7E451BB
 * Entry: 0x0031618c, Ghidra index: 12130, label: FUN_0031618c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0031618c(int param_1)

{
  undefined4 uVar1;
  int in_ECX;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(param_1 + 100) + *(uint *)(in_ECX + 0x774);
  uVar1 = 0;
  if (uVar2 < 0x1e) {
    *(uint *)(in_ECX + 0x774) = uVar2;
  }
  else {
    uVar1 = 0x88780032;
  }
  return uVar1;
}
