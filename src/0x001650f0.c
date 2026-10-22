/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CADA004CBB65798988E77B1752A243BF1CC9FA6F54E07668A159E7AB92351A70
 * Entry: 0x001650f0, Ghidra index: 4693, label: FUN_001650f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001650f0(undefined4 *param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 *in_EAX;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 in_stack_00000024;
  undefined1 auStack_2c [24];
  undefined4 uStack_14;
  
  *in_EAX = *param_1;
  uStack_14 = 0x16510a;
  FUN_000fdba0();
  uVar1 = 0;
  puVar2 = param_1 + 2;
  do {
    in_EAX[uVar1 + 2] = *puVar2;
    uVar1 = uVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (uVar1 < 4);
  uStack_14 = in_stack_00000024;
  FUN_00164a40(auStack_2c);
  FUN_00164b40(param_1,(param_2 - (int)param_1) / 0x18);
  if (param_4 != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
