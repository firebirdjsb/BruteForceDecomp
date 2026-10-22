/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 939786615D8FCCA8EFDB8590327E58EFD0FFC0493A5BD119FBA79171B0CE78FF
 * Entry: 0x00270510, Ghidra index: 8787, label: FUN_00270510
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00270510(undefined4 param_1)

{
  char cVar1;
  float *in_EAX;
  char *pcVar2;
  int iVar3;
  undefined4 *unaff_ESI;
  undefined4 uVar4;
  int local_204;
  char local_200 [512];
  
  uVar4 = 0;
  FUN_002eaa86(local_200,param_1,(double)*in_EAX,(double)in_EAX[1],(double)in_EAX[2]);
  pcVar2 = local_200;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if ((char *)unaff_ESI[2] < pcVar2 + (unaff_ESI[3] - (int)(local_200 + 1))) {
    uVar4 = 0;
    (**(code **)(*(int *)*unaff_ESI + 0x14))();
    if (local_204 != unaff_ESI[3]) {
      uVar4 = 0x80004005;
    }
    unaff_ESI[3] = 0;
  }
  iVar3 = FUN_002eaa86();
  unaff_ESI[3] = unaff_ESI[3] + iVar3;
  return uVar4;
}
