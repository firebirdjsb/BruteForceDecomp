/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F1DDBD300CCC0D788EA09941E5649475FE02EAA01E9AFADED292184F3D8E26CF
 * Entry: 0x0025bfb0, Ghidra index: 8550, label: FUN_0025bfb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039307c;
extern uint32_t PTR_FUN_00393090;
void FUN_0025bfb0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_ECX;
  undefined4 *unaff_EDI;
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)in_ECX >> 0x18);
  *unaff_EDI = &PTR_FUN_00393090;
  unaff_EDI[1] = &PTR_FUN_0039307c;
  *(undefined1 *)(unaff_EDI + 2) = local_1;
  iVar1 = FUN_0025af60(unaff_EDI + 2);
  unaff_EDI[3] = iVar1;
  *(undefined1 *)(iVar1 + 0x19) = 1;
  *(undefined4 *)(unaff_EDI[3] + 4) = unaff_EDI[3];
  *(undefined4 *)unaff_EDI[3] = unaff_EDI[3];
  *(undefined4 *)(unaff_EDI[3] + 8) = unaff_EDI[3];
  unaff_EDI[4] = 0;
  *(undefined1 *)(unaff_EDI + 5) = local_1;
  iVar1 = FUN_00148fb0(unaff_EDI + 5);
  unaff_EDI[6] = iVar1;
  *(undefined1 *)(iVar1 + 0x25) = 1;
  *(undefined4 *)(unaff_EDI[6] + 4) = unaff_EDI[6];
  *(undefined4 *)unaff_EDI[6] = unaff_EDI[6];
  *(undefined4 *)(unaff_EDI[6] + 8) = unaff_EDI[6];
  unaff_EDI[7] = 0;
  uVar2 = FUN_00061500(unaff_EDI + 9);
  unaff_EDI[10] = uVar2;
  unaff_EDI[0xb] = 0;
  unaff_EDI[8] = 1;
  return;
}
