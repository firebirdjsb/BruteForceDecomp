/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 020AE593A75FB6EC084C6198C9B63BE065C8A78720ADDBCF76812AC11CB16B54
 * Entry: 0x0024ae10, Ghidra index: 8236, label: FUN_0024ae10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_0024ae10(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

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
    FUN_0001f4f0(param_3 + -0x3c,0,0xffffffff);
    *(undefined1 *)(param_4 + -8) = *(undefined1 *)(param_3 + -0x20);
    param_4[-7] = *(undefined4 *)(param_3 + -0x1c);
    param_4[-6] = *(undefined4 *)(param_3 + -0x18);
    *(undefined1 *)(param_4 + -5) = *(undefined1 *)(param_3 + -0x14);
    FUN_0024a300();
    param_3 = iVar1;
    param_4 = puVar2;
  } while (iVar1 != param_2);
  *param_1 = puVar2;
  return param_1;
}
