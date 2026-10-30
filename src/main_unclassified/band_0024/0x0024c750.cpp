/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E3581E2236005178737F178EE62349188437623B22124093034FE86FE3DDCD14
 * Entry: 0x0024c750, Ghidra index: 8292, label: FUN_0024c750
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0024c750(int param_1,int param_2)

{
  int in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x20) {
    FUN_0001f4f0(param_1,0,0xffffffff);
    *(undefined4 *)(in_EAX + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    in_EAX = in_EAX + 0x20;
  }
  return in_EAX;
}
