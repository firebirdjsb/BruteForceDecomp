/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8871D340478EBB8459272F43A66C1C388F10178E9C202BD58611356A0B00B201
 * Entry: 0x002e0700, Ghidra index: 10353, label: FUN_002e0700
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002e0700(int param_1)

{
  uint *puVar1;
  int in_ECX;
  
  puVar1 = (uint *)(in_ECX + 0x54);
  if (((param_1 != 0) && (in_ECX + 0x58 != 0)) && (puVar1 != (uint *)0x0)) {
    if (3 < *puVar1) {
      return 0x80040001;
    }
    *(int *)(in_ECX + 0x58 + *puVar1 * 4) = param_1;
    *puVar1 = *puVar1 + 1;
    return 0;
  }
  return 0x80004003;
}
