/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 91FDA170AD26B93CE4D6AB670462D9D343B7EFFDE534EC8AA5F372F057602AE2
 * Entry: 0x001ed480, Ghidra index: 6932, label: FUN_001ed480
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469aac;
extern uint32_t *DAT_00469b58;
void FUN_001ed480(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int *piVar4;
  int unaff_ESI;
  
  iVar3 = *(int *)(in_EAX * 0x2c + 0xac + unaff_ESI);
  cVar1 = (**(code **)*DAT_00469b58)();
  if ((cVar1 != '\0') && (DAT_00469aac != 0)) {
    iVar2 = (**(code **)(**(int **)(DAT_00469aac + 0xbec) + 8))(iVar3);
    if (iVar2 != 0) {
      (**(code **)(*(int *)DAT_00469b58[2] + 0x16c))(iVar2);
    }
  }
  *(undefined4 *)(in_EAX * 0x2c + 0xac + unaff_ESI) = 9;
  iVar2 = *(int *)(unaff_ESI + 0xa8) + -1;
  *(int *)(unaff_ESI + 0xa8) = iVar2;
  if (iVar2 < 1) {
    *(undefined4 *)(unaff_ESI + 0x5768) = 9;
  }
  else {
    cVar1 = FUN_002e5880();
    if ((cVar1 != '\0') && (*(int *)(unaff_ESI + 0x5768) == iVar3)) {
      *(undefined4 *)(unaff_ESI + 0x5768) = 9;
      iVar3 = 0;
      piVar4 = (int *)(unaff_ESI + 0xac);
      do {
        if (*piVar4 != 9) {
          *(undefined4 *)(unaff_ESI + 0x5768) = *(undefined4 *)(iVar3 * 0x2c + 0xac + unaff_ESI);
          return;
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 0xb;
      } while (iVar3 < 4);
      return;
    }
  }
  return;
}
