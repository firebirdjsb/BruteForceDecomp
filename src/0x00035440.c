/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FFDC86E48377DDD28E10A5036BA6DADA9B426E96F7A75599141976AEEBD04FFC
 * Entry: 0x00035440, Ghidra index: 347, label: FUN_00035440
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00035440(void)

{
  int iVar1;
  uint uVar2;
  int *in_ECX;
  
  iVar1 = FUN_000120f0();
  *(byte *)(iVar1 + 0x748) = *(byte *)(iVar1 + 0x748) & 0xfb;
  uVar2 = FUN_000356b0();
  if (0x7fffffff < uVar2) {
    *(byte *)(in_ECX + 0x109) = *(byte *)(in_ECX + 0x109) & 0xfb;
  }
  (**(code **)(*in_ECX + 0x5bc))();
  return 1;
}
