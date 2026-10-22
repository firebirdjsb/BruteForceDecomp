/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CE015B6CED001ACCFFCA78CB3FEB8F41548820676AD11DA9270CACCB80159A4A
 * Entry: 0x001f8160, Ghidra index: 7059, label: FUN_001f8160
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001f8160(undefined4 param_1)

{
  int iVar1;
  int in_EAX;
  int in_ECX;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = (in_EAX - in_ECX) / 0xc;
  iVar2 = iVar1 / 2;
  if (0 < iVar2) {
    puVar3 = (undefined4 *)(in_ECX + iVar2 * 0xc);
    do {
      iVar2 = iVar2 + -1;
      FUN_001f8290(iVar1,puVar3[-3],puVar3[-2],puVar3[-1],param_1);
      puVar3 = puVar3 + -3;
    } while (0 < iVar2);
  }
  return;
}
