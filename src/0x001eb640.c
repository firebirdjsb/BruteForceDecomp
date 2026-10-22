/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2D34B841FE05277D93402F170EC2CF56F0AFF2A8E233C39744A553CB1541186E
 * Entry: 0x001eb640, Ghidra index: 6881, label: FUN_001eb640
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001eb640(void)

{
  undefined4 *in_EAX;
  
  in_EAX[7] = 1000;
  in_EAX[9] = 1000;
  *in_EAX = 0x34;
  in_EAX[1] = 4;
  in_EAX[2] = 0x4000;
  in_EAX[3] = 0x2000;
  in_EAX[4] = 0x20;
  in_EAX[5] = 3;
  in_EAX[6] = 2;
  in_EAX[8] = 500;
  in_EAX[10] = 4000;
  *(undefined1 *)(in_EAX + 0xb) = 1;
  *(undefined1 *)((int)in_EAX + 0x2d) = 1;
  in_EAX[0xc] = 0;
  return;
}
