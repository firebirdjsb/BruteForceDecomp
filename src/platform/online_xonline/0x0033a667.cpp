/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B6AED9BD02D5E148B452E308DE2D2114652430703643B771A4CEFDB5993B8AA1
 * Entry: 0x0033a667, Ghidra index: 12504, label: FUN_0033a667
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_0033a667(void)

{
  int in_EAX;
  int iVar1;
  undefined4 *in_ECX;
  undefined4 in_EDX;
  undefined4 *local_c;
  undefined4 *local_8;
  
  if (in_EAX == 0) {
    in_EAX = 0x10;
  }
  local_c = in_ECX;
  local_8 = in_ECX;
  iVar1 = FUN_003449ff(in_EDX,in_EAX,&local_c);
  if ((((iVar1 != 0) && (iVar1 = FUN_003449ff(in_EDX,0x80000000,&local_8), iVar1 != 0)) &&
      (iVar1 = FUN_00344e30(in_EDX,2,*in_ECX), iVar1 != 0)) &&
     ((iVar1 = FUN_00344a56(in_EDX,local_8), iVar1 != 0 &&
      (iVar1 = FUN_0033a5eb(in_ECX + 1), iVar1 != 0)))) {
    iVar1 = FUN_00344a56(in_EDX,local_c);
    return iVar1 != 0;
  }
  return false;
}
