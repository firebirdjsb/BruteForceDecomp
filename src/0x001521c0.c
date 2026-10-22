/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 37B8A1D49CE30BA05FFF96DF6A3FA07B21A94ABD2973B51CFBD4EB4FD229F535
 * Entry: 0x001521c0, Ghidra index: 4418, label: FUN_001521c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001521c0(void)

{
  byte *in_EAX;
  
  in_EAX[0x68] = 0;
  in_EAX[0x69] = 0;
  in_EAX[0x6a] = 0;
  in_EAX[0x6b] = 0;
  in_EAX[0x78] = 0;
  in_EAX[0x79] = 0;
  in_EAX[0x7a] = 0;
  in_EAX[0x7b] = 0;
  in_EAX[0x88] = 0;
  in_EAX[0x89] = 0;
  in_EAX[0x8a] = 0;
  in_EAX[0x8b] = 0;
  in_EAX[0x98] = 0;
  in_EAX[0x99] = 0;
  in_EAX[0x9a] = 0;
  in_EAX[0x9b] = 0;
  in_EAX[0xb4] = 3;
  in_EAX[0xb5] = 0;
  in_EAX[0xb6] = 0;
  in_EAX[0xb7] = 0;
  in_EAX[0xbc] = 3;
  in_EAX[0xbd] = 0;
  in_EAX[0xbe] = 0;
  in_EAX[0xbf] = 0;
  in_EAX[0xb8] = 4;
  in_EAX[0xb9] = 0;
  in_EAX[0xba] = 0;
  in_EAX[0xbb] = 0;
  *in_EAX = *in_EAX & 0xf1;
  return;
}
