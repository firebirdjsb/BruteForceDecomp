/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DA4225FB672D0537F20467E3C67AA57BA0C7E83B15D31D9D55BF1AFB738CE363
 * Entry: 0x001556e0, Ghidra index: 4468, label: FUN_001556e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001556e0(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  cVar1 = FUN_00022bc0(&local_28);
  if (cVar1 == '\0') {
    return 4;
  }
  if (*(int *)(*(int *)(param_1 + 0xc) + 4) == 3) {
    local_24 = *(float *)(param_1 + 0x750);
    local_20 = local_28;
    local_1c = local_28;
    if (local_28 <= local_24) {
      local_28 = local_24;
      local_1c = local_24;
    }
  }
  (**(code **)(*(int *)(param_2 + 0x48) + 0x14))();
  FUN_000621c0();
  local_20 = (float)uStack_4;
  local_1c = (float)uStack_8;
  uStack_14 = uStack_8;
  uStack_10 = uStack_4;
  local_18 = uStack_c;
  uVar2 = (**(code **)(*(int *)(param_2 + 0x48) + 0x50))(&local_18,local_28);
  return uVar2;
}
