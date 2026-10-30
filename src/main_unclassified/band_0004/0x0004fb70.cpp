/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 39F30FD8F170BF76E0413CF12C6888021EAEDE561481B1947FF0626811DC164E
 * Entry: 0x0004fb70, Ghidra index: 699, label: FUN_0004fb70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000512c0(void);

void FUN_0004fb70(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 != 0) {
    iVar1 = *(int *)(param_1 + 8);
    for (; iVar2 != iVar1; iVar2 = iVar2 + 0xc) {
      FUN_000512c0();
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}
