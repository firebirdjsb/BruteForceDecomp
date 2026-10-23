/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5FFCA374F2849B21BD2E2F1513C225E30296000AD38EC243293D0EC10DF510FE
 * Entry: 0x00225060, Ghidra index: 7626, label: FUN_00225060
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_00225060(void)

{
  byte *in_ECX;
  float10 fVar1;
  
  fVar1 = (float10)*(float *)(in_ECX + 0x20);
  if (((*in_ECX & 0x40) != 0) && (0.0 < *(float *)(in_ECX + 0x30))) {
    fVar1 = (float10)FUN_00223780(*(undefined4 *)(in_ECX + 0x20),
                                  1.0 - *(float *)(in_ECX + 0x28) / *(float *)(in_ECX + 0x30));
  }
  return fVar1;
}
