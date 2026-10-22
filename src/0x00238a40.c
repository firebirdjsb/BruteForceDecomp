/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C96FA0E9006FEC1D52E7EE1F1F5DDA355B3E357E94F0BB1CA6D29D4AC805918F
 * Entry: 0x00238a40, Ghidra index: 7884, label: FUN_00238a40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039411c;
extern uint32_t PTR_LAB_00394128;
extern uint32_t PTR_LAB_00394134;
extern uint32_t _DAT_004698e4;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00238a40(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 *unaff_ESI;
  
  *unaff_ESI = 0;
  FUN_00239ae0();
  puVar1 = (undefined4 *)(unaff_ESI + 100);
  iVar2 = 0x4a;
  do {
    puVar1[1] = 0;
    puVar1[2] = 0x14;
    puVar1[3] = 0;
    *puVar1 = &PTR_LAB_00394128;
    puVar1 = puVar1 + 5;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined4 *)(unaff_ESI + 0x62c);
  iVar2 = 0xe8;
  do {
    puVar1[1] = 0;
    puVar1[2] = 0x14;
    puVar1[3] = 0;
    *puVar1 = &PTR_LAB_00394134;
    puVar1 = puVar1 + 6;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined4 *)(unaff_ESI + 0x1bec);
  iVar2 = 8;
  do {
    puVar1[1] = 0;
    puVar1[2] = 0x14;
    puVar1[3] = 0;
    *puVar1 = &PTR_LAB_0039411c;
    puVar1 = puVar1 + 5;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  _DAT_004698e4 = _DAT_004698e4 + 1;
  return;
}
