/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4CF4ED61FC46926A71636C8E4E504B8A21755CD3D5D12A83786D5FED1EEC45E4
 * Entry: 0x00139180, Ghidra index: 3937, label: FUN_00139180
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00139180(int param_1)

{
  if (*(char *)(param_1 + 0x21) != '\0') {
    return;
  }
  FUN_00139180(*(undefined4 *)(param_1 + 8));
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_00139390(param_1 + 0x10);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(param_1 + 0x14));
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(param_1);
}
