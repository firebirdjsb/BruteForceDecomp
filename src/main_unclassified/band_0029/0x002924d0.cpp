/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AAFE7A4F4A9602B834287232373DCC2067263FEE8DADF8DDEEA281AB005C2CA2
 * Entry: 0x002924d0, Ghidra index: 9250, label: FUN_002924d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002924d0(undefined4 param_1,float param_2)

{
  float fVar1;
  int in_EAX;
  int *piVar2;
  int unaff_EBX;
  int iVar3;
  int iVar4;
  int local_8;
  int local_4;
  
  local_8 = in_EAX + -1;
  iVar3 = 0;
  local_4 = 0;
  iVar4 = iVar3;
  if (1 < local_8) {
    do {
      iVar3 = (iVar4 + local_8) / 2;
      fVar1 = *(float *)(iVar3 * 0x10 + unaff_EBX);
      if (fVar1 == param_2) {
        return iVar3;
      }
      if (param_2 < fVar1) {
        local_8 = iVar3;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
    } while (1 < local_8 - iVar3);
    local_4 = iVar3;
  }
  piVar2 = &local_8;
  if (iVar3 <= local_8) {
    piVar2 = &local_4;
  }
  return *piVar2;
}
