/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D33324E362FB505DCA303A431C9B7CF3386D9AD3271581DFA8788582D44D5399
 * Entry: 0x001faae0, Ghidra index: 7095, label: FUN_001faae0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_001faae0(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = FUN_001f9d40(param_1,param_2,param_3);
  if ((cVar1 == '\0') && (*param_2 == 0x1b86c5d2)) {
    if ((char)param_1 != '\0') {
      *param_3 = *(undefined4 *)(in_ECX + 0x124);
      return '\x01';
    }
    *(undefined4 *)(in_ECX + 0x124) = *param_3;
    cVar1 = '\x01';
  }
  return cVar1;
}
