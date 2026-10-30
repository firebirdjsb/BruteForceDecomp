/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F001C92680DB7B143B1006BD8FBD043D573011224083A9ABDE15A36B3D8CA346
 * Entry: 0x001d94b0, Ghidra index: 6465, label: FUN_001d94b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001d94b0(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    iVar1 = param_3 + -0x40;
    puVar2 = param_4 + -0x10;
    *puVar2 = *(undefined4 *)(param_3 + -0x40);
    FUN_00087940(param_4 + -0xf,0,0xffffffff);
    FUN_0001f4f0(param_3 + -0x20,0,0xffffffff);
    param_4[-1] = *(undefined4 *)(param_3 + -4);
    param_3 = iVar1;
    param_4 = puVar2;
  } while (iVar1 != param_2);
  *param_1 = puVar2;
  return param_1;
}
