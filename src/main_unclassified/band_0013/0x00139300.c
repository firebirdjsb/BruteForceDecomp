/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E626851DBB6EF684DC6AD6B51EA70DD3AFDF3689C2A1239D5E361F4E725B6194
 * Entry: 0x00139300, Ghidra index: 3943, label: FUN_00139300
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_00139300(int param_1,int param_2)

{
  int *in_EAX;
  
  if (param_1 != param_2) {
    param_1 = param_1 - (int)in_EAX;
    do {
      (**(code **)(*in_EAX + 4))(param_1 + (int)in_EAX);
      in_EAX = in_EAX + 0xb;
    } while (param_1 + (int)in_EAX != param_2);
  }
  return in_EAX;
}
