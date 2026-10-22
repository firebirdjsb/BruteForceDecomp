/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9B5D486100BA1169ABBBDE650604F6AB5E3952CDA909DEE9A1FF4537EB531DD8
 * Entry: 0x0029e270, Ghidra index: 9470, label: FUN_0029e270
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0029e270(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 8);
  *param_2 = *(undefined4 *)(param_1 + 4);
  param_2[1] = uVar2;
  param_2[2] = uVar1;
  return;
}
