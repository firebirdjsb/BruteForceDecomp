/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 251D2DF75E0E9ABEB9ECD59F02B6F18DC4C2C2764213F2B901F89352CB0EF97E
 * Entry: 0x001d7ec0, Ghidra index: 6414, label: FUN_001d7ec0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001d7ec0(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_2 == param_3) {
    *param_1 = *param_4;
    return param_1;
  }
  do {
    iVar1 = param_3 + -0x44;
    puVar2 = param_4 + -0x11;
    *puVar2 = *(undefined4 *)(param_3 + -0x44);
    param_4[-0x10] = *(undefined4 *)(param_3 + -0x40);
    param_4[-0xf] = *(undefined4 *)(param_3 + -0x3c);
    *(undefined1 *)(param_4 + -0xe) = *(undefined1 *)(param_3 + -0x38);
    FUN_00137500();
    param_4[-9] = *(undefined4 *)(param_3 + -0x24);
    FUN_0010bc40();
    FUN_0010bc40();
    param_3 = iVar1;
    param_4 = puVar2;
  } while (iVar1 != param_2);
  *param_1 = puVar2;
  return param_1;
}
