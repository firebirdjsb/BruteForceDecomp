/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 47EC5DB20414B8DD2C642AC53F712D5BC82772C3AD89E4C225E1ABDF4DC300C4
 * Entry: 0x001d8dc0, Ghidra index: 6447, label: FUN_001d8dc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d8dc0(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
    return;
  }
  do {
    iVar3 = param_3 + -8;
    puVar2 = param_4 + -2;
    *puVar2 = *(undefined4 *)(param_3 + -8);
    if (*(int *)(param_3 + -4) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(param_4[-1]);
    }
    if (param_4[-1] == 0) {
      puVar1 = (undefined4 *)FUN_002ea01d(4);
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        *puVar1 = 0;
      }
      param_4[-1] = puVar1;
    }
    if (*(undefined4 **)(param_3 + -4) != (undefined4 *)0x0) {
      *(undefined4 *)param_4[-1] = **(undefined4 **)(param_3 + -4);
    }
    param_4 = puVar2;
    param_3 = iVar3;
  } while (iVar3 != param_2);
  *param_1 = puVar2;
  return;
}
