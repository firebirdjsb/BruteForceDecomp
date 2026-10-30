/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C11A44CA6D2B29131D26955147E86E5638A848433E38BFE47587A7A756D25A14
 * Entry: 0x0027f5e0, Ghidra index: 9021, label: FUN_0027f5e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_DAT_00391a88;
extern uint32_t PTR_DAT_00391ab0;
extern uint32_t PTR_FUN_003931b0;
void FUN_0027f5e0(undefined4 param_1)

{
  undefined4 *in_EAX;
  int in_ECX;
  int unaff_ESI;
  
  in_EAX[1] = 0;
  in_EAX[3] = 1;
  in_EAX[4] = &PTR_FUN_003931b0;
  *in_EAX = &PTR_DAT_00391ab0;
  in_EAX[4] = &PTR_DAT_00391a88;
  in_EAX[9] = 0;
  in_EAX[10] = 0;
  in_EAX[0xb] = 0;
  in_EAX[8] = 0x3f800000;
  in_EAX[0xe] = 0;
  in_EAX[0xd] = 0;
  in_EAX[0xc] = 0;
  in_EAX[7] = param_1;
  in_EAX[5] = in_ECX;
  in_EAX[6] = unaff_ESI;
  if ((in_ECX != 0) && (unaff_ESI != -1)) {
    *(int *)(in_ECX + 0x1c) = *(int *)(in_ECX + 0x1c) + 1;
  }
  return;
}
