/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6054F7B95F44E2B3A93114009B428ACFAAF35FA76D343C97D744E470604724FE
 * Entry: 0x0034051f, Ghidra index: 12668, label: FUN_0034051f
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
FUN_0034051f(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,int param_7)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_2 + 4) = 0x17;
  uVar2 = 0;
  iVar1 = FUN_0033fd89(param_1,*(undefined4 *)(param_7 + 8),*(undefined4 *)(param_7 + 4),param_6,
                       param_4,param_3,*(undefined4 *)(param_2 + 0x10),param_2 + 0xc);
  if (iVar1 < 0) {
    uVar2 = 0x3c;
  }
  return uVar2;
}
