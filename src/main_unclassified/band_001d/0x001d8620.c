/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A9D610362FB038683980D5A1337274978D3F1094C7C14311BB57FE9862410CA9
 * Entry: 0x001d8620, Ghidra index: 6428, label: FUN_001d8620
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001d8620(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    iVar1 = param_3 + -0x2c;
    puVar2 = param_4 + -0xb;
    *puVar2 = *(undefined4 *)(param_3 + -0x2c);
    param_4[-10] = *(undefined4 *)(param_3 + -0x28);
    param_4[-9] = *(undefined4 *)(param_3 + -0x24);
    *(undefined1 *)(param_4 + -8) = *(undefined1 *)(param_3 + -0x20);
    *(undefined1 *)((int)param_4 + -0x1f) = *(undefined1 *)(param_3 + -0x1f);
    FUN_0001f4f0(param_3 + -0x1c,0,0xffffffff);
    param_3 = iVar1;
    param_4 = puVar2;
  } while (iVar1 != param_2);
  *param_1 = puVar2;
  return param_1;
}
