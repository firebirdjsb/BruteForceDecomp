/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0B1260701EF91E146FDA8F82B04D5A8D6A420443038E633E655FACB0809DBBE3
 * Entry: 0x00314f87, Ghidra index: 12097, label: FUN_00314f87
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00314f87(float *param_1)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float local_10;
  float local_c;
  float local_8;
  
  fVar2 = param_1[0x14];
  local_10 = *(float *)((int)fVar2 + 0x24) - *param_1;
  local_c = *(float *)((int)fVar2 + 0x28) - param_1[1];
  local_8 = *(float *)((int)fVar2 + 0x2c) - param_1[2];
  fVar3 = (float10)FUN_00314c76(&local_10);
  fVar1 = (float)fVar3;
  local_10 = *(float *)((int)fVar2 + 0x24) + *param_1;
  local_c = param_1[1] + *(float *)((int)fVar2 + 0x28);
  local_8 = param_1[2] + *(float *)((int)fVar2 + 0x2c);
  fVar3 = (float10)FUN_00314c76(&local_10);
  if ((float10)fVar1 <= fVar3) {
    param_1[6] = (float)(((float10)90.0 - ((float10)fVar1 / fVar3) * (float10)45.0) * (float10)4.0);
  }
  else {
    param_1[6] = (float)((fVar3 / (float10)fVar1) * (float10)45.0 * (float10)4.0);
  }
  return;
}
