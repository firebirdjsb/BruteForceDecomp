/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 43903FCF362C101AF5F7C1C7EB38A35B8DCAF7C3FD9862628B49E96A0D484BA9
 * Entry: 0x000a8b30, Ghidra index: 2014, label: FUN_000a8b30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a0588;
extern uint32_t PTR_LAB_003a0f0c;
void FUN_000a8b30(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_EAX;
  int unaff_ESI;
  
  in_EAX[1] = 0;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  in_EAX[7] = 0;
  *(undefined1 *)(in_EAX + 8) = 0;
  in_EAX[6] = 0x3a83126f;
  *in_EAX = PTR_FUN_003a0588;
  puVar1 = in_EAX + 0xd;
  *puVar1 = PTR_LAB_003a0f0c;
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
