/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B404EBB93E1EE33A9758595821A420CC58D342C80B759B8D0857DAE2C5351986
 * Entry: 0x001dffc0, Ghidra index: 6697, label: FUN_001dffc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001dffc0(int param_1,int param_2,int param_3)

{
  undefined4 in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00307720; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00307720U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x18) {
    FUN_001dcda0(in_ECX);
    param_3 = param_3 + 0x18;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
