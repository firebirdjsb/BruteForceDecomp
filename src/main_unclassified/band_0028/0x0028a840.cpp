/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E743142CC2600F10927E0CA9B7B171F42EC0F590994088D98877AB432A1E094A
 * Entry: 0x0028a840, Ghidra index: 9167, label: FUN_0028a840
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469888;
void FUN_0028a840(void)

{
  uint uVar1;
  void *__src;
  int iVar2;
  int unaff_EBX;
  undefined4 *unaff_EDI;
  
  __src = (void *)(*DAT_00469888 + unaff_EBX * -0x10);
  _memmove((void *)((int)__src + 0x10),__src,unaff_EBX * 0x10);
  if (DAT_00469888[2] <= *DAT_00469888) {
    FUN_0028a460();
  }
  uVar1 = *DAT_00469888;
  *DAT_00469888 = uVar1 + 0x10;
  iVar2 = uVar1 + 0x10 + unaff_EBX * -0x10;
  *(undefined4 *)(iVar2 + -0x10) = *unaff_EDI;
  *(undefined4 *)(iVar2 + -0xc) = unaff_EDI[1];
  *(undefined4 *)(iVar2 + -8) = unaff_EDI[2];
  *(undefined4 *)(iVar2 + -4) = unaff_EDI[3];
  FUN_0028a8b0();
  return;
}
