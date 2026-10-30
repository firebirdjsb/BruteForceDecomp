/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D0758214A321FD48B22DDE44D17DFA7ECFB99D339228457EDC5AABB1B83F710C
 * Entry: 0x0035359e, Ghidra index: 13088, label: FUN_0035359e
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0035359e(int param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  int iVar2;
  
  if ((param_2 == 0) || ((char)param_2 != '\0')) {
    uVar1 = param_5 | 2;
    if ((param_1 != 0) && ((*(byte *)(param_1 + 0xf) & 2) != 0)) {
      param_5 = param_5 | 0x10000002;
      uVar1 = param_5;
    }
  }
  else {
    iVar2 = FUN_0034c8f1(param_3,param_4);
    uVar1 = param_5 | iVar2 << 0x10 | 5U;
  }
  param_5 = uVar1;
  iVar2 = FUN_0034cb5a(0x6d54454e,param_5,param_6,0,param_7,param_8);
  if (iVar2 != 0) {
    FUN_0034c865(param_3,param_4);
  }
  return iVar2;
}
