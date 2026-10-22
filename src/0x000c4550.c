/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3499BD6DEE31C958874C24B7E9B8CA44A701BDA46314AD21B523320400595750
 * Entry: 0x000c4550, Ghidra index: 2405, label: FUN_000c4550
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a5ca0;
extern uint32_t PTR_FUN_0039f4b8;
extern uint32_t _DAT_004a5ca4;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c4550(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *unaff_ESI;
  
  FUN_000ba5b0(unaff_ESI);
  uVar3 = _DAT_004a5ca4;
  *(undefined2 *)((int)unaff_ESI + 0xe) = 0x10;
  *(undefined2 *)(unaff_ESI + 3) = 0x10;
  *(undefined1 *)(unaff_ESI + 0xb) = 0xff;
  *(undefined1 *)((int)unaff_ESI + 0x2d) = 0xff;
  *(undefined1 *)((int)unaff_ESI + 0x2e) = 0xff;
  unaff_ESI[0xc] = 0;
  *unaff_ESI = &PTR_FUN_0039f4b8;
  if ((uVar3 & 1) == 0) {
    _DAT_004a5ca4 = _DAT_004a5ca4 | 1;
    DAT_004a5ca0 = 0xffffd7c0;
  }
  uVar2 = DAT_004a5ca0;
  uVar1 = (undefined1)DAT_004a5ca0;
  *(char *)((int)unaff_ESI + 0x2d) = (char)((uint)DAT_004a5ca0 >> 8);
  *(undefined1 *)(unaff_ESI + 0xb) = uVar1;
  *(char *)((int)unaff_ESI + 0x2e) = (char)((uint)uVar2 >> 0x10);
  return;
}
