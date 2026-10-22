/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 70CB8FAF8FC98C4D52B30C7D9613A4C3F9E14DDF2C31DA6A9C1B2DC8D320FBF2
 * Entry: 0x00074680, Ghidra index: 1326, label: FUN_00074680
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
extern uint32_t DAT_00469984;
undefined1 FUN_00074680(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  char cVar4;
  int *in_EAX;
  int *piVar5;
  int iVar6;
  undefined4 unaff_EDI;
  undefined1 local_81;
  int iStack_74;
  undefined1 auStack_6c [108];
  
  iVar6 = *in_EAX;
  iVar3 = *(int *)(param_1 + 4);
  local_81 = 0;
  if (iVar3 != 0) {
    FUN_00074920();
    piVar5 = *(int **)(iVar3 + 0x24);
    if (piVar5 != *(int **)(iVar3 + 0x28)) {
      while ((piVar5 == (int *)0x0 || (*piVar5 != iVar6))) {
        piVar5 = piVar5 + 9;
        if (piVar5 == *(int **)(iVar3 + 0x28)) {
          return 0;
        }
      }
      if ((piVar5 != (int *)0x0) && (cVar4 = FUN_00074880(piVar5), cVar4 != '\0')) {
        if (*(int *)(param_1 + 8) != 0) {
          FUN_00074820();
        }
        *(int **)(param_1 + 8) = piVar5;
        piVar5 = (int *)FUN_00076310();
        if (*piVar5 != 0) {
          iVar6 = FUN_0017c170(DAT_00469984);
          *(int *)(param_1 + 0xc) = iVar6;
          if (iVar6 != 0) {
            (**(code **)(*DAT_00469940 + 0x50))(iVar6,0,0x3e19999a);
            FUN_0003f010();
            cVar4 = FUN_0017c110(auStack_6c,0);
            if (cVar4 == '\0') {
              (**(code **)(*DAT_00469940 + 0x20))(*(undefined4 *)(param_1 + 0xc),1);
              *(undefined4 *)(param_1 + 0xc) = 0;
              *(undefined4 *)(param_1 + 8) = 0;
              return (char)((uint)unaff_EDI >> 0x18);
            }
            iVar6 = 0;
            FUN_0025d090();
            if (iStack_74 != *(int *)(param_1 + 0x14)) {
              iVar6 = *(int *)(iStack_74 + 0x10);
            }
            fVar1 = *(float *)(*(int *)(param_1 + 8) + 0x20);
            fVar2 = *(float *)(param_1 + 0x1c);
            piVar5 = (int *)FUN_00075010();
            *piVar5 = iVar6 + 1;
            piVar5[1] = (int)(fVar1 + fVar2);
            local_81 = 1;
          }
        }
      }
    }
  }
  return local_81;
}
