/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F7D1A284D927211213558319493C4FE4DD605CCAF25AB9EED26F01403AA86D72
 * Entry: 0x0029de40, Ghidra index: 9467, label: FUN_0029de40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469880;
extern uint32_t PTR_LAB_00391108;
/* WARNING: Removing unreachable block (ram,0x0029def0) */

undefined4 FUN_0029de40(void)

{
  int *in_EAX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *unaff_EDI;
  int **ppiStack_34;
  int *piStack_30;
  int *piStack_2c;
  int *piStack_28;
  int *piStack_24;
  undefined4 *puStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  *unaff_EDI = in_EAX;
  uStack_1c = 0x29de4e;
  (**(code **)(*in_EAX + 4))();
  puStack_20 = (undefined4 *)0x29de54;
  iVar1 = (**(code **)(*in_EAX + 0x3c))();
  if (iVar1 == 1) {
    puStack_20 = &uStack_18;
    piStack_24 = (int *)0x0;
    uStack_18 = 0;
    piStack_2c = (int *)0x29de72;
    piStack_28 = in_EAX;
    (**(code **)(*in_EAX + 0x28))();
    piStack_2c = piStack_24;
    piStack_30 = (int *)0x29de7c;
    iVar1 = (**(code **)(*piStack_24 + 0x3c))();
    if (iVar1 == 1) {
      ppiStack_34 = (int **)0x29de9c;
      (**(code **)(*in_EAX + 8))();
      ppiStack_34 = &piStack_28;
      (**(code **)(*piStack_2c + 0x28))(piStack_2c);
      puVar2 = (undefined4 *)FUN_002ea01d(0x18);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        *puVar2 = &PTR_LAB_00391108;
        puVar2[5] = 1;
      }
      FUN_0029e2f0(puVar2,&ppiStack_34);
      DAT_00469880 = DAT_00469880 + 1;
      *unaff_EDI = puVar2;
    }
    else if (piStack_28 != (int *)0x0) {
      piStack_30 = piStack_28;
      ppiStack_34 = (int **)0x29de8f;
      (**(code **)(*piStack_28 + 8))();
      return 0;
    }
  }
  return 0;
}
