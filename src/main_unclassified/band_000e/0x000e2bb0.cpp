/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A37F9DB34715201ED9312E6F5A380D058B99B15CA13087B244707A7B612D902E
 * Entry: 0x000e2bb0, Ghidra index: 2800, label: FUN_000e2bb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE mapped VA 0x00307920; address reference only, symbol linkage unverified. */
extern unsigned char LAB_00307920;

void FUN_000e2bb0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00307920;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_00076370(param_4,param_3);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
