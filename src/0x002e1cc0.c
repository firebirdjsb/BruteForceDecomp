/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3A5C6676C26B9999B7F3D7E003CBB73C19AEFC5B3C3E15FE5DD1DBB44CEAE1E8
 * Entry: 0x002e1cc0, Ghidra index: 10374, label: FUN_002e1cc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
FUN_002e1cc0(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  
  if ((((param_1 != 0) && (param_1 != -1)) && (param_1 != -2)) &&
     ((param_1 != -3 && (param_1 != -4)))) {
    if (param_1 == -5) goto LAB_002e1d60;
    if (*(int *)(param_1 + 0x28) != 0) {
      FUN_002e3a20(param_3,param_4,param_5,param_6,param_2 & 1,0,param_7);
      FUN_002e2c20(4,1);
      uVar1 = FUN_002e13a0(param_1);
      if ((param_2 & 1) == 0) {
        FUN_002e3990();
      }
      return uVar1;
    }
  }
  if (param_1 != -5) {
    return 0x80040004;
  }
LAB_002e1d60:
  uVar1 = FUN_002e0190(0xfffffffb,param_7);
  uVar1 = FUN_002e1fe0(0xfffffffb,uVar1,param_3,param_4,param_2);
  return uVar1;
}
