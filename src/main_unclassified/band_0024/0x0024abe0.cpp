/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0001C8F0CF1099C391B7C01CA1DA46BC0B71A2C877F38801D707A3A5FA4A4A74
 * Entry: 0x0024abe0, Ghidra index: 8229, label: FUN_0024abe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched declaration only; original x86 guest ABI remains unverified. */
extern void FUN_00249a20(void);
int * FUN_0024abe0(int *param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    param_3 = param_3 + -0x2c;
    param_4 = param_4 + -0x2c;
    FUN_00249a20();
  } while (param_3 != param_2);
  *param_1 = param_4;
  return param_1;
}
