/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7D19FFF6AB6DCD8934AAF6693CD778056CA4C720CB26C17A0FFFC76495C39336
 * Entry: 0x0008a0b0, Ghidra index: 1653, label: FUN_0008a0b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0008a0b0(void)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  int iVar2;
  
  *in_EAX = 0;
  in_EAX[1] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  in_EAX[5] = 0;
  in_EAX[7] = 0;
  in_EAX[8] = 0;
  in_EAX[9] = 0;
  puVar1 = in_EAX + 10;
  iVar2 = 9;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  in_EAX[0x1e] = 0;
  in_EAX[0x1d] = 0;
  in_EAX[0x1c] = 0;
  in_EAX[0x27] = 0x3f800000;
  in_EAX[0x23] = 0x3f800000;
  in_EAX[0x1f] = 0x3f800000;
  in_EAX[0x26] = 0;
  in_EAX[0x25] = 0;
  in_EAX[0x24] = 0;
  in_EAX[0x22] = 0;
  in_EAX[0x21] = 0;
  in_EAX[0x20] = 0;
  puVar1 = in_EAX + 0xb;
  iVar2 = 9;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}
