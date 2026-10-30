/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D715E29BA8670C53B97A45BA14770471F6E784367255C8111768346E1AA431C4
 * Entry: 0x00023940, Ghidra index: 235, label: FUN_00023940
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039cc18;
void FUN_00023940(void)

{
  undefined4 *in_EAX;
  
  in_EAX[0x41] = 0;
  *(undefined1 *)(in_EAX + 0x42) = 1;
  in_EAX[0x45] = 0;
  *in_EAX = PTR_LAB_0039cc18;
  in_EAX[0x43] = 0x58;
  in_EAX[0x44] = 0x415a1018;
  return;
}
