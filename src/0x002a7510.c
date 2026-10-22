/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D2A5B9B4E0734579D27EDEEC31F815C314E0333280B791D846F8F67AA032EB99
 * Entry: 0x002a7510, Ghidra index: 9595, label: FUN_002a7510
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00403688;
extern uint32_t DAT_00403690;
extern uint32_t DAT_004036a0;
undefined4 FUN_002a7510(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *unaff_EDI;
  undefined4 *puStack_28;
  int iStack_24;
  undefined4 uStack_20;
  int *piStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined1 local_8 [8];
  
  piVar1 = (int *)unaff_EDI[1];
  uStack_10 = 0;
  uStack_14 = 2;
  puStack_18 = local_8;
  uStack_20 = 0x2a7526;
  piStack_1c = piVar1;
  (**(code **)(*piVar1 + 0x10))();
  do {
    if ((short)puStack_18 == 0) {
      return 0;
    }
    uStack_20 = 0;
    iStack_24 = 4;
    puStack_28 = &uStack_14;
    (**(code **)(*piVar1 + 0x10))(piVar1);
    iVar3 = 0;
    for (iVar2 = DAT_00403688; iVar2 != 0; iVar2 = (&DAT_00403690)[iVar2]) {
      if (iStack_24 == iVar2) {
        iStack_24 = *(int *)(iVar3 * 8 + 0x40368c);
        break;
      }
      iVar2 = iVar3 * 2;
      iVar3 = iVar3 + 1;
    }
    if (*unaff_EDI == 0x3f800000) {
      iVar2 = 0;
      do {
        if (((uint)puStack_28 & 0xffff) == (&DAT_004036a0)[iVar2 * 2]) break;
        iVar2 = iVar2 + 1;
      } while (iVar2 < 3);
    }
    FUN_002a6f50(iStack_24);
    (**(code **)(*piVar1 + 0x10))(piVar1,&puStack_28,2,0);
  } while( true );
}
