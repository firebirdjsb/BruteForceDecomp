/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7A2A41224594AAA7C7379E5EE7D17C87707E13EE907B87A2D84A53DC0018AD78
 * Entry: 0x00306bad, Ghidra index: 11102, label: FUN_00306bad
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040f4f0;
extern uint32_t _DAT_003b7278;
extern uint32_t _DAT_003b7282;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00306bad(int param_1,uint param_2)

{
  uint in_EAX;
  bool in_ZF;
  short in_FPUControlWord;
  float10 in_ST0;
  float10 extraout_ST0;
  float10 fVar1;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) != 0) || (fVar1 = _DAT_003b7278, param_1 != 0)) {
      fVar1 = (float10)FUN_002f0624();
    }
LAB_00306c3c:
    if (DAT_0040f4f0 == 0) {
      fVar1 = (float10)__startOneArgErrorHandling();
      return fVar1;
    }
  }
  else {
    if (in_FPUControlWord != 0x27f) {
      in_EAX = FUN_002f060d();
      in_ST0 = extraout_ST0;
    }
    if (in_EAX < 0x3ff00000) {
      fVar1 = (float10)fpatan(in_ST0,SQRT(((float10)1 - in_ST0) * ((float10)1 + in_ST0)));
    }
    else {
      fVar1 = _DAT_003b7278;
      if ((0x3ff00000 < in_EAX) || ((param_2 & 0xfffff) != 0 || param_1 != 0)) goto LAB_00306c3c;
      fVar1 = _DAT_003b7282;
      if ((param_2 & 0x80000000) != 0) {
        fVar1 = -_DAT_003b7282;
      }
    }
    if (DAT_0040f4f0 == 0) {
      fVar1 = (float10)__math_exit();
      return fVar1;
    }
  }
  return fVar1;
}
