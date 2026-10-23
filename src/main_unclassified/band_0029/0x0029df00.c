/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D8876C10A84B3B6541E2FFA416E4FF32C7434630495DDFFA4089E2FF07827437
 * Entry: 0x0029df00, Ghidra index: 9468, label: FUN_0029df00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469880;
extern uint32_t PTR_LAB_003910c0;
extern uint32_t _DAT_00000000;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0029df00(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *unaff_EBX;
  int *unaff_ESI;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  
  *unaff_EBX = unaff_ESI;
  (**(code **)(*unaff_ESI + 4))();
  iVar1 = (**(code **)(*unaff_ESI + 0x38))();
  if (iVar1 == 1) {
    puStack_28 = (undefined1 *)0x0;
    puStack_24 = &stack0xffffffe4;
    (**(code **)(*unaff_ESI + 0x24))();
    iVar1 = (**(code **)(_DAT_00000000 + 0x14))();
    if (iVar1 < 2) {
      (**(code **)(*unaff_ESI + 8))();
      (**(code **)(_DAT_00000000 + 0x1c))(0,&stack0xffffffd4);
      if (iVar1 == 1) {
        puStack_24 = (undefined1 *)0x0;
        (**(code **)(*unaff_ESI + 0x30))(unaff_ESI,0,&puStack_24);
        puStack_28 = puStack_24;
      }
      puVar2 = (undefined4 *)FUN_002ea01d(0xc);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        *puVar2 = &PTR_LAB_003910c0;
        puVar2[2] = 1;
      }
      DAT_00469880 = DAT_00469880 + 1;
      puVar2[1] = puStack_28;
      *unaff_EBX = puVar2;
    }
    if (unaff_ESI != (int *)0x0) {
      (**(code **)(*unaff_ESI + 8))(unaff_ESI);
    }
  }
  return 0;
}
