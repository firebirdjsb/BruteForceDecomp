/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0BE6E38CEF2E8F1AF6AA0903441E2DC44E2FE2669123839411F9928BB83CA67D
 * Entry: 0x00045930, Ghidra index: 543, label: FUN_00045930
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0004e8f0(void);

undefined4 FUN_00045930(void)

{
  int in_ECX;
  
  FUN_0004e8f0();
  if (*(float *)(in_ECX + 0x450) * *(float *)(in_ECX + 0x450) +
      *(float *)(in_ECX + 0x44c) * *(float *)(in_ECX + 0x44c) +
      *(float *)(in_ECX + 0x448) * *(float *)(in_ECX + 0x448) != 0.0) {
    *(undefined4 *)(in_ECX + 0x450) = 0;
    *(undefined4 *)(in_ECX + 0x44c) = 0;
    *(undefined4 *)(in_ECX + 0x448) = 0;
  }
  return 1;
}
