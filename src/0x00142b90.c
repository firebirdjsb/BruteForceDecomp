/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A92DF558458B067BB7F64FB83A904FCC5B3589C744A00D4CB6EB56B87093061A
 * Entry: 0x00142b90, Ghidra index: 4133, label: FUN_00142b90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00142b90(void)

{
  int in_EAX;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_002185a0();
  FUN_00050b40();
  FUN_002185a0();
  FUN_00141cc0(&local_4,local_4,local_8);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(undefined4 *)(in_EAX + 0x14));
}
