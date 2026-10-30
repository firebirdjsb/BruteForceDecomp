/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DDBD6BC8391CF4FDC35B2882BC7CB3345C4A5EB6C332B33757C809B94C602F50
 * Entry: 0x00023b80, Ghidra index: 241, label: FUN_00023b80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00023b80(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_EAX;
  int in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x74);
  uVar4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    uVar4 = *puVar1;
  }
  puVar2 = *(undefined4 **)(in_ECX + 0x68);
  uVar3 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = *puVar2;
  }
  in_EAX[1] = 0;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[1] = *puVar2;
  in_EAX[3] = *puVar1;
  *in_EAX = uVar3;
  in_EAX[2] = uVar4;
  return;
}
