/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 02E9D99D5F71CC5DD929C86E7758248672EF31CF808F568CDCA88921AAF46F38
 * Entry: 0x00218e40, Ghidra index: 7487, label: FUN_00218e40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00218e40(int param_1)

{
  int in_EAX;
  undefined4 local_8;
  undefined1 local_4 [4];
  
  if (in_EAX != param_1) {
    FUN_002185a0();
    FUN_002185a0();
    FUN_001298b0(local_4,local_8,param_1);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(in_EAX + 0xc));
  }
  return;
}
