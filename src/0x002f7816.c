/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DF6C6D3158AD46590B965143FE36425ED6AA5051BD40F044888A7DAEB6A4C98F
 * Entry: 0x002f7816, Ghidra index: 10926, label: LocalFree
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a90d4;
uint XAPILIB__LocalFree(uint param_1)

{
  char cVar1;
  
  cVar1 = FUN_002f75e8(DAT_004a90d4,0,param_1);
  return ~-(uint)(cVar1 != '\0') & param_1;
}
