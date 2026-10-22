/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8B93EB1016A0F75C9584316977DF8A5594F70A23854B51278D4F941549B7F803
 * Entry: 0x0033fa33, Ghidra index: 12654, label: FUN_0033fa33
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0033fa33(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0x3c;
  iVar1 = *(int *)(param_1 + 0x38) + 0x94;
  if (param_2 == 0) {
    iVar1 = FUN_00343900(param_1,iVar1,param_3,0,0,0);
  }
  else {
    iVar1 = FUN_00343fb0(param_1,iVar1,param_2,0,0,0);
  }
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  return uVar2;
}
