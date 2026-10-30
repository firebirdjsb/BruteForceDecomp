/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 56AF7A4BBC9EE0560436C8562DE5BF6AD964E94D437101506289F00190AD03BF
 * Entry: 0x000998c0, Ghidra index: 1849, label: FUN_000998c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a11e8;
extern uint32_t PTR_LAB_003a0f00;
extern uint32_t PTR_LAB_003a11d8;
void FUN_000998c0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_EAX;
  int unaff_ESI;
  
  in_EAX[1] = 0;
  in_EAX[2] = 0;
  *in_EAX = PTR_FUN_003a11e8;
  in_EAX[3] = PTR_LAB_003a11d8;
  puVar1 = in_EAX + 0xd;
  *puVar1 = PTR_LAB_003a0f00;
  in_EAX[0xe] = 1;
  in_EAX[0xf] = *in_EAX;
  iVar2 = *(int *)(unaff_ESI + 8);
  in_EAX[0xc] = iVar2;
  if (iVar2 == 0) {
    in_EAX[0xc] = *puVar1;
    return;
  }
  **(int **)(unaff_ESI + 0xc) = (int)puVar1;
  return;
}
