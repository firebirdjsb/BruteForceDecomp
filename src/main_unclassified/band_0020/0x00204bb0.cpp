/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A1583958DB35E52F1A9CB1F48BA538D1250A335C4118F9CB55AEF0A081FA32A6
 * Entry: 0x00204bb0, Ghidra index: 7284, label: FUN_00204bb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a3fb4;
void FUN_00204bb0(void)

{
  byte bVar1;
  int in_EAX;
  int iVar2;
  int unaff_ESI;
  undefined ***pppuVar3;
  undefined1 local_59;
  undefined **local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined **local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined **local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((*(byte *)(in_EAX + 0x3d) & 1) == 0) {
    return;
  }
  iVar2 = FUN_001fb020();
  if (iVar2 == 0) {
    return;
  }
  local_1c = FUN_001fb020();
  iVar2 = *(int *)(*(int *)(local_1c + 0xc) + 4);
  if ((iVar2 != 2) && (iVar2 != 0x1a)) {
    return;
  }
  local_18 = *(undefined4 *)(unaff_ESI + 0x1c);
  local_14 = *(int *)(unaff_ESI + 0x28);
  local_8 = *(undefined4 *)(unaff_ESI + 0x30);
  local_c = *(undefined4 *)(unaff_ESI + 0x2c);
  local_10 = *(int *)(unaff_ESI + 0x24);
  local_4 = *(undefined4 *)(unaff_ESI + 0x34);
  if ((local_10 != 0) && (local_10 != 3)) goto LAB_00204cdd;
  if (local_14 == 0) {
    if ((*(byte *)(in_EAX + 0x5c) & 1) == 0) goto LAB_00204cdd;
    pppuVar3 = &local_30;
    bVar1 = *(byte *)(in_EAX + 0x5c) & 0xfe;
    local_30 = &PTR_LAB_003a3fb4;
    local_20 = 0xffffffff;
    local_2c = 0x1f;
    local_24 = 0;
    local_28 = 0;
LAB_00204cd3:
    *(byte *)(in_EAX + 0x5c) = bVar1;
  }
  else {
    if (local_14 == 3) {
      if ((*(byte *)(in_EAX + 0x5c) & 1) != 0) goto LAB_00204cdd;
      pppuVar3 = &local_44;
      bVar1 = *(byte *)(in_EAX + 0x5c) | 1;
      local_44 = &PTR_LAB_003a3fb4;
      local_34 = 0xffffffff;
      local_40 = 0x31;
      local_38 = 0;
      local_3c = 0;
      goto LAB_00204cd3;
    }
    pppuVar3 = &local_58;
    local_58 = &PTR_LAB_003a3fb4;
    local_48 = 0xffffffff;
    local_54 = 0x1f;
    local_4c = 0;
    local_50 = 0;
  }
  FUN_001ff0a0(pppuVar3);
LAB_00204cdd:
  FUN_000cdcb0(&local_59);
  return;
}
