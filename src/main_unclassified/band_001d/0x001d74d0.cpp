/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 64298C2F25576F76B684DAABEBF333A4FEC62700E50524631C05CD05403FED32
 * Entry: 0x001d74d0, Ghidra index: 6396, label: FUN_001d74d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001d74d0(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_2 == param_3) {
    *param_1 = *param_4;
    return param_1;
  }
  do {
    iVar1 = param_3 + -0x3c;
    puVar2 = param_4 + -0xf;
    *puVar2 = *(undefined4 *)(param_3 + -0x3c);
    FUN_0001f4f0(param_3 + -0x38,0,0xffffffff);
    param_4[-7] = *(undefined4 *)(param_3 + -0x1c);
    param_4[-6] = *(undefined4 *)(param_3 + -0x18);
    param_4[-5] = *(undefined4 *)(param_3 + -0x14);
    FUN_0010bc40();
    param_3 = iVar1;
    param_4 = puVar2;
  } while (iVar1 != param_2);
  *param_1 = puVar2;
  return param_1;
}
