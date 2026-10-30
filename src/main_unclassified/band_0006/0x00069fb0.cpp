/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 37739BB09CDAD92E910D84A9B0EFE3616E2DFD7BC6B1B5E2341F0D790A9926C6
 * Entry: 0x00069fb0, Ghidra index: 1179, label: FUN_00069fb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000762d0(void);

void FUN_00069fb0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    *param_1 = 0;
    return;
  }
  if (*(int *)(iVar1 + 8) != 0) {
    FUN_000762d0(iVar1 + 4,param_1);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(iVar1 + 8));
  }
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(iVar1);
}
