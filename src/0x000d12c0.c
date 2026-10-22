/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4B74460C9BB330057BA7AFEBA2AAD7ED76BE857B941B418C4033BB7A166B554C
 * Entry: 0x000d12c0, Ghidra index: 2594, label: FUN_000d12c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Xbox VA 0x00307df0; original label address; definition and semantics pending. */
extern unsigned char LAB_00307df0;

void FUN_000d12c0(undefined4 param_1,int param_2)

{
  undefined4 in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00307df0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_000d1350(in_ECX);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
