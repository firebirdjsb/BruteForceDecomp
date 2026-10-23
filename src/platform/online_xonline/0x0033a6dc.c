/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5905EC66D557ECFCF6E0C4876B2DAD2169777D2DE6F9258F5C8ACC3E5A41711C
 * Entry: 0x0033a6dc, Ghidra index: 12505, label: FUN_0033a6dc
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_0033a6dc(undefined4 *param_1)

{
  int in_EAX;
  int iVar1;
  undefined4 in_ECX;
  bool bVar2;
  undefined4 local_8;
  
  if (in_EAX == 0) {
    in_EAX = 0x10;
  }
  local_8 = in_ECX;
  iVar1 = FUN_003449ff(in_ECX,in_EAX,&local_8);
  bVar2 = false;
  if (iVar1 != 0) {
    for (param_1 = (undefined4 *)*param_1; param_1 != (undefined4 *)0x0;
        param_1 = (undefined4 *)*param_1) {
      iVar1 = FUN_0033a8a2();
      if (iVar1 == 0) {
        return false;
      }
    }
    iVar1 = FUN_00344a56(in_ECX,local_8);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}
