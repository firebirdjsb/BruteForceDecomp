/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 962492520B183548CC022383A6FFEBE3605F9D9749B2247CD35E7FEB0C30E545
 * Entry: 0x001d6cc0, Ghidra index: 6377, label: FUN_001d6cc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_001d6cc0(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

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
    param_4[-0xf] = *(undefined4 *)(param_3 + -0x3c);
    param_4[-0xe] = *(undefined4 *)(param_3 + -0x38);
    FUN_0001f4f0(param_3 + -0x34,0,0xffffffff);
    param_4[-6] = *(undefined4 *)(param_3 + -0x18);
    param_4[-5] = *(undefined4 *)(param_3 + -0x14);
    param_4[-4] = *(undefined4 *)(param_3 + -0x10);
    param_4[-3] = *(undefined4 *)(param_3 + -0xc);
    *(undefined1 *)(param_4 + -2) = *(undefined1 *)(param_3 + -8);
    *(undefined1 *)((int)param_4 + -7) = *(undefined1 *)(param_3 + -7);
    *(undefined1 *)((int)param_4 + -6) = *(undefined1 *)(param_3 + -6);
    *(undefined1 *)((int)param_4 + -5) = *(undefined1 *)(param_3 + -5);
    *(undefined1 *)(param_4 + -1) = *(undefined1 *)(param_3 + -4);
    *(undefined1 *)((int)param_4 + -3) = *(undefined1 *)(param_3 + -3);
    param_3 = iVar1;
    param_4 = puVar2;
  } while (iVar1 != param_2);
  *param_1 = puVar2;
  return param_1;
}
