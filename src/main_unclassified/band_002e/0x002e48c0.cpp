/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ADD269338DDDCF3B1A491140D609145EAE6FCF4FA2E90CDF27389E7F5265491C
 * Entry: 0x002e48c0, Ghidra index: 10455, label: FUN_002e48c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002e48c0(int param_1,int param_2,int param_3,int *param_4)

{
  int *in_ECX;
  int iVar1;
  
  if (param_4 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *param_4;
  }
  in_ECX[3] = iVar1;
  *in_ECX = param_2;
  in_ECX[2] = param_3;
  in_ECX[1] = param_1;
  if (param_4 != (int *)0x0) {
    if (param_2 != 0) {
      if (param_2 == 0x100000) {
        *param_4 = *param_4 + param_3 * 2 + 2;
        return;
      }
      if (param_2 != 0x200000) {
        *param_4 = *param_4;
        return;
      }
      *param_4 = *param_4 + param_3 + 2;
      return;
    }
    *param_4 = *param_4 + 8;
  }
  return;
}
