/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0D578B259DE07A8FE5FC6F7F88BC68B3FBA8D6C5331A6F1F87B778136D620B43
 * Entry: 0x00086e40, Ghidra index: 1601, label: FUN_00086e40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Xbox image VA 0x00308540; address-only symbol, link definition/role unverified. */
extern void FUN_00086d60(void);

extern unsigned char LAB_00308540;

int FUN_00086e40(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00308540;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x24) {
    FUN_00086d60(param_4);
    param_3 = param_3 + 0x24;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
