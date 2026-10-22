/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7F6E8FB1BD26FA91566E9109C2955E89EC7813B5594D71049B5B444D505A80DC
 * Entry: 0x00160000, Ghidra index: 4584, label: FUN_00160000
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00160000(byte param_1)

{
  int in_EAX;
  
  if (0xf < *(uint *)(in_EAX + 0x140)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(in_EAX + 300));
  }
  *(undefined4 *)(in_EAX + 0x140) = 0xf;
  *(undefined4 *)(in_EAX + 0x13c) = 0;
  *(undefined1 *)(in_EAX + 300) = 0;
  FUN_00160220();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
