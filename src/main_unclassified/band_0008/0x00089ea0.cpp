/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 370EDDBB8E3AABB692736EA34442DE565A8450587DC1B1B1B01CC45DC581E7CC
 * Entry: 0x00089ea0, Ghidra index: 1649, label: FUN_00089ea0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_0014bc50(void);
extern void FUN_00160da0(void);
extern int FUN_0014bfe0(int param_1);
extern void FUN_0014bc90(void);

extern uint32_t DAT_00469b58;
void FUN_00089ea0(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  cVar1 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x9c))();
  if (((cVar1 != '\0') && (in_EAX != 0)) && (*(int *)(in_EAX + 0x14) != 0)) {
    FUN_0014bc50();
    uStack_c = 0;
    uStack_8 = 0;
    iVar3 = 0;
    while( true ) {
      cVar1 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0xc4))(iVar3,&uStack_c,&uStack_8);
      iVar3 = iVar3 + 1;
      if (cVar1 == '\0') break;
      uStack_4 = uStack_c;
      iVar2 = FUN_00160da0(0xffffffff,1);
      if (iVar2 != 0) {
        FUN_0014bfe0(iVar2);
      }
    }
    FUN_0014bc90();
  }
  return;
}
