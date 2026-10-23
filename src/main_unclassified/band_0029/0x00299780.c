/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DF9C7F35659E309975FB0C8CFD382E582D586AE6754F4D3AC32143D8E12C985A
 * Entry: 0x00299780, Ghidra index: 9381, label: FUN_00299780
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00299780(undefined4 param_1,undefined4 param_2)

{
  double dVar1;
  int iVar2;
  undefined4 uVar3;
  float10 extraout_ST0;
  
  dVar1 = (double)CONCAT44(param_2,param_1);
  if ((double)CONCAT44(param_2,param_1) < 0.0) {
    dVar1 = -dVar1;
  }
  if (((!isnan(dVar1) && 0.0 < dVar1 != (dVar1 == 0.0)) && (dVar1 < 65535.0 != (dVar1 == 65535.0))) &&
     (iVar2 = FUN_002ebf10(), (float10)iVar2 == extraout_ST0)) {
    uVar3 = 9;
    if (0.0 <= (double)CONCAT44(param_2,param_1)) {
      uVar3 = 7;
    }
    FUN_00299580(uVar3,iVar2,1);
    return;
  }
  uVar3 = FUN_002996e0(param_1,param_2);
  FUN_00299580(0xb,uVar3,1);
  return;
}
