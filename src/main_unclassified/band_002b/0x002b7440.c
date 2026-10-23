/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CBF163C392A5D5FC3F22530F6FFCCFB0A159351E02E6435046FD99BABC2A6EAA
 * Entry: 0x002b7440, Ghidra index: 9847, label: FUN_002b7440
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002b7440(double *param_1)

{
  if ((double)*(int *)((int)param_1 + 0x1c) < *param_1) {
    FUN_002c26e0();
    *(int *)((int)param_1 + 0x1c) = (int)(*param_1 + 10.0);
  }
  return;
}
