/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1A8912AB7917A9D604E8E399331FE93CA64A302DF52F8BD05592871092B4390E
 * Entry: 0x002bbdd0, Ghidra index: 9914, label: FUN_002bbdd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc654;
void FUN_002bbdd0(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *unaff_ESI;
  
  iVar1 = unaff_ESI[1];
  if ((iVar1 != 0) && (iVar1 != *unaff_ESI)) {
    (*(code *)PTR_FUN_003bc654)(iVar1);
    return;
  }
  uVar2 = *unaff_ESI + 0x23U & 0xffffffe0;
  unaff_ESI[2] = uVar2;
  uVar3 = (uint)*(ushort *)((int)unaff_ESI + 0x12);
  if (*(ushort *)((int)unaff_ESI + 0x12) == 0) {
    uVar3 = 0x7fe0;
  }
  unaff_ESI[3] = uVar2 + uVar3;
  unaff_ESI[1] = *unaff_ESI;
  return;
}
