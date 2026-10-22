/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 83B4C8E68800F19E83168FDFB4FC99F6CD68326D6CF1F225BE27B5EE78E50D4E
 * Entry: 0x00316dcd, Ghidra index: 12163, label: FUN_00316dcd
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00316dcd(void)

{
  int *in_ECX;
  
  if ((*(byte *)((int)in_ECX + 0x12) & 3) != 3) {
    (**(code **)(*in_ECX + 0x1c))(2);
  }
  FUN_00316d57(in_ECX + 0x30,0x8000000a);
  return;
}
