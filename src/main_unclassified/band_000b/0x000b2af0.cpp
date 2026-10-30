/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C4E0246F2CFD80C4CE073B4128F239840B32C5C4EDF3D24AED8BAA89BE1A2FE7
 * Entry: 0x000b2af0, Ghidra index: 2157, label: FUN_000b2af0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original-address 0x000BA5B0 constructor draft accepts one 32-bit
 * word-pointer argument. Xbox guest object layout/ABI remain UNVERIFIED. */
extern undefined4 * FUN_000ba5b0(undefined4 *guest_object);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a5c88;
extern uint32_t DAT_004a5c8c;
extern uint32_t PTR_FUN_0039ff50;
void FUN_000b2af0(void)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *unaff_ESI;
  
  FUN_000ba5b0(unaff_ESI);
  uVar2 = DAT_004a5c8c & 1;
  *(undefined1 *)(unaff_ESI + 0xb) = 0xff;
  *(undefined1 *)((int)unaff_ESI + 0x2d) = 0xff;
  *(undefined1 *)((int)unaff_ESI + 0x2e) = 0xff;
  *unaff_ESI = &PTR_FUN_0039ff50;
  if (uVar2 == 0) {
    DAT_004a5c8c = DAT_004a5c8c | 1;
    DAT_004a5c88 = 0xff2020a0;
  }
  uVar3 = DAT_004a5c88;
  uVar1 = (undefined1)DAT_004a5c88;
  *(char *)((int)unaff_ESI + 0x2d) = (char)((uint)DAT_004a5c88 >> 8);
  *(undefined1 *)(unaff_ESI + 0xb) = uVar1;
  *(char *)((int)unaff_ESI + 0x2e) = (char)((uint)uVar3 >> 0x10);
  unaff_ESI[0xc] = 0;
  return;
}
