/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AB311C23BF8E12CB88E3210C7C5CE36A3C96E5953F869701CE08297533B88D08
 * Entry: 0x00022d20, Ghidra index: 204, label: FUN_00022d20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a4f68;
void FUN_00022d20(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_EAX;
  undefined4 *unaff_EDI;
  
  *unaff_EDI = PTR_FUN_003a4f68;
  unaff_EDI[5] = 0;
  uVar1 = *(undefined4 *)(in_EAX + 0xc);
  uVar2 = *(undefined4 *)(in_EAX + 8);
  unaff_EDI[1] = *(undefined4 *)(in_EAX + 4);
  unaff_EDI[2] = uVar2;
  unaff_EDI[3] = uVar1;
  if (unaff_EDI[5] != *(int *)(in_EAX + 0x14)) {
    FUN_0008f6a0(*(int *)(in_EAX + 0x14));
  }
  return;
}
