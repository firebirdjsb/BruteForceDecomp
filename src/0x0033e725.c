/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 95AD02F0FCD8B41A77F7A9AF3C838409A89F06199C903B78EDD8C1E2E3195809
 * Entry: 0x0033e725, Ghidra index: 12610, label: FUN_0033e725
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0033e725(int param_1,int param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int local_8;
  
  local_8 = 0;
  uVar2 = *(uint *)(param_1 + 0x14);
  if (uVar2 < param_3) {
    local_8 = (**(code **)(param_2 + uVar2 * 4))(param_1);
  }
  else if (uVar2 != param_3) {
    *(uint *)(param_1 + 0x14) = param_3;
    *(undefined4 *)(param_1 + 0xc) = 0x80004001;
  }
  if (*(uint *)(param_1 + 0x14) == param_3) {
    FUN_003476db(param_1 + 0x110,0,0xffffffff);
    piVar1 = (int *)(param_1 + 0xc);
    if (-1 < *piVar1) {
      if (*(int *)(param_1 + 0x10) == 0) {
        *piVar1 = 0x1500f0;
      }
      else {
        *piVar1 = *(int *)(param_1 + 0x10);
      }
    }
    local_8 = *piVar1;
  }
  else {
    if (*(uint *)(param_1 + 0x14) != uVar2) {
      uVar3 = XAPILIB__GetTickCount();
      *(undefined4 *)(param_1 + 0x20) = uVar3;
      if ((*(int *)(param_1 + 8) != 0) && (*(int *)(param_1 + 0x1c) != 0)) {
        FUN_003476db(param_1 + 0x110,*(int *)(param_1 + 8),*(int *)(param_1 + 0x1c));
      }
    }
    if ((*(int *)(param_1 + 0x1c) != 0) &&
       (iVar4 = XAPILIB__GetTickCount(),
       *(uint *)(param_1 + 0x1c) <= (uint)(iVar4 - *(int *)(param_1 + 0x20)))) {
      local_8 = -0x7ff8fa4c;
      *(uint *)(param_1 + 0x14) = param_3;
      *(undefined4 *)(param_1 + 0xc) = 0x800705b4;
    }
  }
  if ((*(int *)(param_1 + 8) == 0) || ((*(byte *)(param_1 + 0x1b) & 0x20) != 0)) {
    *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) & 0xdf;
  }
  else {
    XAPILIB__SetEvent(*(int *)(param_1 + 8));
  }
  return local_8;
}
