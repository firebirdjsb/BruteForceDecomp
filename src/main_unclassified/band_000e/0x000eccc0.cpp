/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9AB0CE4745BB61C73CCAC57E1A3D8FCDDDA89E0DC0644C1BD2650D437E245288
 * Entry: 0x000eccc0, Ghidra index: 2941, label: FUN_000eccc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039ee68;
extern uint32_t PTR_LAB_0039ee54;
extern uint32_t PTR_LAB_003a3f18;
void FUN_000eccc0(void)

{
  undefined4 *unaff_ESI;
  
  FUN_000ebdc0();
  *unaff_ESI = &PTR_FUN_0039ee68;
  unaff_ESI[2] = &PTR_LAB_003a3f18;
  unaff_ESI[3] = &PTR_LAB_0039ee54;
  unaff_ESI[0x19] = 0;
  unaff_ESI[0x19] = 0xe4e20a03;
  unaff_ESI[0x17] = 0x42f00000;
  *(undefined1 *)(unaff_ESI + 0x1a) = 1;
  return;
}
