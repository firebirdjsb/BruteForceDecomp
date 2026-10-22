/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E114B9A2E426D9B1F6BF6356AA4D4E38216D2F0E3ABB1B82F40486022001F077
 * Entry: 0x00266320, Ghidra index: 8736, label: FUN_00266320
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00266320(float param_1,float param_2,float param_3)

{
  float *pfVar1;
  int in_EAX;
  int iVar2;
  
  pfVar1 = *(float **)(in_EAX + 0x3c);
  iVar2 = 0;
  if ((param_1 < *pfVar1) || (pfVar1[1] < param_1)) {
    iVar2 = 1;
  }
  if ((param_2 < pfVar1[2]) || (pfVar1[3] < param_2)) {
    iVar2 = iVar2 + 1;
  }
  if ((param_3 < pfVar1[4]) || (pfVar1[5] < param_3)) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}
