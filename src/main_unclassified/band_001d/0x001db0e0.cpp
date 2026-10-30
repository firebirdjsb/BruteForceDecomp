/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3906C7C5C1A80209520B3F2E271E7DDEC3B9BA2C2BBABD20E834787E146AC4E3
 * Entry: 0x001db0e0, Ghidra index: 6515, label: FUN_001db0e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001db0e0(undefined4 *param_1,int param_2)

{
  undefined4 *in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00309980; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00309980U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *in_ECX;
      param_1[1] = in_ECX[1];
      param_1[2] = in_ECX[2];
      param_1[3] = in_ECX[3];
      param_1[4] = in_ECX[4];
      *(undefined1 *)(param_1 + 5) = *(undefined1 *)(in_ECX + 5);
      *(undefined1 *)((int)param_1 + 0x15) = *(undefined1 *)((int)in_ECX + 0x15);
      param_1[6] = in_ECX[6];
      *(undefined1 *)(param_1 + 7) = *(undefined1 *)(in_ECX + 7);
      FUN_001caa30(param_1 + 8);
    }
    param_1 = param_1 + 0x25;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
