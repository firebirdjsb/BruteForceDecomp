/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 34EDE2041D48C70258BA81F98B2831BA9CF6EEFC7FDBE46FA102B38428550AD6
 * Entry: 0x00141e00, Ghidra index: 4114, label: FUN_00141e00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00141e00(void)

{
  int in_EAX;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_002185a0();
  FUN_002185a0();
  FUN_001298b0(&local_4,local_4,local_8);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(undefined4 *)(in_EAX + 0x14));
}
