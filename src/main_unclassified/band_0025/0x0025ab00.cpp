/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 852ED584FFEAA66D8E329BD47C9930E9F6950B5A7852F3FFF04A11BC4F4AA64B
 * Entry: 0x0025ab00, Ghidra index: 8526, label: FUN_0025ab00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003934bc;
extern uint32_t PTR_FUN_003935b8;
extern uint32_t PTR_LAB_00393520;
extern uint32_t PTR_LAB_00393604;
void FUN_0025ab00(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 in_ECX;
  int unaff_EBX;
  undefined4 *unaff_EDI;
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)in_ECX >> 0x18);
  *unaff_EDI = PTR_FUN_003935b8;
  unaff_EDI[1] = PTR_FUN_003934bc;
  *(undefined1 *)(unaff_EDI + 2) = local_1;
  iVar2 = FUN_0025af60(unaff_EDI + 2);
  unaff_EDI[3] = iVar2;
  *(undefined1 *)(iVar2 + 0x19) = 1;
  *(undefined4 *)(unaff_EDI[3] + 4) = unaff_EDI[3];
  *(undefined4 *)unaff_EDI[3] = unaff_EDI[3];
  *(undefined4 *)(unaff_EDI[3] + 8) = unaff_EDI[3];
  unaff_EDI[4] = 0;
  *unaff_EDI = &PTR_LAB_00393520;
  puVar1 = unaff_EDI + 6;
  *puVar1 = &PTR_LAB_00393604;
  unaff_EDI[7] = 1;
  unaff_EDI[8] = unaff_EDI;
  iVar2 = *(int *)(unaff_EBX + 8);
  unaff_EDI[5] = iVar2;
  if (iVar2 == 0) {
    unaff_EDI[5] = puVar1;
    return;
  }
  **(int **)(unaff_EBX + 0xc) = (int)puVar1;
  return;
}
