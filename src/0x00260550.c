/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C2D6851D087893EA576FDEDD4D33AB1F2B56AE9C80967DF05A27078B29C4AC74
 * Entry: 0x00260550, Ghidra index: 8620, label: FUN_00260550
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00392e3c;
extern uint32_t PTR_LAB_00392e58;
void FUN_00260550(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_EAX;
  int unaff_ESI;
  
  FUN_00285780();
  *in_EAX = &PTR_LAB_00392e58;
  puVar1 = in_EAX + 8;
  *puVar1 = &PTR_LAB_00392e3c;
  in_EAX[9] = 1;
  in_EAX[10] = in_EAX;
  iVar2 = *(int *)(unaff_ESI + 8);
  in_EAX[7] = iVar2;
  if (iVar2 == 0) {
    in_EAX[7] = puVar1;
    return;
  }
  **(int **)(unaff_ESI + 0xc) = (int)puVar1;
  return;
}
