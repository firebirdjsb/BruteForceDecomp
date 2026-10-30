/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 45369A2DE2AA421A7C279AB050CDBDEBFC57A7E8B6F9566A01FACBB3657D96F3
 * Entry: 0x00259ca0, Ghidra index: 8512, label: FUN_00259ca0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00259ca0(undefined4 param_1,char *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  int local_204;
  char local_200 [512];
  
  puVar2 = (undefined4 *)FUN_00259e80();
  if (puVar2 == (undefined4 *)0x0) {
    return 0x80004005;
  }
  pcVar3 = param_2;
  do {
    cVar1 = *pcVar3;
    pcVar3[(int)(local_200 + -(int)param_2)] = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar4 = (*(code *)*puVar2)(param_1,local_200,&local_204);
  if (local_204 == 3) {
    iVar4 = (*(code *)*puVar2)(param_1,0,&local_204);
  }
  piVar5 = (int *)0x0;
  do {
    if (iVar4 == 0) {
      (**(code **)(*piVar5 + 4))(piVar5);
      *(int **)param_2 = piVar5;
      return 0;
    }
    if (local_204 == 0) {
      FUN_002383b0();
      piVar5 = (int *)FUN_00259510();
      if (piVar5 == (int *)0x0) {
        return 0x80004005;
      }
    }
    iVar4 = (*(code *)*puVar2)(param_1,0,&local_204);
  } while( true );
}
