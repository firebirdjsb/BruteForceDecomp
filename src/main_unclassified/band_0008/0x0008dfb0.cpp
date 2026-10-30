/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 01570377E938815FE24DCF094A619448827921760948E5D0EA23BAD202E03719
 * Entry: 0x0008dfb0, Ghidra index: 1726, label: FUN_0008dfb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern float10 FUN_0008e030(undefined4 param_1,undefined4 *param_2);

int FUN_0008dfb0(float *param_1)

{
  int iVar1;
  undefined4 unaff_EDI;
  float10 fVar2;
  int local_c;
  float local_8;
  undefined4 local_4;
  
  iVar1 = 0;
  *param_1 = 0.0;
  local_8 = 0.0;
  local_4 = 0;
  local_c = 0;
  fVar2 = (float10)FUN_0008e030(unaff_EDI,&local_c);
  while (local_c != 0) {
    if ((float10)local_8 < fVar2) {
      local_8 = (float)fVar2;
      iVar1 = local_c;
    }
    fVar2 = (float10)FUN_0008e030(unaff_EDI,&local_c);
  }
  *param_1 = local_8;
  return iVar1;
}
