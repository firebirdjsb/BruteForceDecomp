/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CA9241C1B2D44BC059D91D8A3BFD9C56F0C50006AE96DCD6E41A63A655EC2C26
 * Entry: 0x0024b120, Ghidra index: 8244, label: FUN_0024b120
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_0024b120(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

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
    FUN_00137500();
    FUN_00249bc0();
    param_3 = iVar1;
    param_4 = puVar2;
  } while (iVar1 != param_2);
  *param_1 = puVar2;
  return param_1;
}
