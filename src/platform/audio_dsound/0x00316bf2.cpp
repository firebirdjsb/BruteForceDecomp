/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E616424CAA2D1222B90D1DC47B4E5D9318FC4A0B146BDD23A13DC0398F1002F2
 * Entry: 0x00316bf2, Ghidra index: 12158, label: FUN_00316bf2
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_00316bf2(int *param_1)

{
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(param_1);
  }
  return param_1;
}
