/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F00893580D13457C9E789F2194EB424155D2287479D9BC2FDE34FE86999D99CA
 * Entry: 0x0029dda0, Ghidra index: 9466, label: FUN_0029dda0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469880;
extern uint32_t PTR_LAB_00391158;
undefined4 FUN_0029dda0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *unaff_ESI;
  undefined4 *unaff_EDI;
  int *piVar3;
  int *piStack_20;
  
  *unaff_EDI = unaff_ESI;
  (**(code **)(*unaff_ESI + 4))();
  iVar1 = (**(code **)(*unaff_ESI + 0x38))();
  if (iVar1 == 1) {
    piStack_20 = (int *)0x29ddcb;
    (**(code **)(*unaff_ESI + 0x24))();
    piStack_20 = unaff_ESI;
    iVar1 = (**(code **)(*unaff_ESI + 0x38))();
    if (iVar1 == 1) {
      piVar3 = unaff_ESI;
      (**(code **)(*unaff_ESI + 8))();
      (**(code **)(*piVar3 + 0x24))(piVar3,0,&piStack_20);
      puVar2 = (undefined4 *)FUN_002ea01d(0xc);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        *puVar2 = &PTR_LAB_00391158;
        puVar2[2] = 1;
      }
      DAT_00469880 = DAT_00469880 + 1;
      puVar2[1] = unaff_ESI;
      *unaff_EDI = puVar2;
    }
    if (piStack_20 != (int *)0x0) {
      (**(code **)(*piStack_20 + 8))(piStack_20);
    }
  }
  return 0;
}
