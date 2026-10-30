/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 76AFF128579F4EF68227281E155AE6DD5812EC3131A0B06781CCEC69AF1CB573
 * Entry: 0x001f39b0, Ghidra index: 7026, label: FUN_001f39b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001f39b0(undefined4 *param_1,int param_2)

{
  int iVar1;
  int *unaff_retaddr;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  undefined1 auStack_c [12];
  
  local_1c = *(float *)(param_1[6] + 0x10);
  local_20 = (*(float *)(param_1[0xe] + 4) - *(float *)(param_1[0xe] + 8)) * 0.5;
  local_24 = *(float *)(param_1[6] + 0x10) + 2.0;
  local_10 = param_1[1];
  local_18 = *param_1;
  local_14 = *(float *)(param_1[0xe] + 4) - local_20;
  local_28 = local_20 * local_20 + local_24 * local_24 + local_1c * local_1c;
  local_2c = SQRT(local_28);
  (**(code **)(*(int *)(param_2 + 0x48) + 0x14))();
  FUN_000621c0();
  iVar1 = (**(code **)(*(int *)(param_2 + 0x48) + 0x50))(auStack_c,local_2c);
  if (iVar1 == 3) {
    (**(code **)(*unaff_retaddr + 0x128))(&local_20,&local_2c);
  }
  return;
}
