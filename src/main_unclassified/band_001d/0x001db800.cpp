/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 30993B161942D8F11927A51A84F08D3A7D9D3D4E055D3B1B34A578B4B3DB1DA4
 * Entry: 0x001db800, Ghidra index: 6527, label: FUN_001db800
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001db800(int param_1,int param_2)

{
  int in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x003096d0; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x003096d0U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != 0) {
      FUN_001ca1d0();
      *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(in_ECX + 0x1a8);
      *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(in_ECX + 0x1ac);
      *(undefined1 *)(param_1 + 0x1b0) = *(undefined1 *)(in_ECX + 0x1b0);
      *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(in_ECX + 0x1b4);
    }
    param_1 = param_1 + 0x1b8;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
