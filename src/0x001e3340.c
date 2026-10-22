/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DC4C98A54026AF7F09D960F257E688433548B7F741D5B0D107D7ABA5E424D1ED
 * Entry: 0x001e3340, Ghidra index: 6766, label: FUN_001e3340
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e3340(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined1 local_1c [4];
  uint local_18;
  undefined4 local_8;
  uint local_4;
  
  iVar5 = (param_3 - param_1) / 0x1c;
  iVar2 = (param_2 - param_1) / 0x1c;
  iVar1 = iVar2;
  local_2c = iVar5;
  while (iVar3 = iVar1, iVar3 != 0) {
    iVar1 = local_2c % iVar3;
    local_2c = iVar3;
  }
  if ((local_2c < iVar5) && (0 < local_2c)) {
    param_2 = iVar2 * 0x1c;
    iVar5 = local_2c * 0x1c + param_1;
    do {
      iVar1 = param_2;
      local_4 = 0xf;
      local_8 = 0;
      local_18 = local_18 & 0xffffff00;
      FUN_0001f4f0(iVar5,0,0xffffffff);
      if (iVar1 + iVar5 == param_3) {
        piVar4 = &param_1;
      }
      else {
        local_28 = iVar1 + iVar5;
        piVar4 = &local_28;
      }
      iVar1 = *piVar4;
      while (iVar1 != iVar5) {
        FUN_0001f4f0(iVar1,0,0xffffffff);
        iVar3 = (param_3 - iVar1) / 0x1c;
        if (iVar2 < iVar3) {
          local_24 = param_2 + iVar1;
          piVar4 = &local_24;
        }
        else {
          local_20 = (iVar2 - iVar3) * 0x1c + param_1;
          piVar4 = &local_20;
        }
        iVar1 = *piVar4;
      }
      FUN_0001f4f0(local_1c,0,0xffffffff);
      if (0xf < local_4) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(local_18);
      }
      iVar5 = iVar5 + -0x1c;
      local_2c = local_2c + -1;
      local_18 = local_18 & 0xffffff00;
    } while (local_2c != 0);
  }
  return;
}
