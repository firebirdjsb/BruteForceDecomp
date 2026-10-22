/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1DCC8874D9238F2065002BB7D2C17E18E2558117FE1CC52867770C3F50C0BF22
 * Entry: 0x002c79f0, Ghidra index: 10110, label: FUN_002c79f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0038e668;
extern uint32_t PTR_FUN_0039a714;
extern uint32_t PTR_LAB_0038e664;
void FUN_002c79f0(void)

{
  undefined4 *in_ECX;
  undefined4 unaff_ESI;
  
  FUN_002c7820();
  *(undefined2 *)(in_ECX + 3) = 0;
  *(undefined2 *)((int)in_ECX + 0xe) = 0;
  in_ECX[4] = 0;
  *(undefined2 *)(in_ECX + 5) = 1;
  in_ECX[7] = 0;
  in_ECX[6] = 0;
  in_ECX[9] = &PTR_FUN_0039a714;
  *in_ECX = &PTR_FUN_0038e668;
  in_ECX[9] = &PTR_LAB_0038e664;
  in_ECX[8] = unaff_ESI;
  in_ECX[10] = unaff_ESI;
  return;
}
