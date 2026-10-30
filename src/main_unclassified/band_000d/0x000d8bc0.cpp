/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EA93C4FCC41EE98AA02D2910CB44FA7DF2CBFCC37B4F594354FBEC24C6B41DCA
 * Entry: 0x000d8bc0, Ghidra index: 2674, label: FUN_000d8bc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000e2c40(uint param_1);
extern void FUN_000e0b90(void);
extern void FUN_000d8c70(void);
extern void FUN_000e1240(byte param_1);
extern void FUN_000e11e0(byte param_1);
extern void FUN_000e35e0(byte param_1);

void FUN_000d8bc0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_000e2c40(*(undefined4 *)(param_1 + 0x7c),param_1 + 0x74,param_1);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(param_1 + 0x78));
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  FUN_000e0b90();
  FUN_000d8c70();
  iVar2 = *(int *)(param_1 + 0x24);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    if (*(int *)(param_1 + 0x1c) != 0) {
      FUN_000e1240(1);
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_000e11e0(1);
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    return;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0x10) {
    FUN_000e35e0(0);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(undefined4 *)(param_1 + 0x24));
}
