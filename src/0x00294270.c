/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4BD93DEC40E9B192D37A2CEACD50713C97A199BF72F8D7D0D8CB0AA85169EBFE
 * Entry: 0x00294270, Ghidra index: 9284, label: FUN_00294270
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00294270(undefined4 *param_1)

{
  switch(*param_1) {
  case 0xfffffff7:
  case 0xfffffffc:
    FUN_00294150();
    break;
  case 0xfffffff8:
  case 0xfffffff9:
    FUN_002941a0();
    return 0;
  case 0xfffffffd:
    FUN_002941e0();
    return 0;
  case 0xfffffffe:
  case 0:
    if (*(int *)(param_1[2] + 4) == 0) {
      *(undefined4 *)(param_1[2] + 4) = 1;
      return 0;
    }
  }
  return 0;
}
