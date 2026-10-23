/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5805256037CEB74F1281E38CAF9A3A5A0947F24A0EBB12CF28D42706EDD764DC
 * Entry: 0x000b1960, Ghidra index: 2126, label: FUN_000b1960
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Xbox VA 0x00307590; original label address; definition and semantics pending. */
extern unsigned char LAB_00307590;

int FUN_000b1960(int param_1,int param_2,int param_3)

{
  undefined4 in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00307590;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x2c) {
    FUN_000b1920(in_ECX);
    param_3 = param_3 + 0x2c;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
