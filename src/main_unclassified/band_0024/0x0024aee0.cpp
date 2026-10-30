/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8D33205991AE0991F320B2318897BAD0D55B667F2FFF8B1B122CE1591C83ED7C
 * Entry: 0x0024aee0, Ghidra index: 8238, label: FUN_0024aee0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_0024aee0(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

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
    *(undefined1 *)(param_4 + -9) = *(undefined1 *)(param_3 + -0x24);
    FUN_0024a450();
    FUN_0010bc40();
    param_3 = iVar1;
    param_4 = puVar2;
  } while (iVar1 != param_2);
  *param_1 = puVar2;
  return param_1;
}
