/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 00A870C497B61F8763B65E218C3765440F5FC77C9290E5FE46C2E11D0F987736
 * Entry: 0x00086a60, Ghidra index: 1593, label: FUN_00086a60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Xbox image VA 0x00307e50; address-only symbol, link definition/role unverified. */
extern void FUN_00086200(void);

extern unsigned char LAB_00307e50;

void FUN_00086a60(int param_1,int param_2)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00307e50;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != 0) {
      FUN_00086200();
    }
    param_1 = param_1 + 0x3c;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
