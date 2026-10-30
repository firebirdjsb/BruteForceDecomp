/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D4B5A991FC3ED7AAD05F02B59437753181054F0C57C855CCAED204A9BF669477
 * Entry: 0x0006ecf0, Ghidra index: 1251, label: FUN_0006ecf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0006ecf0(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6)

{
  float fVar1;
  float *in_EAX;
  
  *in_EAX = 0.0;
  in_EAX[1] = 0.0;
  in_EAX[2] = 0.0;
  in_EAX[3] = 0.0;
  in_EAX[4] = 0.0;
  in_EAX[5] = 0.0;
  in_EAX[6] = 0.0;
  in_EAX[7] = 0.0;
  in_EAX[8] = 0.0;
  in_EAX[9] = 0.0;
  in_EAX[10] = 0.0;
  in_EAX[0xb] = 0.0;
  in_EAX[0xc] = 0.0;
  in_EAX[0xd] = 0.0;
  in_EAX[0xe] = 0.0;
  in_EAX[0xf] = 0.0;
  in_EAX[0xf] = 1.0;
  *in_EAX = 2.0 / (param_2 - param_1);
  in_EAX[5] = 2.0 / (param_4 - param_3);
  fVar1 = 1.0 / (param_6 - param_5);
  in_EAX[10] = fVar1;
  in_EAX[3] = -((param_1 + param_2) / (param_2 - param_1));
  in_EAX[7] = -((param_3 + param_4) / (param_4 - param_3));
  in_EAX[0xb] = -(fVar1 * param_5);
  return;
}
