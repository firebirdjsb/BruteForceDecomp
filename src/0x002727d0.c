/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C5BAC735BAB1FDFD08D1A2AE7E51F3E81D209F23E1370C0FFDDCAC9375D50C8E
 * Entry: 0x002727d0, Ghidra index: 8838, label: FUN_002727d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003924f8;
void FUN_002727d0(void)

{
  undefined4 in_EAX;
  undefined4 *unaff_ESI;
  
  FUN_002710e0(unaff_ESI,in_EAX);
  *unaff_ESI = &PTR_FUN_003924f8;
  FUN_00272830(in_EAX);
  FUN_00271330();
  FUN_00271430(unaff_ESI,unaff_ESI + 0x26,unaff_ESI + 0x15);
  return;
}
