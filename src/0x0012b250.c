/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D1C693C7D10C55771BDE592AD1D8B55AED3F0FB5F3B8537752B59F7A04CDA8EB
 * Entry: 0x0012b250, Ghidra index: 3785, label: FUN_0012b250
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_0012b250(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *extraout_ECX;
  undefined1 local_10 [16];
  
  puVar4 = (undefined4 *)FUN_00233b10(local_10,param_1);
  uVar1 = puVar4[3];
  uVar2 = puVar4[2];
  uVar3 = puVar4[1];
  *extraout_ECX = *puVar4;
  extraout_ECX[1] = uVar3;
  extraout_ECX[2] = uVar2;
  extraout_ECX[3] = uVar1;
  return extraout_ECX;
}
