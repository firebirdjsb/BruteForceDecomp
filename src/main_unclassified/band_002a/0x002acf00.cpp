/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D5E3E313F2040DDCE861D1092D1B1B494FDB4438DD50FA9B74D00B2434724225
 * Entry: 0x002acf00, Ghidra index: 9678, label: FUN_002acf00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
short FUN_002acf00(int *param_1)

{
  if (*(short *)((int)param_1 + 0x1e) != 0) {
    *(short *)((int)param_1 + 0x1e) = *(short *)((int)param_1 + 0x1e) + -1;
  }
  if (*(short *)((int)param_1 + 0x1e) == 0) {
    *(undefined2 *)((int)param_1 + 0x1e) = 1;
    (**(code **)(*param_1 + 0x44))(1);
    return 0;
  }
  return *(short *)((int)param_1 + 0x1e);
}
