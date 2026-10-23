/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0B830A44D5A18B20117B40B72F3E68476FAB00ED834CC2A45C059D8FCBE2A321
 * Entry: 0x000edf70, Ghidra index: 2957, label: FUN_000edf70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000edf70(undefined4 param_1,int *param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined1 uVar4;
  int in_ECX;
  
  puVar2 = param_3;
  piVar1 = param_2;
  cVar3 = FUN_000ecdc0(param_1,param_2,param_3);
  param_3 = (undefined1 *)CONCAT31(param_3._1_3_,cVar3);
  if (cVar3 == '\0') {
    param_2 = (int *)0xe1a86468;
    FUN_0020d220(*(undefined4 *)(in_ECX + 0x10),param_1,&param_2,in_ECX + 0x38,piVar1,&param_3,2);
    param_2 = (int *)0x1caac75e;
    FUN_0020d220(*(undefined4 *)(in_ECX + 0x10),param_1,&param_2,in_ECX + 0x44,piVar1,&param_3,2);
    uVar4 = *(undefined1 *)(in_ECX + 0x50);
    if (((char)param_3 == '\0') && (*piVar1 == -0x1714419)) {
      if ((char)param_1 != '\0') {
        *puVar2 = uVar4;
        *(undefined1 *)(in_ECX + 0x50) = uVar4;
        return 1;
      }
      uVar4 = *puVar2;
    }
    *(undefined1 *)(in_ECX + 0x50) = uVar4;
  }
  return 1;
}
