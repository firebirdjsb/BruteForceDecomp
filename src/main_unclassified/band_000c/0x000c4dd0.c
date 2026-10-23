/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A71A27D19A2F5327A0862C0C3C5F8E41C7114E0563D2C49168D5CD2CCE237A7F
 * Entry: 0x000c4dd0, Ghidra index: 2416, label: FUN_000c4dd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000c4dd0(void)

{
  int in_ECX;
  
  if (*(float *)(in_ECX + 0x34) == 0.0) {
    if (*(float *)(in_ECX + 0x30) == 0.0) {
      *(undefined4 *)(in_ECX + 0x30) = 0x3f800000;
      return;
    }
    if (*(float *)(in_ECX + 0x30) < 0.6) {
      *(undefined4 *)(in_ECX + 0x30) = 0x3f4ccccd;
    }
  }
  return;
}
