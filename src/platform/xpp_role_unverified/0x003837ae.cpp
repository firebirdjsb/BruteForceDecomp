/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D7992C795FFAF72EC72A6254D87B86B8F6DA3B07C09555843C5B9069BF9B88E5
 * Entry: 0x003837ae, Ghidra index: 13621, label: FUN_003837ae
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003837ae(void)

{
  int iVar1;
  int in_ECX;
  int in_EDX;
  int iVar2;
  
  iVar1 = *(int *)(in_ECX + 0x424);
  iVar2 = 0;
  if (iVar1 != in_EDX) {
    do {
      iVar2 = iVar1;
      iVar1 = *(int *)(iVar2 + 0x24);
    } while (iVar1 != in_EDX);
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(iVar1 + 0x24);
      goto LAB_003837d9;
    }
  }
  *(undefined4 *)(in_ECX + 0x424) = *(undefined4 *)(iVar1 + 0x24);
LAB_003837d9:
  if (in_EDX == *(int *)(in_ECX + 0x428)) {
    *(int *)(in_ECX + 0x428) = iVar2;
  }
  return;
}
