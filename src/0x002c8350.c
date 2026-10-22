/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F572C4BBABF9F74E9F9F6BCA4685106CA766520B8F0FB9B645415A5231A018EB
 * Entry: 0x002c8350, Ghidra index: 10121, label: FUN_002c8350
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002c8350(int param_1,float param_2)

{
  double *pdVar1;
  double *pdVar2;
  int iVar3;
  undefined4 uVar4;
  double dVar5;
  undefined4 in_EAX;
  undefined4 uVar6;
  
  pdVar2 = *(double **)(param_1 + 0xc);
  iVar3 = *(int *)(*(int *)(param_1 + 0x24) + 0x14);
  pdVar1 = (double *)(iVar3 + 0x108);
  uVar6 = *(undefined4 *)pdVar1;
  uVar4 = *(undefined4 *)(iVar3 + 0x10c);
  dVar5 = *pdVar1;
  if (pdVar2 != (double *)0x0) {
    FUN_002d5de0();
    uVar6 = FUN_002d5d50(param_1,(float)(((float10)dVar5 - (float10)*pdVar2) *
                                         (float10)*(float *)(pdVar2 + 1) +
                                         (float10)*(float *)(pdVar2 + 2) + (float10)param_2));
    *(undefined4 *)(param_1 + 4) = uVar6;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = in_EAX;
  FUN_002bef70(param_1,param_2,uVar6,uVar4);
  return;
}
