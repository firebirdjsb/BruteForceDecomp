/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 81C8415D72582207BCB7A9C2CA4CADF478F682DAC9FAF0B43736281ACE59D929
 * Entry: 0x000ef9e0, Ghidra index: 2980, label: FUN_000ef9e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_000ef9e0(void)

{
  undefined4 in_EAX;
  int in_ECX;
  
  switch(in_EAX) {
  case 0:
    return 1;
  case 1:
    return *(uint *)(in_ECX + 0x21c) & 1;
  case 2:
    return (*(uint *)(in_ECX + 0x21c) & 2) >> 1;
  case 3:
    return (*(uint *)(in_ECX + 0x21c) & 4) >> 2;
  default:
    return 0;
  }
}
