/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F69E5048F7E27D8A02E99C29E1B8CF35D9DA4FA70C384E3B27B3C471BC6E554A
 * Entry: 0x00174b30, Ghidra index: 4918, label: FUN_00174b30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00174b30(int param_1,int param_2)

{
  int unaff_EBX;
  int unaff_retaddr;
  
  FUN_00174e10();
  if (*(int *)(param_1 + 0x98) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(param_1 + 0x98));
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(int *)(param_1 + 0x84) = (int)*(float *)(param_2 + 8);
  *(undefined1 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  (**(code **)(**(int **)(param_1 + 0x74) + 0x5c))(*(int **)(param_1 + 0x74));
  (**(code **)(**(int **)(unaff_retaddr + 0x74) + 0x58))
            (*(int **)(unaff_retaddr + 0x74),*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(unaff_EBX + 0x88) = 0;
  return;
}
