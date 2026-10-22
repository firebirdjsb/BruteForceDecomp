/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 41F1B4598E4C1A78A173A8E1F56975D904AF3046AF4A9C83606A674B0F3100FA
 * Entry: 0x000b89b0, Ghidra index: 2230, label: FUN_000b89b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0041ada0;
extern uint32_t PTR_FUN_0039f858;
extern uint32_t PTR_FUN_0039fba0;
void FUN_000b89b0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *unaff_EDI;
  
  puVar2 = unaff_EDI + 3;
  iVar3 = 0x60;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar2 = unaff_EDI + 0xc4;
  iVar3 = 0x200;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_000bc9c0();
  unaff_EDI[0x4c3] = &PTR_FUN_0039f858;
  unaff_EDI[0x4cf] = 0;
  unaff_EDI[0x4d0] = 0;
  unaff_EDI[0x4ce] = unaff_EDI[0x4ce] & 0xfffffffe | 2;
  *(undefined2 *)(unaff_EDI + 0x4cc) = 2;
  uVar1 = FUN_00061500(unaff_EDI + 0x4d1);
  unaff_EDI[0x4d2] = uVar1;
  unaff_EDI[0x4d3] = 0;
  uVar1 = FUN_00061500(unaff_EDI + 0x4d4);
  unaff_EDI[0x4d5] = uVar1;
  unaff_EDI[0x4d6] = 0;
  uVar1 = FUN_00061500(unaff_EDI + 0x4d8);
  unaff_EDI[0x4d9] = uVar1;
  unaff_EDI[0x4da] = 0;
  puVar2 = unaff_EDI + 0x4e0;
  iVar3 = 0xf;
  do {
    *puVar2 = 1;
    puVar2[1] = 0;
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(byte *)(unaff_EDI + 1) = *(byte *)(unaff_EDI + 1) | 2;
  puVar2 = (undefined4 *)FUN_002ea01d(0x34);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_000bc9c0();
    *puVar2 = &PTR_FUN_0039fba0;
  }
  unaff_EDI[0x4d7] = puVar2;
  *(byte *)(unaff_EDI + 1) = *(byte *)(unaff_EDI + 1) & 0xfe;
  *(undefined2 *)((int)unaff_EDI + 6) = 0;
  *(undefined2 *)(unaff_EDI + 0xc2) = 0;
  unaff_EDI[0x4df] = 7;
  unaff_EDI[0x4dd] = 0x1e;
  unaff_EDI[0x4de] = 0x28;
  DAT_0041ada0 = 1;
  *(undefined1 *)(unaff_EDI + 0x4dc) = 1;
  *unaff_EDI = param_1;
  unaff_EDI[0x4fe] = 0x3f800000;
  return;
}
