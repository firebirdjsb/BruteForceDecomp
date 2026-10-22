/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2114D168F466AD401D0AFCB6DA6899AEBB00AE8680F8BCF161F482816E4FB359
 * Entry: 0x0025d0d0, Ghidra index: 8564, label: FUN_0025d0d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0025d0d0(void)

{
  undefined4 *in_EAX;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_18 = *in_EAX;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  local_14 = 0;
  FUN_0025bf60();
  FUN_0010bc40();
  FUN_0025d710(&local_18);
  FUN_0025d4f0();
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(0);
}
