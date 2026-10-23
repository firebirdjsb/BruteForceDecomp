/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 79D8C5B4A6FFC77CE3C5B501AF008677D20C35D55CB63BAA363958880B551D8C
 * Entry: 0x0033b2c2, Ghidra index: 12515, label: FUN_0033b2c2
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_0033b2c2(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  
  iVar1 = param_2;
  if (param_2 == 0) {
    iVar1 = 0x10;
  }
  iVar1 = FUN_003449ff(param_1,iVar1,&param_2);
  bVar3 = false;
  if (iVar1 != 0) {
    for (puVar2 = (undefined4 *)*param_3; puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)*puVar2) {
      iVar1 = FUN_0033aa53(param_1,0,puVar2 + 1);
      if (iVar1 == 0) {
        return false;
      }
    }
    iVar1 = FUN_00344a56(param_1,param_2);
    bVar3 = iVar1 != 0;
  }
  return bVar3;
}
