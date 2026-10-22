/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EAB53C69AF3BBA17E53E0FFBDB06C164074D17F6345B50C0604B5AB55FB6D153
 * Entry: 0x00119560, Ghidra index: 3605, label: FUN_00119560
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00119560(float param_1)

{
  float fVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x5a8) != 0) {
    param_1 = (float)(uint)(param_1 < 0.0);
    fVar1 = *(float *)(in_ECX + 0x5ac) - (float)(int)param_1;
    *(float *)(in_ECX + 0x5ac) = fVar1;
    if (fVar1 == 0.0) {
      return;
    }
  }
  *(undefined4 *)(in_ECX + 0x5ac) = 0;
  *(undefined4 *)(in_ECX + 0x5a8) = 0;
  return;
}
