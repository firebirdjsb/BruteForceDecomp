/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6065B95EFA7193FA575E7D68B2D8F664DD69523754802C5FB5D2CC3C7FECE2DA
 * Entry: 0x002210d0, Ghidra index: 7568, label: FUN_002210d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00394a78;
extern uint32_t PTR_LAB_00394a74;
void FUN_002210d0(void)

{
  undefined4 *in_ECX;
  
  FUN_001548f0();
  *in_ECX = &PTR_FUN_00394a78;
  in_ECX[6] = &PTR_LAB_00394a74;
  in_ECX[0x55] = 0;
  in_ECX[0x56] = 0;
  in_ECX[0x57] = 0;
  in_ECX[0x58] = 0;
  in_ECX[0x59] = 0;
  in_ECX[0x5a] = 0;
  in_ECX[0x5b] = 0;
  in_ECX[0x5d] = 0;
  in_ECX[0x5e] = 0;
  in_ECX[0x5f] = 0;
  in_ECX[0x61] = 0;
  in_ECX[0x62] = 0;
  in_ECX[99] = 0;
  in_ECX[0x65] = 0;
  in_ECX[0x66] = 0;
  in_ECX[0x67] = 0;
  in_ECX[0x69] = 0;
  in_ECX[0x6a] = 0;
  in_ECX[0x6b] = 0;
  in_ECX[1] = 0x16;
  *(undefined1 *)(in_ECX + 0x54) = 1;
  return;
}
