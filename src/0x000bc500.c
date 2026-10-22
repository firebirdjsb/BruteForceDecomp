/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2C5FE83CFDBC6052555A53BE9A2B9982328D6277BE46ABE4C6623164758B57D2
 * Entry: 0x000bc500, Ghidra index: 2290, label: FUN_000bc500
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000bc500(int param_1,float param_2)

{
  *(short *)(param_1 + 0xe) = (short)(int)param_2 * 2;
  *(short *)(param_1 + 0xc) = (short)(int)param_2 * 2;
  *(float *)(param_1 + 0x34) = param_2;
  return;
}
