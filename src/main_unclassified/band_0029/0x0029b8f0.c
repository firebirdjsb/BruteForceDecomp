/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7DC32E5A7DE574BF9B6DD2E33F9526BDB8F996B8D05A267CEB8F2930CDE8787F
 * Entry: 0x0029b8f0, Ghidra index: 9428, label: FUN_0029b8f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0029b8f0(void)

{
  undefined4 *in_EAX;
  int in_ECX;
  
  switch(*(undefined4 *)(in_ECX + 4)) {
  case 0x29:
  case 0x3b:
  case 0x106:
  case 0x107:
  case 0x108:
  case 0x112:
  case 0x11d:
    in_EAX[1] = 0;
    *in_EAX = 0;
    return;
  default:
    FUN_0029ba30();
    return;
  }
}
