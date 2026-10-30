/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EECC33690261FA891D940F494AE3DE5DA8F28889487F43576B0B514947058F7A
 * Entry: 0x00139a30, Ghidra index: 3960, label: FUN_00139a30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Label VA 0x003084c0 verified mapped; data/code role unknown. */
extern unsigned char LAB_003084c0;

void FUN_00139a30(undefined4 param_1,int param_2)

{
  undefined4 in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_003084c0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_00139d30(in_ECX);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
