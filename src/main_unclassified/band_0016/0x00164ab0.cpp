/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9E8A3A9B29298E5810833EA0AF9DA0BA14ED94BC023630AA17CAF73E83821189
 * Entry: 0x00164ab0, Ghidra index: 4686, label: FUN_00164ab0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00164ab0(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00164a40(&local_18);
  *param_1 = *param_2;
  FUN_000fdba0();
  uVar1 = 0;
  puVar2 = param_2 + 2;
  do {
    param_1[uVar1 + 2] = *puVar2;
    uVar1 = uVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (uVar1 < 4);
  *param_2 = local_18;
  FUN_000fdba0();
  param_2[2] = local_10;
  param_2[3] = local_c;
  param_2[4] = local_8;
  param_2[5] = local_4;
  if (local_14 != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(local_14);
  }
  return;
}
