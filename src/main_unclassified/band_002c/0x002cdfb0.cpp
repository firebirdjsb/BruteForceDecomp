/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FB47616183B38B3DB0E0A13535DF9CA4D4FF0F7221D03903560708B6DF8B0610
 * Entry: 0x002cdfb0, Ghidra index: 10175, label: FUN_002cdfb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b86e0;
extern uint32_t _DAT_00000000;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_002cdfb0(undefined4 param_1,float param_2,int param_3)

{
  int in_EAX;
  int iVar1;
  float10 fVar2;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  undefined1 *local_8c;
  undefined1 local_88 [12];
  undefined4 local_7c;
  undefined1 local_78 [12];
  undefined4 local_6c;
  undefined1 local_68 [8];
  undefined1 local_60 [96];
  
  FUN_002cd4c0(local_68,param_1,param_2,param_3,in_EAX);
  FUN_002cd7d0();
  if ((int)((uint)local_90 | (uint)local_94) < 0) {
    if (-1 < (int)((uint)local_98 | (uint)local_9c)) {
      if ((local_94 < 0.0 != (local_94 == 0.0)) || (local_90 < 0.0 != (local_90 == 0.0))) {
        local_90 = 0.0;
        FUN_002cd030(param_3,&local_9c);
        fVar2 = (float10)FUN_002cdf10(*(undefined4 *)(param_3 + 4),param_1);
        return fVar2;
      }
      _DAT_00000000 = 0;
    }
    local_98 = (float)(*(int *)(&DAT_003b86e0 + ((uint)param_2 & 0xc)) + (int)param_2);
    local_8c = local_60;
    local_9c = param_2;
    local_a0 = 1e+20;
    iVar1 = 0;
    do {
      local_6c = 0;
      local_7c = 0;
      FUN_00150930();
      FUN_002b7360(*(int *)(param_3 + 8) + 0x10,local_88,local_78);
      fVar2 = (float10)FUN_002cdf10(*(undefined4 *)(param_3 + 4),param_1);
      if (fVar2 < (float10)local_a0) {
        local_a0 = (float)fVar2;
      }
      fVar2 = (float10)FUN_002cdf10(*(undefined4 *)(in_EAX + 4),param_2);
      if (fVar2 < (float10)local_a0) {
        local_a0 = (float)fVar2;
      }
      iVar1 = iVar1 + 1;
      local_8c = local_8c + 0x10;
    } while (iVar1 < 2);
    return (float10)local_a0;
  }
  if (local_9c < 0.0 != (local_9c == 0.0)) {
    fVar2 = (float10)FUN_002cdf10(*(undefined4 *)(in_EAX + 4),param_2);
    return fVar2;
  }
  if (local_98 < 0.0 == (local_98 == 0.0)) {
    fVar2 = (float10)FUN_002cd710(local_68);
    return fVar2;
  }
  fVar2 = (float10)FUN_002cdf10(*(undefined4 *)(in_EAX + 4),param_2);
  return fVar2;
}
