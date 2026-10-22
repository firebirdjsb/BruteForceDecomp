/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 86AA144ED023BFED8CFDBC57F8CA64180B224C9189312F1B6BCE69F1F87B83F4
 * Entry: 0x002a6f00, Ghidra index: 9593, label: FUN_002a6f00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004036b4;
void FUN_002a6f00(void)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  
  iVar1 = in_EAX[1];
  if ((iVar1 == 0xc) || (iVar2 = *in_EAX, iVar2 == 0xc)) {
    *in_EAX = 0x302;
    in_EAX[1] = 0x302;
    return;
  }
  if ((iVar1 != 0xd) && (iVar2 != 0xd)) {
    in_EAX[1] = *(int *)(&DAT_004036b4 + iVar1 * 4);
    *in_EAX = *(int *)(&DAT_004036b4 + iVar2 * 4);
    return;
  }
  *in_EAX = 0x303;
  in_EAX[1] = 0x303;
  return;
}
