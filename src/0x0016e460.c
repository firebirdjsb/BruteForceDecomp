/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6FB0B07427B894ABBD7E86C4F62DC859B5EAFAF5E161C51DC78A978E4FAF0014
 * Entry: 0x0016e460, Ghidra index: 4816, label: FUN_0016e460
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original XBE mapped VA 0x00307d00; address-only evidence, type unknown. */
extern unsigned char LAB_00307d00;
int FUN_0016e460(int param_1,int param_2,int param_3)

{
  undefined4 in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00307d00;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x14) {
    FUN_0016df00(in_ECX);
    param_3 = param_3 + 0x14;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
