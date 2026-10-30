/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8153AD24F7601CD79E05D988BDA6160F1E41AF715DCA1D3BB4DB229E6ECA7D68
 * Entry: 0x000235d0, Ghidra index: 227, label: FUN_000235d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_000235d0(int *param_1,int param_2)

{
  float fVar1;
  float10 fVar2;
  float fVar3;
  
  fVar1 = 3.4028235e+38;
  if ((*param_1 != 0) && ((*(byte *)(param_1 + 0xc) & 2) != 0)) {
    fVar1 = (float)param_1[0xb] - (*(float *)(param_2 + 4) - *(float *)(*param_1 + 0x18));
  }
  fVar2 = (float10)FUN_00023540(param_1,param_2);
  fVar3 = (float)fVar2;
  if (fVar1 <= (float)fVar2) {
    fVar3 = fVar1;
  }
  return (float10)fVar3;
}
