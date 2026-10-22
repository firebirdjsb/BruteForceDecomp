/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A9F2FB8BB2FC3FDAB3A30C811E71D46152F10B7F1A451A920F178DD2C368DD3A
 * Entry: 0x00242bc0, Ghidra index: 8039, label: FUN_00242bc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00242bc0(void)

{
  int in_EAX;
  undefined4 *puVar1;
  int *in_ECX;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  uint local_28;
  undefined4 local_18;
  uint local_14;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (in_EAX == 0) {
    FUN_00243e40();
    return;
  }
  if (*in_ECX == 0) {
    local_14 = 0xf;
    local_18 = 0;
    local_28 = local_28 & 0xffffff00;
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    puVar1 = (undefined4 *)FUN_002ea01d(0x38);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = local_38;
      puVar1[1] = local_34;
      puVar1[2] = local_30;
      puVar1[9] = 0xf;
      puVar1[8] = 0;
      *(undefined1 *)(puVar1 + 4) = 0;
      FUN_0001f4f0(local_2c,0,0xffffffff);
      FUN_002454c0(puVar1 + 10);
    }
    *in_ECX = (int)puVar1;
    FUN_00243560();
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(local_28);
    }
  }
  return;
}
