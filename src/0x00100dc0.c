/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4766ED26C60334875854A009D6B8A21D31B9EE5C91E1B68C486618E44B5BC52E
 * Entry: 0x00100dc0, Ghidra index: 3225, label: FUN_00100dc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469940;
extern uint32_t DAT_00469b58;
void FUN_00100dc0(void)

{
  int in_EAX;
  int *piVar1;
  int iVar2;
  
  if (*(int **)(in_EAX + 0x94) != (int *)0x0) {
    (**(code **)(**(int **)(in_EAX + 0x94) + 0xc))();
  }
  FUN_00100c00();
  piVar1 = (int *)FUN_001001d0();
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x44))();
    piVar1 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
    (**(code **)(*piVar1 + 0x4c))();
  }
  iVar2 = FUN_00100210();
  piVar1 = DAT_00469940;
  if (iVar2 != 0) {
    *(byte *)(iVar2 + 0x60) = *(byte *)(iVar2 + 0x60) | 1;
    (**(code **)(*piVar1 + 0x20))(*(undefined4 *)(iVar2 + 0x78),1);
    *(undefined4 *)(iVar2 + 0x78) = 0;
  }
  if (*(int *)(in_EAX + 0x6c) != 0) {
    if (*(char *)(in_EAX + 100) < '\0') {
      (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x30))();
      return;
    }
    (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x20))(*(int *)(in_EAX + 0x6c));
  }
  return;
}
