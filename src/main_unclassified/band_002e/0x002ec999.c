/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 11B71DDD47A116D08F00EF43BB21C6C057249542B08E4105841F5046184EF5D7
 * Entry: 0x002ec999, Ghidra index: 10664, label: __handle_qnan1
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a8fa0;
extern uint32_t _DAT_0040f4d8;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __handle_qnan1
   
   Library: Visual Studio 2003 Release */

float10 __handle_qnan1(undefined4 param_1,double param_2,undefined4 param_3)

{
  float10 fVar1;
  
  if (DAT_004a8fa0 == 0) {
    fVar1 = (float10)__umatherr(1,param_1,param_2,0,param_2,param_3);
    return fVar1;
  }
  _DAT_0040f4d8 = 0x21;
  __ctrlfp();
  return (float10)param_2;
}
