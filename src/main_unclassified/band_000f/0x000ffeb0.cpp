/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 59E5B0F807A8BF3E2B62E687DD1A1F3FF477687F1B38556BB74D8A3810935737
 * Entry: 0x000ffeb0, Ghidra index: 3210, label: FUN_000ffeb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000ffeb0(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x88);
  *(int *)(in_ECX + 0x88) = iVar1 + 1;
  *(float *)(in_ECX + 0x84) = 0.25 - (float)iVar1 * 0.025;
  if (*(float *)(in_ECX + 0x84) < 0.05) {
    *(undefined4 *)(in_ECX + 0x84) = 0x3d4ccccd;
  }
  return;
}
