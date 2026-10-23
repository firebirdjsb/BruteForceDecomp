/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 50E4146351D09A5923973E1F199FC590BDADACEADF8B8852B2AF32D22C1DF272
 * Entry: 0x00218ec0, Ghidra index: 7488, label: FUN_00218ec0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00218ec0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_003086c0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_00219010(param_4);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
