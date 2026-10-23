/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5DB0BAF60B27E98860D6A6DC393DE208EB725B3FFE01B3A0E488E827316B00E1
 * Entry: 0x002bbe20, Ghidra index: 9915, label: FUN_002bbe20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc650;
void FUN_002bbe20(void)

{
  int in_EAX;
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int unaff_EDI;
  
  uVar4 = in_EAX + 0x1fU & 0xffffffe0;
  uVar3 = 0x7fd8;
  if (0x7fd8 < uVar4) {
    uVar3 = uVar4;
  }
  puVar1 = (undefined4 *)(*(code *)PTR_FUN_003bc650)(uVar3 + 0x28);
  *puVar1 = *(undefined4 *)(unaff_EDI + 4);
  *(undefined4 **)(unaff_EDI + 4) = puVar1;
  uVar2 = (int)puVar1 + 0x23U & 0xffffffe0;
  *(uint *)(unaff_EDI + 8) = uVar2 + uVar4;
  *(uint *)(unaff_EDI + 0xc) = uVar2 + uVar3;
  return;
}
