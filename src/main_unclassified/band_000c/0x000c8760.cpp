/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FCA56B391EC27AAAB3CA95779C4BCAA2381C53CF2427FFD2AD220E62E43D3C58
 * Entry: 0x000c8760, Ghidra index: 2470, label: FUN_000c8760
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000b2230(void);

extern uint32_t PTR_FUN_0039f234;
extern uint32_t PTR_LAB_0039f220;
void FUN_000c8760(void)

{
  undefined4 *in_EAX;
  
  FUN_000b2230();
  *in_EAX = &PTR_FUN_0039f234;
  in_EAX[0xb] = &PTR_LAB_0039f220;
  in_EAX[0x1a] = 0;
  in_EAX[0x1c] = 0;
  in_EAX[0x23] = 0;
  in_EAX[0x24] = 0;
  in_EAX[0x25] = 0;
  in_EAX[0x1e] = 0;
  in_EAX[0x21] = 0;
  *(undefined2 *)((int)in_EAX + 0xe) = 0;
  *(undefined2 *)(in_EAX + 3) = 0;
  in_EAX[0x20] = 0;
  in_EAX[0x1f] = 0x3f000000;
  *(undefined1 *)(in_EAX + 0x1d) = 1;
  return;
}
