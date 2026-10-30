/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7C79A89CE5DF887FB600DA682208877753F09A48AEEA77C57026C55336B359C3
 * Entry: 0x0024af90, Ghidra index: 8240, label: FUN_0024af90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_0024af90(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    iVar1 = param_3 + -0x24;
    puVar2 = param_4 + -9;
    *puVar2 = *(undefined4 *)(param_3 + -0x24);
    FUN_0001f4f0(param_3 + -0x20,0,0xffffffff);
    *(undefined1 *)(param_4 + -1) = *(undefined1 *)(param_3 + -4);
    param_3 = iVar1;
    param_4 = puVar2;
  } while (iVar1 != param_2);
  *param_1 = puVar2;
  return param_1;
}
