/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AAE5C454E14E2B00763B5B93D5096DC65E9271C373E20BDE60D52922ECDC6F9A
 * Entry: 0x00259ac0, Ghidra index: 8510, label: FUN_00259ac0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003934c8;
undefined4 FUN_00259ac0(undefined4 param_1,undefined4 *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  char *in_EAX;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int local_20c;
  int *piStack_208;
  undefined4 *local_204;
  char local_200 [512];
  
  puVar3 = (undefined4 *)FUN_00259e80();
  if (puVar3 == (undefined4 *)0x0) {
    return 0x80004005;
  }
  iVar4 = -(int)in_EAX;
  do {
    cVar1 = *in_EAX;
    in_EAX[(int)(local_200 + iVar4)] = cVar1;
    in_EAX = in_EAX + 1;
  } while (cVar1 != '\0');
  local_204 = puVar3;
  iVar4 = (*(code *)*puVar3)(param_1,local_200,&local_20c);
  if (local_20c == 3) {
    param_3 = (int *)puVar3[1];
    iVar4 = (*(code *)*puVar3)(param_1,0,&local_20c);
  }
  if (param_3 == (int *)0x0) {
    param_3 = (int *)puVar3[1];
  }
  piVar6 = (int *)0x0;
  piStack_208 = param_3;
  while (iVar4 != 0) {
    if (local_20c == 0) {
      uVar5 = FUN_002383b0();
      piVar6 = (int *)FUN_00259510();
      puVar3 = local_204;
      piVar2 = piVar6;
      if (piVar6 == (int *)0x0) {
        piVar6 = (int *)FUN_002ea01d(0x20);
        if (piVar6 == (int *)0x0) {
          piVar6 = (int *)0x0;
        }
        else {
          FUN_0025a860();
          *piVar6 = (int)&PTR_LAB_003934c8;
          *(undefined2 *)((int)piVar6 + 0x1e) = 1;
        }
        *(undefined2 *)(piVar6 + 7) = (undefined2)param_1;
        FUN_002593b0(piStack_208,uVar5);
        iVar4 = FUN_002383b0();
        piVar6[1] = iVar4;
        (**(code **)(*piVar6 + 8))(piVar6);
        puVar3 = local_204;
        piVar2 = piVar6;
      }
    }
    else {
      piVar2 = piStack_208;
      if (local_20c == 1) {
        piVar2 = (int *)piStack_208[3];
      }
    }
    piStack_208 = piVar2;
    iVar4 = (*(code *)*puVar3)(param_1,0,&local_20c);
  }
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)(*piVar6 + 4))(piVar6);
    *param_2 = piVar6;
  }
  return 0;
}
