/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C91DCC614EFD56C5DFB2D0CD81EEF91F1CA7343A33EC8AA1954DB67B271F841B
 * Entry: 0x003758d0, Ghidra index: 13442, label: FUN_003758d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_003b7dc0;
extern uint32_t _DAT_003b7dc4;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_003758d0(float param_1)

{
  float fVar1;
  
  fVar1 = (float)(-0x41800000 - (int)param_1 >> 1);
  fVar1 = ABS(fVar1 * (_DAT_003b7dc4 - _DAT_003b7dc0 * param_1 * fVar1 * fVar1));
  return ((float10)3.0 - (float10)fVar1 * (float10)fVar1 * (float10)param_1) * (float10)fVar1 *
         (float10)0.5;
}
