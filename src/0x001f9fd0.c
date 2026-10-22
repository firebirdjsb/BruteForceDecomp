/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E74C82607EADAC20732CB0F095D12CEF047043E22EDA980A903B29036BA637DB
 * Entry: 0x001f9fd0, Ghidra index: 7082, label: FUN_001f9fd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00396488;
extern uint32_t PTR_LAB_0039644c;
extern uint32_t PTR_LAB_00396458;
extern uint32_t PTR_LAB_00396470;
extern uint32_t PTR_LAB_003967a8;
extern uint32_t PTR_LAB_003967b8;
void FUN_001f9fd0(void)

{
  undefined4 *unaff_ESI;
  undefined1 local_4 [4];
  
  FUN_001f89b0(local_4);
  *unaff_ESI = &PTR_FUN_00396488;
  unaff_ESI[2] = &PTR_LAB_00396470;
  unaff_ESI[3] = &PTR_LAB_003967b8;
  unaff_ESI[0x10] = &PTR_LAB_00396458;
  unaff_ESI[0x11] = &PTR_LAB_003967a8;
  unaff_ESI[0x1f] = &PTR_LAB_0039644c;
  unaff_ESI[0x46] = 0x42340000;
  unaff_ESI[0x47] = 0x41700000;
  return;
}
