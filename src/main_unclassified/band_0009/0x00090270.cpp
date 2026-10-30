/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A72E8BFBCA82EF0DC271EC2C225528BF76AFDC7934406D0CF6BDF15F30085BF3
 * Entry: 0x00090270, Ghidra index: 1763, label: FUN_00090270
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00090270(byte param_1)

{
  FUN_0008fb40();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
