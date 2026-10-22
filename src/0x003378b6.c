/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BFA3C15B25EDB5A7E93676524F700BF0B46F74726060741AE74991C6D25CF423
 * Entry: 0x003378b6, Ghidra index: 12462, label: FUN_003378b6
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00335ce1;
undefined4 FUN_003378b6(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0033e9b3(0x60,0x1f);
  *param_1 = iVar1;
  if (iVar1 == 0) {
    return 0x8007000e;
  }
  FUN_00330c2d(iVar1);
  *(undefined4 *)(*param_1 + 8) = param_2;
  if (param_3 == 0) {
    *(code **)*param_1 = FUN_00335c99;
  }
  else if (param_3 == 1) {
    *(code **)*param_1 = FUN_003369c7;
  }
  else if (param_3 == 2) {
    *(code **)*param_1 = FUN_00335cbd;
  }
  else {
    if (param_3 == 3) {
      *(code **)*param_1 = FUN_00337458;
      *(code **)(*param_1 + 4) = FUN_003357da;
      goto LAB_00337950;
    }
    if (param_3 == 4) {
      *(code **)*param_1 = FUN_00335e86;
    }
    else {
      if (param_3 != 5) goto LAB_00337950;
      *(undefined **)*param_1 = &DAT_00335ce1;
    }
  }
  *(code **)(*param_1 + 4) = FUN_003357a4;
LAB_00337950:
  *(int *)(*param_1 + 0xc) = param_3;
  *(undefined4 *)(*param_1 + 0x14) = param_4;
  *(undefined4 *)(*param_1 + 0x18) = 0;
  *(undefined4 *)(*param_1 + 0x54) = 0;
  *(undefined4 *)(*param_1 + 0x58) = 0;
  *(undefined4 *)(*param_1 + 0x5c) = 0;
  *(undefined4 *)(*param_1 + 0x34) = 0;
  return 0;
}
