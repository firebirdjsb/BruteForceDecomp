/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D991924243ABCAE3918343AD1F5C1DB20BCE358E13BE90D2B31C2ADFD2FA73E5
 * Entry: 0x002c70d0, Ghidra index: 10093, label: FUN_002c70d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0038e694;
extern uint32_t PTR_FUN_0038e698;
extern uint32_t PTR_LAB_0038e65c;
void FUN_002c70d0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *unaff_EDI;
  
  *unaff_EDI = PTR_FUN_0038e698;
  *(undefined2 *)(unaff_EDI + 4) = 0;
  *(undefined2 *)((int)unaff_EDI + 0x12) = 0;
  unaff_EDI[5] = 0;
  *(undefined2 *)(unaff_EDI + 6) = 1;
  *(undefined2 *)(unaff_EDI + 9) = 1;
  *(undefined2 *)(unaff_EDI + 7) = 0;
  *(undefined2 *)((int)unaff_EDI + 0x1e) = 0;
  unaff_EDI[8] = 0;
  unaff_EDI[1] = param_1;
  puVar1 = (undefined4 *)FUN_002ea01d(0x10);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_002be8e0();
    *puVar1 = &PTR_LAB_0038e65c;
  }
  unaff_EDI[2] = puVar1;
  puVar1 = (undefined4 *)FUN_002ea01d(0x10);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_002be8e0();
    *puVar1 = &PTR_LAB_0038e65c;
  }
  unaff_EDI[3] = puVar1;
  puVar1 = (undefined4 *)FUN_002ea01d(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_0038e694;
    puVar1[1] = 0;
    puVar1[2] = 0;
    unaff_EDI[0xb] = puVar1;
    unaff_EDI[10] = 0;
    FUN_002c7250();
    return;
  }
  unaff_EDI[0xb] = 0;
  unaff_EDI[10] = 0;
  FUN_002c7250();
  return;
}
