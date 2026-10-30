/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A9B53E1BA73318F02FA2D26485F2D8161FCF7DFC1D90CE2E1B3135EA9EE01579
 * Entry: 0x001d63a0, Ghidra index: 6351, label: FUN_001d63a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* This is the existing Ghidra callee's C++ draft signature, not a verified
 * Xbox guest-register ABI. The original call operands remain unchanged. */
extern int FUN_00087940(int guest_string, uint start, uint count);
int * FUN_001d63a0(int *param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    param_3 = param_3 + -0x1c;
    param_4 = param_4 + -0x1c;
    FUN_00087940(param_4,0,0xffffffff);
  } while (param_3 != param_2);
  *param_1 = param_4;
  return param_1;
}
