/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 482250C976080E2A9668984A15CB791653DDFA6529FCECF9977D8DF68C7983E8
 * Entry: 0x00331015, Ghidra index: 12387, label: FUN_00331015
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00331015(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x654);
  if (iVar1 != 0) {
    FUN_00330c53(iVar1);
    *(int *)(in_ECX + 0x654) = 0;
  }
  iVar1 = *(int *)(in_ECX + 0x650);
  if (iVar1 != 0) {
    FUN_0033c53d(iVar1);
    *(int *)(in_ECX + 0x650) = 0;
  }
  *(undefined4 *)(in_ECX + 0x658) = 8;
  return;
}
