/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D48F98CF94C27BE699B0002C1C9B602AF388EED99E86CFB0749A67A30AA108E8
 * Entry: 0x000e7780, Ghidra index: 2872, label: FUN_000e7780
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000e7780(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float *pfVar2;
  char cVar3;
  int *in_EAX;
  int iVar4;
  int unaff_EBX;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar2 = param_1;
  cVar3 = FUN_00022bc0(&param_1);
  if (cVar3 == '\0') {
    param_1 = (float *)0x0;
    iVar4 = (**(code **)(*in_EAX + 0x40))();
    local_c = *(float *)(iVar4 + 0x24);
    local_8 = *(float *)(iVar4 + 0x28);
    local_4 = *(float *)(iVar4 + 0x2c);
  }
  fVar1 = ABS((local_c - *pfVar2) * *(float *)(unaff_EBX + 0x20) +
              (local_8 - pfVar2[1]) * *(float *)(unaff_EBX + 0x24) +
              (local_4 - pfVar2[2]) * *(float *)(unaff_EBX + 0x28));
  *param_2 = fVar1;
  if ((float)param_1 <= fVar1) {
    *param_3 = (fVar1 - (float)param_1) + 1.1920929e-07;
    return;
  }
  *param_3 = 1.1920929e-07;
  return;
}
