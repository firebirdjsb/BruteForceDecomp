/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AE00CAEE3CCF256044FF6148D54B083F187EB4070BF05520F5654AB4E67D3DD7
 * Entry: 0x00162b60, Ghidra index: 4654, label: FUN_00162b60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00162b60(int param_1)

{
  int in_EAX;
  int *piVar1;
  
  if (in_EAX != param_1) {
    piVar1 = (int *)(in_EAX + 0x184);
    do {
      if (*piVar1 != 0) {
        FUN_00050b40(*piVar1,piVar1[1],piVar1 + -1);
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(*piVar1);
      }
      *piVar1 = 0;
      piVar1[1] = 0;
      piVar1[2] = 0;
      if (piVar1[-5] != 0) {
        FUN_00050b40(piVar1[-5],piVar1[-4],piVar1 + -6);
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(piVar1[-5]);
      }
      piVar1[-5] = 0;
      piVar1[-4] = 0;
      piVar1[-3] = 0;
      FUN_00160220();
      in_EAX = in_EAX + 0x1b8;
      piVar1 = piVar1 + 0x6e;
    } while (in_EAX != param_1);
  }
  return;
}
