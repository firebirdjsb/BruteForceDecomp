/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EF53E7640EDE176797F7E3C7615B0590951C6C038D47B24F37FD3E369552A585
 * Entry: 0x002ea02b, Ghidra index: 10572, label: FUN_002ea02b
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00386ae8;
void FUN_002ea02b(void)

{
  undefined4 *in_ECX;
  
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  /* XBE 0x002ea035: MOV m32,0x00386ae8 stores a 32-bit guest VA.
   * Register ABI and guest memory translation remain ABI_UNVERIFIED. */
  *in_ECX = UINT32_C(0x00386ae8);
  return;
}
