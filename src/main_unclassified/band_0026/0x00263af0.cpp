/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3CBE67AC0EEFC3A2878AC328E638652A53466430961B4DA090FC0C3099642826
 * Entry: 0x00263af0, Ghidra index: 8689, label: FUN_00263af0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00392a00;
void FUN_00263af0(void)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  int iVar2;
  
  *in_EAX = &PTR_FUN_00392a00;
  in_EAX[1] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  in_EAX[5] = 0;
  in_EAX[6] = 0;
  in_EAX[8] = 0;
  in_EAX[9] = 0;
  in_EAX[10] = 0;
  puVar1 = in_EAX + 0x10;
  iVar2 = 2;
  do {
    puVar1[1] = 0xf;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + -4) = 0;
    puVar1 = puVar1 + 7;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  in_EAX[0x1f] = 0xf;
  in_EAX[0x1e] = 0;
  *(undefined1 *)(in_EAX + 0x1a) = 0;
  return;
}
