/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 154B5D2CD6C7B93199924C77D290347322109C9D14A24123763D4656BEBF3357
 * Entry: 0x000a6fd0, Ghidra index: 1979, label: FUN_000a6fd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a0668;
extern uint32_t PTR_LAB_003a0f0c;
void FUN_000a6fd0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_EAX;
  int unaff_ESI;
  
  in_EAX[1] = 0;
  in_EAX[2] = 0;
  *in_EAX = &PTR_LAB_003a0668;
  puVar1 = in_EAX + 0xe;
  *puVar1 = &PTR_LAB_003a0f0c;
  in_EAX[0xf] = 1;
  in_EAX[0x10] = in_EAX;
  iVar2 = *(int *)(unaff_ESI + 8);
  in_EAX[0xd] = iVar2;
  if (iVar2 == 0) {
    in_EAX[0xd] = puVar1;
    return;
  }
  **(int **)(unaff_ESI + 0xc) = (int)puVar1;
  return;
}
