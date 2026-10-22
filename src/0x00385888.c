/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 893BDB0B9B4112490F55B19CA341DF130BE26E0C8409CBF4A81E6335FFA3EBB4
 * Entry: 0x00385888, Ghidra index: 13675, label: FUN_00385888
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00385888(void)

{
  int in_ECX;
  int in_EDX;
  
  KeRaiseIrqlToDpcLevel();
  FUN_00384d66();
  FUN_0038388c();
  *(int *)(in_EDX + 0x14) = *(int *)(in_ECX + 0x434);
  *(int *)(in_ECX + 0x434) = in_EDX;
  KfLowerIrql();
  return 0x40000000;
}
