/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4DC8C18A39615609D23B86654BD0EDAF57C8A236030C9A53EC86D294588C6204
 * Entry: 0x00101000, Ghidra index: 3232, label: FUN_00101000
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
void FUN_00101000(char param_1)

{
  int *piVar1;
  char cVar2;
  int in_EAX;
  int *piVar3;
  int iVar4;
  
  if ((*(byte *)(in_EAX + 0x65) & 0x40) == 0) {
    piVar3 = (int *)FUN_001001d0();
    iVar4 = FUN_00100210();
    piVar1 = DAT_00469940;
    if (param_1 == '\0') {
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0x40))();
      }
      if ((iVar4 != 0) && (cVar2 = (**(code **)(*DAT_00469940 + 0x60))(), cVar2 == '\0')) {
        *(undefined4 *)(iVar4 + 0x74) = 0;
        FUN_00103250();
      }
    }
    else if (iVar4 != 0) {
      *(byte *)(iVar4 + 0x60) = *(byte *)(iVar4 + 0x60) | 1;
      (**(code **)(*piVar1 + 0x20))(*(undefined4 *)(iVar4 + 0x78),1);
      *(undefined4 *)(iVar4 + 0x78) = 0;
      return;
    }
  }
  return;
}
