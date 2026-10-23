/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1D11CA4FFF2B68941073EFA8814578830B9BB471B08137D7EEEB80DDA8D48BB5
 * Entry: 0x001a1890, Ghidra index: 5331, label: FUN_001a1890
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001a1890(byte param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x2c) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(in_ECX + 0x2c));
  }
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined4 *)(in_ECX + 0x30) = 0;
  *(undefined4 *)(in_ECX + 0x34) = 0;
  FUN_00077cc0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
