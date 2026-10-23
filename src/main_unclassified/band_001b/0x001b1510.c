/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CE6A12A60B2564ABF4D1EEEAAFDC33DC186CC5158FEBC9C84EBC37D275F7D72A
 * Entry: 0x001b1510, Ghidra index: 5601, label: FUN_001b1510
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b1510(void)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  int iVar2;
  
  *in_EAX = 0;
  iVar2 = 2;
  puVar1 = in_EAX;
  do {
    puVar1[8] = 0xf;
    puVar1[7] = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 7;
  } while (iVar2 != 0);
  puVar1 = in_EAX + 0x15;
  iVar2 = 2;
  do {
    puVar1[1] = 0xf;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + -4) = 0;
    puVar1 = puVar1 + 7;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  in_EAX[0x21] = 0;
  in_EAX[0x28] = 0;
  in_EAX[0x29] = 0;
  in_EAX[0x2a] = 0;
  return;
}
