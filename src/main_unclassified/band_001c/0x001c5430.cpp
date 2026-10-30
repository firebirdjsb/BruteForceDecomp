/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C89A7E41610882ED28FB61CAF0A3F15B47BF971162C1229BD43749F9B0BA8C8C
 * Entry: 0x001c5430, Ghidra index: 5793, label: FUN_001c5430
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_001c5430(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 != param_4) {
    iVar2 = FUN_001e0af0(param_4,*(undefined4 *)(param_1 + 8),param_1);
    iVar1 = *(int *)(param_1 + 8);
    for (iVar3 = iVar2; iVar3 != iVar1; iVar3 = iVar3 + 8) {
      FUN_000519a0();
    }
    *(int *)(param_1 + 8) = iVar2;
    *param_2 = param_3;
    return param_2;
  }
  *param_2 = param_3;
  return param_2;
}
