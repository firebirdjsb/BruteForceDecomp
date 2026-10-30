/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BD9FCB4747676662B485B22201F62BC6A7C71FF866EE6A718FBDDBA4C420064B
 * Entry: 0x0001d7a0, Ghidra index: 140, label: FUN_0001d7a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0001d7a0(int param_1)

{
  int iVar1;
  int in_EDX;
  int unaff_EDI;
  
  while( true ) {
    iVar1 = in_EDX * 2 + 2;
    if (unaff_EDI <= iVar1) break;
    if (*(float *)(*(int *)(param_1 + iVar1 * 4) + 0x2c) <
        *(float *)(*(int *)(param_1 + -4 + iVar1 * 4) + 0x2c)) {
      iVar1 = in_EDX * 2 + 1;
    }
    *(undefined4 *)(param_1 + in_EDX * 4) = *(undefined4 *)(param_1 + iVar1 * 4);
    in_EDX = iVar1;
  }
  if (iVar1 == unaff_EDI) {
    *(undefined4 *)(param_1 + in_EDX * 4) = *(undefined4 *)(param_1 + -4 + unaff_EDI * 4);
  }
  FUN_0001d800(param_1);
  return;
}
