/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8E01609E6333881F6180B57B6E9698FA9032F29116FF4E998DA1389DE998520E
 * Entry: 0x002ab120, Ghidra index: 9659, label: FUN_002ab120
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002ab120(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  uVar2 = *(undefined4 *)(param_1 + 0x2c);
  *param_2 = *(undefined4 *)(param_1 + 0x28);
  param_2[1] = uVar2;
  param_2[2] = uVar1;
  param_2[3] = *(undefined4 *)(param_1 + 0x34);
  return 0;
}
