/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 498CAE54EFCE0497C48B93F1EA13B3FD6F5FA99F15E394E7683B4C8AFA008192
 * Entry: 0x001158f0, Ghidra index: 3580, label: FUN_001158f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001158f0(undefined4 param_1)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x38))(param_1);
  FUN_002368d0(0);
  FUN_00115830();
  if (in_ECX[0x179] != 0) {
    FUN_0006e940();
  }
  FUN_001152a0();
  in_ECX[0x166] = 0x42c80000;
  in_ECX[0x165] = 0x42c80000;
  return;
}
