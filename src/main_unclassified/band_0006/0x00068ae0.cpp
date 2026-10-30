/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 83FBC66B50513B8C175001BCB895DF62AA3E6A8F99DCEAD4709C28DA2586BBE2
 * Entry: 0x00068ae0, Ghidra index: 1155, label: FUN_00068ae0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00068ae0(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_00068a00();
  FUN_00068930();
  if (*(int *)(param_1 + 0x4d8) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(param_1 + 0x4d8));
  }
  *(undefined4 *)(param_1 + 0x4d8) = 0;
  *(undefined4 *)(param_1 + 0x4dc) = 0;
  *(undefined4 *)(param_1 + 0x4e0) = 0;
  FUN_000688e0();
  if (0xf < *(uint *)(param_1 + 0x14c)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(param_1 + 0x138));
  }
  *(undefined4 *)(param_1 + 0x14c) = 0xf;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined1 *)(param_1 + 0x138) = 0;
  FUN_00068780();
  if (*(int *)(param_1 + 0xd0) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(param_1 + 0xd0));
  }
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  iVar2 = *(int *)(param_1 + 0xc0);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 0xc4) = 0;
    *(undefined4 *)(param_1 + 200) = 0;
    if (*(int *)(param_1 + 0xac) != 0) {
      FUN_000762d0(param_1 + 0xa8,param_1);
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(undefined4 *)(param_1 + 0xac));
    }
    *(undefined4 *)(param_1 + 0xac) = 0;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0;
    if (*(uint *)(param_1 + 0xa4) < 0x10) {
      *(undefined4 *)(param_1 + 0xa4) = 0xf;
      *(undefined4 *)(param_1 + 0xa0) = 0;
      *(undefined1 *)(param_1 + 0x90) = 0;
      FUN_00068730();
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(param_1 + 0x90));
  }
  iVar1 = *(int *)(param_1 + 0xc4);
  for (; iVar2 != iVar1; iVar2 = iVar2 + 8) {
    FUN_000e35e0(0);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(undefined4 *)(param_1 + 0xc0));
}
