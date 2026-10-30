/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D9E0F2B86DF7773D4F9C1283595816C0A4C6B2C1ABCF13855373235B6F297C81
 * Entry: 0x00051710, Ghidra index: 744, label: FUN_00051710
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000519a0(void);

void FUN_00051710(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 != 0) {
    iVar1 = *(int *)(param_1 + 8);
    for (; iVar2 != iVar1; iVar2 = iVar2 + 0xc) {
      FUN_000519a0();
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}
