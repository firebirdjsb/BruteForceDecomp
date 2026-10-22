/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F1ACA062E6CFE0C4495654831CF7ECAC103E05D9D0A84FE91DF9CE33AF2A85EB
 * Entry: 0x0008f550, Ghidra index: 1751, label: FUN_0008f550
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0008f550(int param_1,int param_2,int param_3)

{
  undefined4 in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_003075b0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x28) {
    FUN_0008f530(in_ECX);
    param_3 = param_3 + 0x28;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
