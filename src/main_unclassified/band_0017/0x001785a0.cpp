/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5E15EAD2CB138C6A21F657761AD364DF9A07CA5F458860AF5931EF3E4C39AD47
 * Entry: 0x001785a0, Ghidra index: 4965, label: FUN_001785a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469998;
extern uint32_t PTR_LAB_00399db8;
undefined4 * FUN_001785a0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (DAT_00469998 == (undefined4 *)0x0) {
    DAT_00469998 = (undefined4 *)FUN_002ea01d(0x30);
    if (DAT_00469998 == (undefined4 *)0x0) {
      DAT_00469998 = (undefined4 *)0x0;
    }
    else {
      *DAT_00469998 = &PTR_LAB_00399db8;
      DAT_00469998[3] = 0;
      puVar2 = DAT_00469998 + 2;
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      DAT_00469998[1] = 1;
      DAT_00469998[10] = 0;
      *(undefined1 *)(DAT_00469998 + 0xb) = 0;
    }
    FUN_001780e0();
  }
  return DAT_00469998;
}
