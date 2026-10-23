/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 11F66F7BA01FCA847B6C9EDA4158327BDC4AE93984F11A79EBE165E18CE3F97F
 * Entry: 0x001dc150, Ghidra index: 6543, label: FUN_001dc150
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dc150(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x003096a0; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x003096a0U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 0x18) = 0xf;
      *(undefined4 *)(param_1 + 0x14) = 0;
      if (*(uint *)(param_1 + 0x18) < 0x10) {
        puVar1 = (undefined1 *)(param_1 + 4);
      }
      else {
        puVar1 = *(undefined1 **)(param_1 + 4);
      }
      *puVar1 = 0;
      FUN_0001f4f0(in_ECX,0,0xffffffff);
      FUN_001ccf30(param_1 + 0x1c);
      FUN_001ccf30(param_1 + 0x2c);
      FUN_001e0dd0(param_1 + 0x3c);
    }
    param_1 = param_1 + 0x4c;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
