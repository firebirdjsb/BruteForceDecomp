/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 62AAA0B3FFBB719AA0EC8F4B17E283D64711260A54A05893E17E67E4C38AE2A0
 * Entry: 0x002a5230, Ghidra index: 9561, label: FUN_002a5230
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046af4c;
extern uint32_t DAT_0046af6c;
extern uint32_t DAT_0046af70;
extern uint32_t DAT_0046af74;
extern uint32_t DAT_0046af78;
extern uint32_t _DAT_0046af50;
extern uint32_t _DAT_0046af54;
extern uint32_t _DAT_0046af58;
extern uint32_t _DAT_0046af5c;
extern uint32_t _DAT_0046af60;
extern uint32_t _DAT_0046af64;
extern uint32_t _DAT_0046af68;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002a5230(undefined4 param_1,int *param_2)

{
  int iVar1;
  int *piStack_5c;
  undefined4 uStack_58;
  undefined *puStack_54;
  undefined *puStack_50;
  undefined local_44 [4];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_10;
  int *piStack_c;
  int *piStack_8;
  
  piStack_5c = param_2;
  while (piStack_5c != (int *)0x0) {
    puStack_50 = (undefined *)0x0;
    puStack_54 = &DAT_0046af4c;
    uStack_58 = param_1;
    (**(code **)(*piStack_5c + 0xc))();
    iVar1 = (**(code **)(*piStack_8 + 0x30))(piStack_8);
    if (iVar1 != 0) {
      (**(code **)(*piStack_c + 0x44))(piStack_c,0,&piStack_5c);
      puStack_54 = local_44;
      puStack_50 = &DAT_0046af4c;
      uStack_40 = _DAT_0046af50;
      uStack_3c = _DAT_0046af54;
      uStack_38 = _DAT_0046af58;
      uStack_24 = DAT_0046af6c;
      uStack_34 = _DAT_0046af5c;
      uStack_30 = _DAT_0046af60;
      uStack_2c = _DAT_0046af64;
      uStack_28 = _DAT_0046af68;
      uStack_20 = DAT_0046af70;
      uStack_1c = DAT_0046af74;
      uStack_18 = DAT_0046af78;
      FUN_0003d730(&DAT_0046af4c,piStack_5c);
      FUN_002a5230(uStack_10,iVar1);
      FUN_0003d730(&DAT_0046af4c,local_44);
    }
    piStack_5c = (int *)(**(code **)(*piStack_c + 0x38))(piStack_c);
  }
  return;
}
