/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6ECF4A5CB7D5AFBCD3897C5368B76872D6F6864714FD52AB3E36F178C8831AE0
 * Entry: 0x00023ca0, Ghidra index: 244, label: FUN_00023ca0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00023ca0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  int in_ECX;
  
  uVar1 = in_EAX[2];
  uVar2 = in_EAX[1];
  *(undefined4 *)(in_ECX + 0xc) = *in_EAX;
  *(undefined4 *)(in_ECX + 0x10) = uVar2;
  *(undefined4 *)(in_ECX + 0x14) = uVar1;
  return;
}
