/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0B1CF548D3ACCABFF869D78443560918F98DBA76581FD471BBB71C0EB33179C8
 * Entry: 0x0017f580, Ghidra index: 5129, label: FUN_0017f580
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0017f580(undefined4 param_1,int *param_2,float param_3)

{
  float fVar1;
  uint in_EAX;
  float *pfVar2;
  uint uVar3;
  float10 fVar4;
  float local_c;
  int local_8 [2];
  
  uVar3 = in_EAX & 0xffffff00;
  if (param_2 != (int *)0x0) {
    fVar1 = (float)param_2[0xd];
    if (param_2[0xd] < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    fVar4 = (float10)FUN_00232f20(fVar1 * 2.0833333e-05);
    local_c = (float)fVar4;
    fVar4 = (float10)FUN_00232f20(0x40000000);
    pfVar2 = &local_c;
    local_8[0] = (int)(((float10)local_c / fVar4 + (float10)param_3) * (float10)4096.0);
    local_c = 1.1478e-41;
    local_8[1] = 0xffff8001;
    if (local_8[0] < 0x2000) {
      pfVar2 = (float *)local_8;
    }
    if ((int)*pfVar2 < -0x7ffe) {
      pfVar2 = (float *)(local_8 + 1);
    }
    uVar3 = (**(code **)(*param_2 + 0x1c))(*pfVar2);
  }
  return uVar3;
}
