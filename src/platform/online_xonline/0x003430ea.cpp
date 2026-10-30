/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 67EE83A41565186537ECD477012B46553E47B087427EF205A88769A6580FE667
 * Entry: 0x003430ea, Ghidra index: 12703, label: FUN_003430ea
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_003430ea(uint param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      iVar1 = uVar2 * 4;
      uVar2 = uVar2 + 1;
      if (param_1 < *(uint *)(param_2 + iVar1)) {
        return uVar2;
      }
    } while (uVar2 < param_3);
  }
  return param_3 + 1;
}
