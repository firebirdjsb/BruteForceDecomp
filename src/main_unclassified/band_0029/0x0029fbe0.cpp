/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6B90EDAD0D9A78B6F7D0727F4F306C8F624BEE8495A8F8A31FD1CCE0D41C968B
 * Entry: 0x0029fbe0, Ghidra index: 9494, label: FUN_0029fbe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046984c;
extern uint32_t PTR_FUN_00390f08;
extern uint32_t PTR_LAB_00390ef8;
extern uint32_t PTR_LAB_00390fdc;
void FUN_0029fbe0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_EAX;
  int unaff_ESI;
  
  DAT_0046984c = DAT_0046984c + 1;
  *in_EAX = PTR_FUN_00390f08;
  in_EAX[1] = PTR_LAB_00390ef8;
  puVar1 = in_EAX + 3;
  *puVar1 = PTR_LAB_00390fdc;
  in_EAX[4] = 1;
  in_EAX[5] = *in_EAX;
  iVar2 = *(int *)(unaff_ESI + 8);
  in_EAX[2] = iVar2;
  if (iVar2 == 0) {
    in_EAX[2] = *puVar1;
    return;
  }
  **(int **)(unaff_ESI + 0xc) = (int)puVar1;
  return;
}
