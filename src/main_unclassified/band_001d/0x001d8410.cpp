/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EC5308229FE36F266680084338CC8E68B86C9F593CE165CB471C975A88FAF453
 * Entry: 0x001d8410, Ghidra index: 6424, label: FUN_001d8410
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001d8410(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_2 == param_3) {
    *param_1 = *param_4;
    return param_1;
  }
  do {
    iVar1 = param_3 + -0x18;
    puVar2 = param_4 + -6;
    *puVar2 = *(undefined4 *)(param_3 + -0x18);
    param_4[-5] = *(undefined4 *)(param_3 + -0x14);
    FUN_0010bc40();
    param_3 = iVar1;
    param_4 = puVar2;
  } while (iVar1 != param_2);
  *param_1 = puVar2;
  return param_1;
}
