/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1C3BEBF31873F3DB4B32C78CC73EEFA5DD13408238DD5ABDDB59AF6FAD721C04
 * Entry: 0x00292350, Ghidra index: 9247, label: FUN_00292350
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00292350(undefined4 param_1,float param_2)

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
      fVar1 = *(float *)(unaff_EBX + iVar3 * 0x14);
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
