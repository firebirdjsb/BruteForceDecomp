/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F88F7AA83B81491E34A0910CB2360B6D095F72DA65B0E13E7269C574963A605B
 * Entry: 0x0024a990, Ghidra index: 8222, label: FUN_0024a990
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0024a990(int param_1)

{
  int in_EAX;
  int *piVar1;
  
  if (in_EAX != param_1) {
    piVar1 = (int *)(in_EAX + 0x20);
    do {
      if (*piVar1 != 0) {
        FUN_00249110(*piVar1);
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(*piVar1);
      }
      *piVar1 = 0;
      piVar1[1] = 0;
      piVar1[2] = 0;
      if (piVar1[-4] != 0) {
        FUN_00050b40(piVar1[-4],piVar1[-3],piVar1 + -5);
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(piVar1[-4]);
      }
      piVar1[-4] = 0;
      piVar1[-3] = 0;
      piVar1[-2] = 0;
      in_EAX = in_EAX + 0x2c;
      piVar1 = piVar1 + 0xb;
    } while (in_EAX != param_1);
  }
  return;
}
