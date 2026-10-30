/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 50D483B1794C088CDF4F5A20A1271C0453311F7A299F321CCB08526AEAFF487F
 * Entry: 0x000cd510, Ghidra index: 2533, label: FUN_000cd510
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000cd510(undefined4 param_1,int param_2)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  fVar3 = (float10)FUN_000cd4c0(param_1);
  fVar1 = (float)(fVar3 * (float10)param_2);
  iVar2 = (int)(fVar3 * (float10)param_2);
  if ((float)iVar2 < fVar1 == ((float)iVar2 == fVar1)) {
    iVar2 = iVar2 + -1;
  }
  if (0.5 < fVar1 - (float)iVar2) {
    return 1;
  }
  return 0;
}
