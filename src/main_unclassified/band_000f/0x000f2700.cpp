/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2D097CCF47C95147B00A59F4561D9228E9147CE2A37EBECBD9FC9E76AD131BCC
 * Entry: 0x000f2700, Ghidra index: 3025, label: FUN_000f2700
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
void FUN_000f2700(void)

{
  char cVar1;
  int *in_EAX;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_204 [516];
  
  if ((in_EAX != (int *)0x0) && (iVar2 = (**(code **)(*in_EAX + 4))(), iVar2 == 6)) {
    iVar2 = **(int **)(DAT_00469b58 + 8);
    uVar3 = FUN_00102000();
    iVar2 = (**(code **)(iVar2 + 0x130))(uVar3);
    if (iVar2 != 0) {
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = FUN_000efa70();
      if (cVar1 != '\0') {
        FUN_000f22f0();
        FUN_000f22b0();
        (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
      }
      uVar3 = FUN_001e97c0(iVar2 + 1);
      FUN_002ea9a9(auStack_204,0x100,uVar3);
      iVar2 = FUN_001098f0();
      if (iVar2 != 0) {
        FUN_0010a7d0();
      }
    }
  }
  return;
}
