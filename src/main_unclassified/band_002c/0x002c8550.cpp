/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3094FE4762041A98C2E78A37292534CEEB12FF3C8C5F06A24324FA06829E249B
 * Entry: 0x002c8550, Ghidra index: 10124, label: FUN_002c8550
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_002c8550(undefined4 param_1,int *param_2)

{
  int *in_EAX;
  int iVar1;
  byte in_CL;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *in_EAX << (in_CL & 0x1f);
  iVar3 = in_EAX[1] << (in_CL & 0x1f);
  iVar4 = in_EAX[2] << (in_CL & 0x1f);
  iVar1 = (2 << (in_CL & 0x1f)) + -2;
  if (*param_2 < iVar2) {
    return false;
  }
  if ((((iVar3 <= param_2[1]) && (iVar4 <= param_2[2])) && (*param_2 <= iVar2 + iVar1)) &&
     (param_2[1] <= iVar1 + iVar3)) {
    return param_2[2] <= iVar1 + iVar4;
  }
  return false;
}
