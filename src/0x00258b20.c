/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6B94BBB19697C7DB61610A2BA83087E50A5518464FE6DF2AF90E07C77B30CF50
 * Entry: 0x00258b20, Ghidra index: 8482, label: FUN_00258b20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00258b20(int param_1,int param_2)

{
  code *pcVar1;
  
  if (((*(int *)(param_2 + 0xc) == 0) && (*(int *)(param_2 + 8) == 0)) &&
     (param_2 != *(int *)(param_1 + 0x14 + *(int *)(param_2 + 0x14) * 8))) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(int *)(param_2 + 8) == 0) {
    *(undefined4 *)(param_1 + 0x14 + *(int *)(param_2 + 0x14) * 8) = *(undefined4 *)(param_2 + 0xc);
  }
  else {
    *(undefined4 *)(*(int *)(param_2 + 8) + 0xc) = *(undefined4 *)(param_2 + 0xc);
  }
  if (*(int *)(param_2 + 0xc) != 0) {
    *(undefined4 *)(*(int *)(param_2 + 0xc) + 8) = *(undefined4 *)(param_2 + 8);
  }
  return;
}
