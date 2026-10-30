/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 273DBEE2706158EF614851FBBF649F50C692C1FDB35846DEFB32BE48E1204FF5
 * Entry: 0x0024ab60, Ghidra index: 8227, label: FUN_0024ab60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0024ab60(int param_1,int param_2)

{
  int in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x14) {
    FUN_00249d40();
    *(undefined4 *)(in_EAX + 0x10) = *(undefined4 *)(param_1 + 0x10);
    in_EAX = in_EAX + 0x14;
  }
  return in_EAX;
}
