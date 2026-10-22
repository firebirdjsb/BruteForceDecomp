/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A8AAFC27EEF9837385D792B9C7A94FA8E2B262A5414AE6D52948B2D88999F8EE
 * Entry: 0x000bbd70, Ghidra index: 2281, label: FUN_000bbd70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000bbd70(undefined4 param_1)

{
  undefined4 *in_EAX;
  int in_ECX;
  
  switch(*(undefined4 *)(in_ECX + 0x30)) {
  case 0:
    *in_EAX = 0xffff9632;
    return;
  case 1:
    *in_EAX = 0xff2020a0;
    return;
  case 2:
    *in_EAX = 0xffdc693c;
    return;
  case 4:
    *in_EAX = 0xff8a5a44;
    return;
  case 5:
    *in_EAX = 0xff44dc44;
    return;
  case 6:
    param_1 = 0xff00c8c8;
  }
  *in_EAX = param_1;
  return;
}
