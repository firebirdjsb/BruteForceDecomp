/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6CE985EB2793BAB27EC472399C59096BEAD3E31FDE918C577519E05000FADF9A
 * Entry: 0x001dd3e0, Ghidra index: 6625, label: FUN_001dd3e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001dd3e0(int param_1,int param_2,int param_3)

{
  undefined4 in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  /* Original entry+5: push 0x00309130; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00309130U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x30) {
    FUN_001dcca0(in_ECX);
    param_3 = param_3 + 0x30;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
