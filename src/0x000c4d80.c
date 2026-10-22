/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0DAD3EA78AF0A4D22E80D15F22D75D3BDB17C54194441446290D58829EEDC1C9
 * Entry: 0x000c4d80, Ghidra index: 2415, label: FUN_000c4d80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000c4d80(void)

{
  int in_ECX;
  
  if (*(float *)(in_ECX + 0x34) != 0.0) {
LAB_000c4dc5:
    *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(in_ECX + 0x30);
    return;
  }
  if (*(float *)(in_ECX + 0x30) == 0.0) {
    *(undefined4 *)(in_ECX + 0x30) = 0x3f800000;
  }
  else if (*(float *)(in_ECX + 0x30) < 0.6) {
    *(undefined4 *)(in_ECX + 0x30) = 0x3f4ccccd;
    goto LAB_000c4dc5;
  }
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(in_ECX + 0x30);
  return;
}
