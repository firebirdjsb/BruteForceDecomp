/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C07C754AEC7E3F1AD7403550AFFADFB3FF6134E62E8C7E3542C308919776CA63
 * Entry: 0x0024bab0, Ghidra index: 8264, label: FUN_0024bab0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched declaration only; original x86 guest ABI remains unverified. */
extern void FUN_00249a20(void);
int FUN_0024bab0(int param_1,int param_2)

{
  int in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x2c) {
    FUN_00249a20();
    in_EAX = in_EAX + 0x2c;
  }
  return in_EAX;
}
