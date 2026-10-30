/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 627A55665F7C21F5AF2B3554D827DEA311ADB5D7982014E3162FF56F957E9CDA
 * Entry: 0x0033e7ff, Ghidra index: 12611, label: FUN_0033e7ff
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0033e7ff(int param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined2 *)param_2 = 2;
  uVar1 = FUN_00345df1(*(undefined2 *)(param_1 + 8));
  *(undefined2 *)((int)param_2 + 2) = uVar1;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  return 0;
}
