/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 611DA1F08059C189EC076265DA5699113675977E9A6A3C92ACCF79B01E2822C8
 * Entry: 0x0010d870, Ghidra index: 3498, label: FUN_0010d870
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_0010d870(void)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  int *piVar3;
  undefined4 uVar4;
  uint *unaff_EBP;
  undefined4 local_28;
  uint auStack_24 [2];
  undefined1 local_1c [4];
  undefined2 local_18;
  int local_8;
  undefined4 local_4;
  
  iVar1 = *(int *)(in_EAX + 4);
  if (iVar1 == 0) {
    return 0;
  }
  local_4 = 7;
  local_8 = 0;
  local_18 = 0;
  FUN_00087940(local_1c,0,0xffffffff);
  if (local_8 == 0) {
    local_28 = 0xfd890279;
    (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x22c))(&local_28);
    auStack_24[0] = 0;
    piVar3 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
    iVar2 = *piVar3;
    local_28 = 0xcc05846;
    uVar4 = FUN_001e97c0(iVar1,*(undefined4 *)(iVar1 + 0x60),0);
    uVar4 = FUN_001e97c0(uVar4);
    (**(code **)(iVar2 + 0x34))(auStack_24,uVar4);
  }
  else {
    auStack_24[1] = 0xf06bc0ab;
    unaff_EBP = auStack_24 + 1;
    (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x22c))(unaff_EBP);
    FUN_00100ea0();
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
  (**(code **)(*piVar3 + 0x14))(iVar1);
  if (7 < auStack_24[0]) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(unaff_EBP);
  }
  return 1;
}
