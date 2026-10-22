/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BD61975458E2ABA91824DD9BFB855493F90D90376E7E6B752F0C5EE02CF6E0F5
 * Entry: 0x0014dfd0, Ghidra index: 4382, label: FUN_0014dfd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
void FUN_0014dfd0(void)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int in_EAX;
  int *piVar4;
  int *local_8;
  int *local_4;
  
  bVar2 = false;
  if ((*(int *)(in_EAX + 0x1d4) != 0) && (*(int *)(*(int *)(in_EAX + 0x1d4) + 0x59c) != 0)) {
    cVar3 = FUN_0005c0a0();
    if (cVar3 != '\0') {
      bVar2 = true;
    }
  }
  FUN_0014dc50();
  if ((local_8 != (int *)0x0) && (piVar1 = (int *)local_8[8], piVar1 != (int *)0x0)) {
    (**(code **)(*local_8 + 0x34))(1);
    (**(code **)(*piVar1 + 0xb8))(0x3f800000);
    *(uint *)(piVar1[0x1b] + 0x44) = *(uint *)(piVar1[0x1b] + 0x44) | 0x80;
    piVar4 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
    if (*piVar4 == 0x17506391) {
      if (bVar2) {
        piVar1[0x6a] = 0x43960000;
      }
    }
    else if ((float)piVar1[0x6a] == 0.0) {
      piVar1[0x6a] = 0x41a00000;
    }
  }
  if ((local_4 != (int *)0x0) && (piVar1 = (int *)local_4[8], piVar1 != (int *)0x0)) {
    (**(code **)(*local_4 + 0x34))(1);
    (**(code **)(*piVar1 + 0xb8))(0x3f800000);
    *(uint *)(piVar1[0x1b] + 0x44) = *(uint *)(piVar1[0x1b] + 0x44) | 0x80;
    piVar4 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
    if (*piVar4 == 0x17506391) {
      if (bVar2) {
        piVar1[0x6a] = 0x43960000;
      }
    }
    else if ((float)piVar1[0x6a] == 0.0) {
      piVar1[0x6a] = 0x41a00000;
      return;
    }
  }
  return;
}
