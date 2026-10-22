/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7B4480DD0DA4C7953970A9F3D820C12C0DA15D497BB5DB3D6C710355EAEF1CF2
 * Entry: 0x001d9320, Ghidra index: 6461, label: FUN_001d9320
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001d9320(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    iVar1 = param_3 + -0x34;
    puVar2 = param_4 + -0xd;
    *puVar2 = *(undefined4 *)(param_3 + -0x34);
    FUN_0003d730(param_4 + -0xc,param_3 + -0x30);
    param_3 = iVar1;
    param_4 = puVar2;
  } while (iVar1 != param_2);
  *param_1 = puVar2;
  return param_1;
}
