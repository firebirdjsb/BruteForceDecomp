/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8A91732AD070A93A9ADA7F9F0AD06400A27D44091C8CCFE85F4AAA852C08F62A
 * Entry: 0x00213770, Ghidra index: 7443, label: FUN_00213770
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00213770(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                undefined4 param_6)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  uVar1 = FUN_00218510(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = param_3;
  if ((param_4 != 0) && (*(int *)(param_1 + 4) != param_4)) {
    FUN_0008f6a0(param_4);
  }
  *(undefined4 *)(param_1 + 8) = param_5;
  *(undefined4 *)(param_1 + 0xc) = param_6;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(char *)(param_1 + 0x24) =
       (char)(int)((float)*(byte *)(param_2 + 0x27) * *(float *)(param_1 + 0x20));
  return param_1;
}
