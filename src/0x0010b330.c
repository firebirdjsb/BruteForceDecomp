/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EBE78F0FDCB56A64BC947F2F9729A50006CCA210CC4EA5A36D8C2353142C7346
 * Entry: 0x0010b330, Ghidra index: 3444, label: FUN_0010b330
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0010b330(void)

{
  undefined4 *in_EAX;
  int *piVar1;
  undefined4 local_2c;
  undefined4 local_14;
  undefined1 local_10 [4];
  int local_c;
  undefined4 local_8;
  
  local_14 = *in_EAX;
  FUN_0010b470(local_10);
  piVar1 = (int *)FUN_0010b3b0(&local_14);
  if (local_c != 0) {
    FUN_00087630(local_8,local_10,local_2c);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(local_c);
  }
  return *piVar1 + 0x10;
}
