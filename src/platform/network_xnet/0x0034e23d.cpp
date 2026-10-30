/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4049A86CB57A2647CE22BA2A88BA0E7C7EF90176EDBF419307F23FDF3FFA28C9
 * Entry: 0x0034e23d, Ghidra index: 13017, label: FUN_0034e23d
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0034e23d(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_0034cb5a(0x4654454e,3,param_1,0,0x1c,param_2);
    if (iVar1 == 0) {
      return 0;
    }
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x18) = param_3;
    *param_4 = iVar1;
  }
  return 1;
}
