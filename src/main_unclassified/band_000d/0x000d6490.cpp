/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 08681C6878BB17D650511E7914922E67C0ED0118083FD181561E0F358AFCDE75
 * Entry: 0x000d6490, Ghidra index: 2664, label: FUN_000d6490
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
undefined1 FUN_000d6490(void)

{
  char cVar1;
  int in_EAX;
  int *piVar2;
  undefined1 uVar3;
  
  uVar3 = 1;
  cVar1 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x24))();
  if ((cVar1 != '\0') && (*(int *)(in_EAX + 0xc4c) == 0)) {
    uVar3 = 0;
    (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
    piVar2 = (int *)FUN_00087dd0();
    if (piVar2 != (int *)0x0) {
      cVar1 = (**(code **)(*piVar2 + 0xc))();
      if (cVar1 != '\0') {
        FUN_000e0560();
        (**(code **)(*piVar2 + 0x10))();
        (**(code **)(**(int **)(in_EAX + 0xbec) + 0x1c))();
        return 1;
      }
      (**(code **)*piVar2)(1);
    }
    (**(code **)(**(int **)(in_EAX + 0xbec) + 0x1c))();
  }
  return uVar3;
}
