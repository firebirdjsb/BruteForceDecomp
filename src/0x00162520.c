/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 504893F35FEF5524BDBF06DA7E5583329831AD097AB0C61C1F907D1329352CB0
 * Entry: 0x00162520, Ghidra index: 4636, label: FUN_00162520
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00162520(void)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  int iVar2;
  
  *in_EAX = 0;
  iVar2 = 8;
  puVar1 = in_EAX;
  do {
    puVar1 = puVar1 + 4;
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  in_EAX[0x24] = 0;
  in_EAX[0x28] = 0;
  in_EAX[0x29] = 0;
  in_EAX[0x3a] = 0;
  in_EAX[0x3b] = 0;
  in_EAX[0x3c] = 0;
  in_EAX[0x3e] = 0;
  in_EAX[0x3f] = 0;
  in_EAX[0x40] = 0;
  in_EAX[0x42] = 0;
  in_EAX[0x43] = 0;
  in_EAX[0x44] = 0;
  in_EAX[0x46] = 0;
  in_EAX[0x47] = 0;
  in_EAX[0x48] = 0;
  return;
}
