/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ACDA9FDA8F4E956E7275D38A2AD85CC7578215CB349C87A67EE62A83D4864756
 * Entry: 0x0033fbee, Ghidra index: 12656, label: FUN_0033fbee
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0033fbee(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 local_8;
  
  local_8 = 0;
  iVar1 = FUN_0033fa33(param_1,0,&local_8);
  if (iVar1 == 0) {
    *param_5 = 0;
    iVar2 = FUN_0034408d(local_8,param_5,param_4,8,param_2,param_3);
    if (iVar2 < 0) {
      if ((iVar2 == -0x3f1) || (iVar2 == -0x3ea)) {
        iVar1 = -0x7fffffff;
      }
      else {
        iVar1 = 0x3c;
      }
      *param_5 = 0;
    }
    FUN_0033f31d(0,local_8);
  }
  return iVar1;
}
