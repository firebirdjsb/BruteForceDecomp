/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BC0C230EABA030829B9FCAF83FCB53094F7A95EF3DCDC525D6A337CB12C94431
 * Entry: 0x003804da, Ghidra index: 13530, label: FUN_003804da
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003804da(undefined4 param_1)

{
  int iVar1;
  undefined4 in_EDX;
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  local_10 = 0xfff85ee0;
  iVar1 = KeWaitForSingleObject(param_1,0,0,0,&local_10);
  if (iVar1 == 0x102) {
    FUN_00380fb1(in_EDX);
    KeWaitForSingleObject(param_1,0,0,0,0);
  }
  return;
}
