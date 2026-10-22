/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F6BD3651218F983B2A9FBE22F70A7A1D3B3791CCFFC687F793CF7362EA6CC573
 * Entry: 0x001d9190, Ghidra index: 6456, label: FUN_001d9190
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_001d9190(int *param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    param_3 = param_3 + -0x2c;
    param_4 = param_4 + -0x2c;
    FUN_0001f4f0(param_3,0,0xffffffff);
    FUN_0010b1e0();
  } while (param_3 != param_2);
  *param_1 = param_4;
  return param_1;
}
