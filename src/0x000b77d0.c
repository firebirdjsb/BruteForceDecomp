/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 865789EEC8A0876263D018FB2D0334F52809A5FDC5DA3514BDD5F305DBF6CFAA
 * Entry: 0x000b77d0, Ghidra index: 2205, label: FUN_000b77d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000b77d0(int param_1,undefined4 param_2)

{
  float fVar1;
  
  *(undefined4 *)(param_1 + 0x30) = param_2;
  fVar1 = *(float *)(param_1 + 0x30);
  if (*(float *)(param_1 + 0x6c) <= *(float *)(param_1 + 0x30)) {
    fVar1 = *(float *)(param_1 + 0x6c);
  }
  *(float *)(param_1 + 0x30) = fVar1;
  fVar1 = *(float *)(param_1 + 0x34);
  if (*(float *)(param_1 + 0x30) <= *(float *)(param_1 + 0x34)) {
    fVar1 = *(float *)(param_1 + 0x30);
  }
  *(float *)(param_1 + 0x34) = fVar1;
  return;
}
