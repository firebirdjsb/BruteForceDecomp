/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A5D8043389F25398301632AB91991E89E8F26B03DD7F5D40FCAF63FB2C40D9CF
 * Entry: 0x0003fd30, Ghidra index: 479, label: FUN_0003fd30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0003fd30(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x834) != 0) {
    FUN_000db3e0(*(int *)(in_ECX + 0x834));
    if (*(int *)(in_ECX + 0x834) != 0) {
      FUN_0008f6a0(0);
    }
  }
  return 1;
}
