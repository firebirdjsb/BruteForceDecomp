/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E3697F56FB54D9E5DB64327DD089D7D3DCAE4FB7744102C98453AC1EB51FA1DC
 * Entry: 0x002d61e0, Ghidra index: 10236, label: FUN_002d61e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0038e4f4;
extern uint32_t PTR_FUN_0038e4fc;
extern uint32_t PTR_FUN_0038e640;
extern uint32_t PTR_FUN_0038e6d4;
void FUN_002d61e0(void)

{
  undefined4 *puVar1;
  int unaff_ESI;
  
  puVar1 = (undefined4 *)FUN_002bf2b0();
  *puVar1 = &PTR_FUN_0038e6d4;
  puVar1[0x1c] = 0;
  *(int *)(unaff_ESI + 0x74) = *(int *)(unaff_ESI + 0x74) + 1;
  *(int *)(unaff_ESI + 0x78) = *(int *)(unaff_ESI + 0x78) + 1;
  puVar1[0x20] = &PTR_FUN_0038e640;
  *puVar1 = &PTR_FUN_0038e4fc;
  puVar1[0x20] = &PTR_FUN_0038e4f4;
  *(undefined2 *)(puVar1 + 0x22) = 0;
  *(undefined2 *)((int)puVar1 + 0x8a) = 0;
  *(undefined2 *)(puVar1 + 0x24) = 1;
  puVar1[0x23] = 0;
  puVar1[0x21] = 0xffffffff;
  return;
}
