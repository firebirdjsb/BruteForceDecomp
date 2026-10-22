/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 005B0F69015D98214DD377583D26604996B42C2EA415789191F41FFB707D3865
 * Entry: 0x0027b630, Ghidra index: 8965, label: FUN_0027b630
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0027b630(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    FUN_0027af70();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar1);
  }
  iVar1 = FUN_002ea01d(0x60);
  if (iVar1 != 0) {
    uVar2 = FUN_0028d250();
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    FUN_0028d1e0();
    return 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_0028d1e0();
  return 0;
}
