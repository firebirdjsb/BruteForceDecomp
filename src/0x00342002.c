/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 442F76036BA6A17DEA037F9C5FB475197A24CEA15256266B3679964CDD089954
 * Entry: 0x00342002, Ghidra index: 12684, label: FUN_00342002
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_00342002(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  iVar1 = __stricmp(param_1,param_2);
  if (iVar1 == 0) {
    bVar3 = true;
  }
  else {
    uVar2 = FUN_00341e95(param_1,param_3,param_4,param_5);
    if (param_1 < uVar2) {
      iVar1 = __stricmp(uVar2,param_2);
      bVar3 = iVar1 == 0;
    }
    else {
      bVar3 = false;
    }
  }
  return bVar3;
}
