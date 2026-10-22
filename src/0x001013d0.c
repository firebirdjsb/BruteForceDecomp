/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C84AF7FCB0508E4C63BFD830E82E70FDCDDD6AB31E666940E8EFC7145D62A1C4
 * Entry: 0x001013d0, Ghidra index: 3239, label: FUN_001013d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469948;
void FUN_001013d0(undefined4 *param_1)

{
  int *piVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_14 [2];
  undefined4 local_c;
  undefined4 local_4;
  
  uVar6 = 0;
  uVar5 = 0x280;
  local_c = 0;
  local_4 = 0x1e0;
  if ((*(int *)(in_EAX + 0x60) < 0x11) || (0x14 < *(int *)(in_EAX + 0x60))) {
    FUN_000f6da0();
    iVar2 = FUN_000f6e10();
    iVar2 = *(int *)(*(int *)(DAT_00469948 + 0x22c + iVar2 * 4) + 0xc4);
    if (iVar2 == 0) {
      iVar2 = 4;
    }
    else {
      iVar2 = *(int *)(iVar2 + 0xbc);
    }
  }
  else {
    iVar2 = FUN_000efa30();
  }
  if ((iVar2 != 4) && (*(int *)(in_EAX + 0xa8) != 0)) {
    local_14[0] = 0;
    piVar1 = *(int **)(*(int *)(in_EAX + 0xa8) + 0xbec);
    iVar3 = (**(code **)(*piVar1 + 0x10))(local_14);
    while (iVar3 != 0) {
      iVar3 = *(int *)(*(int *)(DAT_00469948 + 0x22c + *(int *)(iVar3 + 4) * 4) + 0xc4);
      if (iVar3 == 0) {
        iVar3 = 4;
      }
      else {
        iVar3 = *(int *)(iVar3 + 0xbc);
      }
      if (iVar3 == iVar2) {
        iVar2 = FUN_0008b790();
        if (iVar2 != 0) {
          piVar1 = (int *)(iVar2 + 0x48);
          puVar4 = (undefined4 *)(**(code **)(*(int *)(iVar2 + 0x48) + 0x18))();
          uVar6 = *puVar4;
          iVar2 = (**(code **)(*piVar1 + 0x18))();
          uVar5 = *(undefined4 *)(iVar2 + 8);
          iVar2 = (**(code **)(*piVar1 + 0x18))();
          local_c = *(undefined4 *)(iVar2 + 4);
          iVar2 = (**(code **)(*piVar1 + 0x18))();
          local_4 = *(undefined4 *)(iVar2 + 0xc);
        }
        break;
      }
      iVar3 = (**(code **)(*piVar1 + 0x14))(local_14);
    }
  }
  *param_1 = uVar6;
  param_1[1] = local_c;
  param_1[2] = uVar5;
  param_1[3] = local_4;
  return;
}
