/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E25322525FF49A3893BD1613188AE6DC7CCF492DEA23DA28ED3A196BB5589FB6
 * Entry: 0x00162290, Ghidra index: 4633, label: FUN_00162290
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00162290(void)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  int iVar2;
  
  *in_EAX = 0;
  in_EAX[4] = 0;
  in_EAX[5] = 0;
  in_EAX[6] = 0;
  in_EAX[7] = 0;
  in_EAX[0x12] = 0;
  in_EAX[0x13] = 0;
  in_EAX[0x19] = 0;
  in_EAX[0x1a] = 0;
  in_EAX[0x1b] = 0;
  in_EAX[0x20] = 0;
  in_EAX[0x21] = 0;
  in_EAX[0x23] = 0;
  in_EAX[0x24] = 0;
  in_EAX[0x25] = 0;
  in_EAX[0x27] = 0;
  in_EAX[0x28] = 0;
  in_EAX[0x29] = 0;
  puVar1 = in_EAX + 0x2a;
  iVar2 = 8;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  in_EAX[0x3a] = 0;
  in_EAX[0x3f] = 0;
  in_EAX[0x40] = 0;
  in_EAX[0x41] = 0;
  in_EAX[0x43] = 0;
  in_EAX[0x44] = 0;
  in_EAX[0x45] = 0;
  return;
}
