/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 26D61CDFE962B99BEC9440A5DB6F3BC9CD7195B8828EFA72FA1EF64A0A7D05C0
 * Entry: 0x000c1b30, Ghidra index: 2358, label: FUN_000c1b30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000bb360(void);
extern undefined4 FUN_000ba6d0(void);

extern uint32_t PTR_FUN_0039f694;
void FUN_000c1b30(void)

{
  undefined4 *in_EAX;
  
  FUN_000bb360();
  *in_EAX = &PTR_FUN_0039f694;
  in_EAX[0x11] = 0;
  in_EAX[0x12] = 0;
  in_EAX[0x13] = 0xffffffff;
  FUN_000ba6d0();
  return;
}
